#include "Game.h"
#include <iostream>
#include <cwctype>
#include <random>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;
using namespace System::IO;

// ������ ����
System::Void Practise::Game::fromFileToData(String^ filePath, Dictionary<String^, List<String^>^>^ wordMap)
{
    try
    {
        StreamReader^ file = gcnew StreamReader(filePath);
        String^ line;

        while ((line = file->ReadLine()) != nullptr)
        {
            array<String^>^ words = line->Split('\t'); // ���������� ������ �� �����
            for each (String ^ word in words)
            {
                
                if (word != "")
                {
                    String^ firstLetter = word->Substring(0, 1)->ToLower(); // ��������� ������ �����
                    // ���� ����� ��� � �������, ������� ����� ������
                    if (!wordMap->ContainsKey(firstLetter))
                    {
                        wordMap[firstLetter] = gcnew List<String^>();
                        usedWords[firstLetter] = gcnew List<String^>();
                    }

                    // ��������� ����� � ������ �� �����
                    wordMap[firstLetter]->Add(word);
                    countElems++;
                }
            }
        }

        file->Close();
    }
    catch (Exception^ ex)
    {
        Console::WriteLine("������ ��� ������ �����: " + ex->Message);
    }

    MessageBox::Show("������� ����� ������!", "������ ����!");
}


// �������, ��������� ��������� �����
System::Void Practise::Game::CompareWordsWithKey( String^ key, String^ key_1, String^ inputString, Dictionary<String^, List<String^>^>^ dict)
{
    // ���������, ���� �� ���� � �������
    if (!dict->ContainsKey(key))
    {
        Console::WriteLine("���� '{key}' ����������� � �������.");
        MessageBox::Show("� ����� ����� ������� ����� �� ����������!", "�� ����������!");
        return;
    }
    // ������ ������� �� ������ �����
    List<String^>^ cities = dict[key];

    // �������� ������� ���������������� �����, ��� ������� �������, � ������� ���
    Int32 randNum = randGenerator(dict[key]->Count);
    String^ city = cities[randNum - 1];
    while (usedWords[key]->Contains(city)) {
        Int32 randNum = randGenerator(dict[key]->Count);
        String^ city = cities[randNum - 1];
    }
    // ������� �����
    labelPrint(city);
    // ��������� ����� � ��������������
    usedWords[key]->Add(city);
    last_city = city;
    countElems--;
    if (update_handler()) {
        MessageBox::Show("�� ��������!", "Victory", MessageBoxButtons::OK, MessageBoxIcon::Information);
        restarting();
    }

}

System::Void Practise::Game::labelPrint(String^ city)
{
    outputCity->Visible = true;
    outputCity->Text = "��� �����: " + city +"\n � ����� ����?";
}

System::Void Practise::Game::answer_Click(System::Object^ sender, System::EventArgs^ e)
 {
    String^ user_city = userInput->Text;
    if (!String::IsNullOrWhiteSpace(user_city) && !digitsCheck(user_city)) {
    String^ key = findLastLetter(user_city);
    if (key == "") { 
        MessageBox::Show("� ������ ������ �� ����!", "Error");
        return;
    }
    String^ key1 = findFirstLetter(user_city);
    if (key1 == "") {
        MessageBox::Show("� ������ ������ �� ����!", "Error");
        return;
    }
    //���������, ���� �� ������ ����� �����
    unknownCity = true;
    for each (String ^ city in wordMap[key1]) {
        if (String::Equals(user_city, city, StringComparison::OrdinalIgnoreCase)) {
            unknownCity = false;
            break;
        }
    }
    // ���� ����, �� �������� �� ���� 
    if (unknownCity)
    {
        MessageBox::Show("� �� ���� ������ ������, ������ ������!");
        return;
    }

    // ��������� ������ ����� ������
    if (last_city != "") {
        String^ last_city_last_letter = findLastLetter(last_city);

        if (last_city_last_letter != key1)
        {
            MessageBox::Show("������ ����� �� ��������� � ���������!", "Error");
            return;
        }
    }

    // ���������, ��� �� ����� �����������
    if (usedWords[key1]->Contains(user_city))
    {
        MessageBox::Show("����� ����� ��� ���");
        return;
    }

    // ��������� ����� � ��������������
    usedWords[key1]->Add(user_city);
    countElems--;
    

    
    
        // ������� ��� ��������� ����
        CompareWordsWithKey(key, key1, user_city, wordMap);
    }
    else {
        MessageBox::Show("����������� ������ �����!", "Error");
    }
}

// ������� ��������� �����
String^ Practise::Game::findLastLetter(String^ user_city)
{
    Int32 num = 1;
    String^ last_letter = user_city->Substring(user_city->Length - 1);
 
    while (!wordMap->ContainsKey(last_letter)) {
        if (num > user_city->Length) {
            return "";
        }
        last_letter = user_city->Substring(user_city->Length - num, 1);
        num++;
    }

    return last_letter;
}

// ������� ������ �����
String^ Practise::Game::findFirstLetter(String^ user_city)
{
    String^ firstletter = user_city->Substring(0, 1)->ToLower();
    if (!wordMap->ContainsKey(firstletter)) return "";
    return user_city->Substring(0, 1)->ToLower();
}

// ������� ��� �������� ������� � ����� ����
bool Practise::Game::digitsCheck(String^ string)
{
    bool hasDigits = false;
    bool hasPunctuation = false;

    for (int i = 0; i < string->Length; i++)
    {
        wchar_t c = string[i];
        if (Char::IsDigit(c))
        {
            hasDigits = true;
            break;
        }
    
    }


    return hasDigits;
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

