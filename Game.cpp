#include "Game.h"
#include <iostream>
#include <cwctype>
#include <random>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;
using namespace System::IO;

// начало игры
System::Void Practise::Game::fromFileToData(String^ filePath, Dictionary<String^, List<String^>^>^ wordMap)
{
    try
    {
        StreamReader^ file = gcnew StreamReader(filePath);
        String^ line;

        while ((line = file->ReadLine()) != nullptr)
        {
            array<String^>^ words = line->Split('\t'); // Разделение строки на слова
            for each (String ^ word in words)
            {
                
                if (word != "")
                {
                    String^ firstLetter = word->Substring(0, 1)->ToLower(); // Получение первой буквы
                    // Если ключа нет в словаре, создаем новый массив
                    if (!wordMap->ContainsKey(firstLetter))
                    {
                        wordMap[firstLetter] = gcnew List<String^>();
                        usedWords[firstLetter] = gcnew List<String^>();
                    }

                    // Добавляем слово в массив по ключу
                    wordMap[firstLetter]->Add(word);
                    countElems++;
                }
            }
        }

        file->Close();
    }
    catch (Exception^ ex)
    {
        Console::WriteLine("Ошибка при чтении файла: " + ex->Message);
    }

    MessageBox::Show("Введите город первым!", "Начало игры!");
}


// функция, выводящая следующий город
System::Void Practise::Game::CompareWordsWithKey( String^ key, String^ key_1, String^ inputString, Dictionary<String^, List<String^>^>^ dict)
{
    // Проверяем, есть ли ключ в словаре
    if (!dict->ContainsKey(key))
    {
        Console::WriteLine("Ключ '{key}' отсутствует в словаре.");
        MessageBox::Show("С такой буквы никакое слово не начинается!", "Не жульничать!");
        return;
    }
    // список городов на данную букву
    List<String^>^ cities = dict[key];

    // Рандомно находим неиспользованный город, кот неравен данному, и выводим его
    Int32 randNum = randGenerator(dict[key]->Count);
    String^ city = cities[randNum - 1];
    while (usedWords[key]->Contains(city)) {
        Int32 randNum = randGenerator(dict[key]->Count);
        String^ city = cities[randNum - 1];
    }
    // Выводим город
    labelPrint(city);
    // Добавляем город в использованные
    usedWords[key]->Add(city);
    last_city = city;
    countElems--;
    if (update_handler()) {
        MessageBox::Show("Вы выиграли!", "Victory", MessageBoxButtons::OK, MessageBoxIcon::Information);
        restarting();
    }

}

System::Void Practise::Game::labelPrint(String^ city)
{
    outputCity->Visible = true;
    outputCity->Text = "Мой город: " + city +"\n А какой твой?";
}

System::Void Practise::Game::answer_Click(System::Object^ sender, System::EventArgs^ e)
 {
    String^ user_city = userInput->Text;

    String^ key = findLastLetter(user_city);
    String^ key1 = findFirstLetter(user_city);
    //проверяем, есть ли вообще такой город
    unknownCity = true;
    for each (String ^ city in wordMap[key1]) {
        if (String::Equals(user_city, city, StringComparison::OrdinalIgnoreCase)) {
            unknownCity = false;
            break;
        }
    }
    // если нету, то сообщаем об этом 
    if (unknownCity)
    {
        MessageBox::Show("Я не знаю такого города, назови другой!");
        return;
    }

    // проверяем первую букву города
    if (last_city != "") {
        String^ last_city_last_letter = findLastLetter(last_city);

        if (last_city_last_letter != key1)
        {
            MessageBox::Show("Первая буква не совпадает с последней!", "Error");
            return;
        }
    }

    // проверяем, был ли город использован
    if (usedWords[key1]->Contains(user_city))
    {
        MessageBox::Show("Такой город уже был");
        return;
    }

    // добавляем город в использованные
    usedWords[key1]->Add(user_city);
    countElems--;
    

    
    if (!String::IsNullOrWhiteSpace(user_city) && !digitsCheck(user_city)) {
        if (save_convertToInt64(key)) { MessageBox::Show("В слове есть цифра!", "Не жульничать!"); return; }
        // функция для сравнения слов
        CompareWordsWithKey(key, key1, user_city, wordMap);
    }
    
}

bool Practise::Game::save_convertToInt64(String^ str)
{
    Int64 num;
    try
    {
        num = System::Convert::ToInt64(str);
    }
    catch (System::FormatException^)
    {
        return false;
    }
    return true;
}

// находим последнюю букву
String^ Practise::Game::findLastLetter(String^ user_city)
{
    Int32 num = 1;
    String^ last_letter = user_city->Substring(user_city->Length - 1);
    while (!wordMap->ContainsKey(last_letter)) {
        last_letter = user_city->Substring(user_city->Length - num, 1);
        num++;
    }

    return last_letter;
}

// находим первую букву
String^ Practise::Game::findFirstLetter(String^ user_city)
{
    return user_city->Substring(0, 1)->ToLower();
}

// функция для проверки наличия в слове цифр
bool Practise::Game::digitsCheck(String^ string)
{
    bool hasDigits = false;
    bool hasPunctuation = false;
    bool hasSpaces = false;

    for (int i = 0; i < string->Length; i++)
    {
        wchar_t c = string[i];
        if (Char::IsDigit(c))
        {
            hasDigits = true;
        }
        else if (Char::IsPunctuation(c))
        {
            hasPunctuation = true;
        }
        else if (Char::IsWhiteSpace(c))
        {
            hasSpaces = true;
        }
    
    }


    return hasDigits && hasPunctuation && hasSpaces;
}

bool Practise::Game::update_handler()
{
    return countElems == 0;
}

System::Void Practise::Game::restarting()
{
    wordMap->Clear();
    usedWords->Clear();
    outputCity->Visible = false;
    countElems = 0;
    fromFileToData(filePath, wordMap);

}


Int32 Practise::Game::randGenerator(Int32 array_length)
{
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist(1, array_length);
    Int32 randNumber = dist(rng);
    return randNumber;
}

bool Practise::Game::isUsed(String^ user_city, String^ key)
{
    for each (String ^ city in usedWords[key]) {
        if (String::Equals(user_city, city, StringComparison::OrdinalIgnoreCase)) {
            return true;

        }
    }
    return false;
}

