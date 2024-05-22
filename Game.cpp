#include "Game.h"
#include <fstream>
#include <string>
#include <vector>
#include <stdexcept>
#include <ctime>
#include <cstdlib>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;
using namespace System::IO;


System::Void Practise::Game::начатьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	processRandomStringFromFile(filename);
    return System::Void();
}

void Practise::Game::processRandomStringFromFile(System::String^ filePath)
{
    try
    {
        // Открываем файл
        System::IO::StreamReader^ file = gcnew System::IO::StreamReader(filePath);

        // Читаем все строки в список
        System::Collections::Generic::List<System::String^>^ lines = gcnew System::Collections::Generic::List<System::String^>();
        while (!file->EndOfStream) {
            lines->Add(file->ReadLine());
        }
        file->Close();

        if (lines->Count == 0) {
            throw std::runtime_error("Файл пуст");
        }

        // Инициализируем генератор случайных чисел
        std::srand(static_cast<unsigned int>(std::time(nullptr)));

        // Выбираем случайную строку
        int randomIndex = std::rand() % lines->Count;
        System::String^ randomLine = lines[randomIndex];

        // Разделяем строку по пробелу
        array<System::String^>^ parts = randomLine->Split(' ');

        if (parts->Length < 2) {
            throw std::invalid_argument("Строка должна содержать хотя бы один пробел");
        }

        // Заменяем буквы в первой части на *
        System::String^ label1 = gcnew System::String('*', parts[0]->Length);
        System::String^ label2 = parts[1];

        // Выводим полученные строки на форму или делаем что-то другое с ними
        // Например:
        //label1_label->Text = label1;
       // label2_label->Text = label2;
    }
    catch (const std::exception& ex)
    {
        // В случае ошибки выводим сообщение об ошибке
        MessageBox::Show(gcnew System::String(ex.what()), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}

