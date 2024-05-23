#include "Game.h"
#include <iostream>
#include <cwctype>


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
System::Void Practise::Game::CompareWordsWithKey( String^ key,  String^ inputString, Dictionary<String^, List<String^>^>^ dict)
{
    bool pass = false;
    // ���������, ���� �� ���� � �������
    if (!dict->ContainsKey(key))
    {
        Console::WriteLine("���� '{key}' ����������� � �������.");
        MessageBox::Show("� ����� ����� ������� ����� �� ����������!", "�� ����������!");
        return;
    }
    if (!usedWords->ContainsKey(key)) pass = true;
    // ������� ���������������� �����, ��� ������� �������, � ������� ���
    for each (String ^ city in dict[key])
    {   
        if (pass) {
            if (!String::Equals(inputString, city, StringComparison::OrdinalIgnoreCase)) {

                labelPrint(city);
                last_city = city;
                usedWords[key]->Add(city);
                countElems--;
                if (update_handler()) {
                    MessageBox::Show("�� ��������!", "Victory", MessageBoxButtons::OK, MessageBoxIcon::Information);
                    restarting();
                }
                break;
            }
        }
        else
        {
            if (!String::Equals(inputString, city, StringComparison::OrdinalIgnoreCase) && (!usedWords[key]->Contains(city))) {

                labelPrint(city);
                last_city = city;

                usedWords[key]->Add(city);
                countElems--;
                if (update_handler()) {
                    MessageBox::Show("�� ��������!", "Victory", MessageBoxButtons::OK, MessageBoxIcon::Information);

                    restarting();
                }
                break;
            }
        }
        
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
    String^ key = findLastLetter(user_city);
    if (last_city != "") {
        if (cityCheck(user_city, last_city) == false) 
        {
            MessageBox::Show("������ ����� �� ��������� � ���������!", "Error");
            return;
        }
    }
    if (!String::IsNullOrWhiteSpace(user_city) && digitsCheck(user_city)) {
        if (save_convertToInt64(key)) { MessageBox::Show("� ����� ���� �����!", "�� ����������!"); return; }
        CompareWordsWithKey(key, user_city, wordMap);
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

String^ Practise::Game::findLastLetter(String^ user_city)
{
    String^ last_letter = user_city->Substring(user_city->Length - 1); 

    return last_letter;
}

bool Practise::Game::digitsCheck(String^ string)
{
    String^ myString = "������ ������";

    bool hasDigits = false;
    bool hasPunctuation = false;
    bool hasSpaces = false;

    for each (char c in myString)
    {
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

bool Practise::Game::cityCheck(String^ city_user, String^ city_comp)
{
    if (outputCity->Visible) {
        std::setlocale(LC_ALL, "ru_RU.UTF-8");
        if (city_user->Length == 0 || city_comp->Length == 0) {
            return false;
        }

        wchar_t firstLetterUser = std::towlower(city_user[0]);
        wchar_t lastLetterComp = city_comp[city_comp->Length - 1];
        if (lastLetterComp == L'�' || lastLetterComp == L'�' || lastLetterComp == L'�') {
            lastLetterComp = city_comp[city_comp->Length - 2];
        }

        return (firstLetterUser == lastLetterComp);
    }
    return true;
}

