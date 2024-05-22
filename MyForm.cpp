#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;



[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Practise::MyForm form;
	Application::Run(% form);
}

// ��������� ������ �� ���������� �����
System::Void Practise::MyForm::add_button_Click(System::Object^ sender, System::EventArgs^ e)
{
    OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
    openFileDialog1->FileName = "example.txt";
    openFileDialog1->Filter = "Text files (*.txt)|*.txt|All files (*.*)|*.*"; // ��������� ������ ��� ��������� ������

    if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
    {
        try
        {
            StreamReader^ file = gcnew StreamReader(openFileDialog1->FileName);
            String^ line;

            line = file->ReadLine();
            if (line != nullptr)
            {
                array<String^>^ cells = line->Split(' '); // ���������� ������ �� ������

                dataGridView1->Rows->Add(cells); // ���������� ������ ������ � DataGridView

                // ������ ��������� �����
                while ((line = file->ReadLine()) != nullptr)
                {
                    cells = line->Split(' '); // ���������� ������ �� ������
                    dataGridView1->Rows->Add(cells); // ���������� ������ � DataGridView
                }
            }
            fileUploaded = true;
            MessageBox::Show("������ ���������", "�������");
            file->Close();
        }
        catch (Exception^ ex)
        {
            MessageBox::Show("������ ��� �������� �����: " + ex->Message, "������");
        }
    }
}

// ������� ��� �������� 
System::Void Practise::MyForm::del_button_Click(System::Object^ sender, System::EventArgs^ e)
{
    int i, j , flag = 1;
    for each (DataGridViewCell ^ cell in dataGridView1->SelectedCells)
    {
        int rowIndex = cell->RowIndex;
        int columnIndex = cell->ColumnIndex;
        dataGridView1->Rows[rowIndex]->Cells[columnIndex]->Value = nullptr;
        flag = 0;
    }
    if (dataGridView1->SelectedRows->Count > 0 || dataGridView1->SelectedColumns->Count > 0) {
        for each (DataGridViewColumn ^ column in dataGridView1->SelectedColumns)
        {
            dataGridView1->Columns->Remove(column);
        }
        for each (DataGridViewRow ^ row in dataGridView1->SelectedRows)
        {
            if (!row->IsNewRow)
            {
                dataGridView1->Rows->Remove(row);
            }
        }
    }
    MessageBox::Show("������� ������� �������", "����������");
}

// �����
System::Void Practise::MyForm::�����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

// �������� ���������
System::Void Practise::MyForm::����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("������ ����������� ������� ������������ ����� �������� ���� ������ ��� ������ ��\n��� ����� ��������", "��������");
}

// ��������� ������ � ���� ----------------
System::Void Practise::MyForm::saveData_Click(System::Object^ sender, System::EventArgs^ e)
{
	SaveFileDialog^ SaveFileDialog1 = gcnew SaveFileDialog;
	SaveFileDialog1->FileName = "example.txt";
    SaveFileDialog1->Filter = "Text files (*.txt)|*.txt|All files (*.*)|*.*";
	if (SaveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{

		StreamWriter^ file = gcnew StreamWriter(SaveFileDialog1->FileName);
		int � = dataGridView1->RowCount, r = dataGridView1->ColumnCount;

		int i, j;
		for (i = 0; i < �; i++) {

			for (j = 0; j < r; j++)
			{
				file->Write(dataGridView1->Rows[i]->Cells[j]->Value);
				file->Write(" ");
			};
			file->WriteLine("");
		}
		MessageBox::Show("������� ���������", "�������");
		file->Close();
	}
}

// ��������� ������ ----------
System::Void Practise::MyForm::resetData(String^ filename)
{
    if (fileUploaded)
    {
        if (filename != "")
        {
            try
            {
                StreamReader^ file = gcnew StreamReader(filename);
                String^ line;

                dataGridView1->Rows->Clear(); // ������� DataGridView ����� ��������� ����� ������

                // ������ ������ ������ ��� ����������� ���������� ��������
                line = file->ReadLine();
                if (line != nullptr)
                {
                    array<String^>^ cells = line->Split(' '); // ���������� ������ �� ������

                    dataGridView1->Rows->Add(cells); // ���������� ������ ������ � DataGridView

                    // ������ ��������� �����
                    while ((line = file->ReadLine()) != nullptr)
                    {
                        cells = line->Split(' '); // ���������� ������ �� ������
                        dataGridView1->Rows->Add(cells); // ���������� ������ � DataGridView
                    }
                }

                file->Close();
            }
            catch (Exception^ ex)
            {
                MessageBox::Show("������ ��� �������� �����: " + ex->Message, "������");
                fileUploaded = false;
            }
        }
    }
    
    else {
        MessageBox::Show("������� ����� ��������� ����", "������");
    }
}


// ������ ������� ������������ ��������� � �����������
System::Void Practise::MyForm::TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (fileUploaded)
    {
        resetData("example.txt");
        UpdateMatchingRows();
    }
    else {
        MessageBox::Show("������� ����� ��������� ����", "������");
    }
}


bool Practise::MyForm::NumbersAction(String^ sign, Int64 number, Int64 current_num)
{
    if (sign == ">") {
        return current_num > number;
    }
    else if (sign == ">=") return current_num >= number;
    else if (sign == "<=") return current_num <= number;
    else if (sign == "<") return current_num < number;
    else
    {
        return current_num == number;
    }
    return false;
}


System::Void Practise::MyForm::button_sign_changevalue(System::Object^ sender)
{
    array<String^>^ texts = gcnew array<String^> { ">", "<", "<=", ">=", "=", ">"};

    // ���������� sender � Button, ����� �������� ������� ������
    Button^ button = dynamic_cast<Button^>(sender);
    if (button == nullptr)
        return;

    int clickCount = buttonClickCounts[button];
    // �������� button text
    button->Text = texts[clickCount + 1];
    if (clickCount < 4) clickCount++;
    else clickCount = 0;

    buttonClickCounts[button] = clickCount;
}


// ����� ������� ��� ��������
System::Void Practise::MyForm::UpdateMatchingRows()
{
    int matched = 0;
    int conditions = 0;
    List<DataGridViewRow^>^ matchingRows = gcnew List<DataGridViewRow^>();
    Boolean conditionArray[7]{};
    // �������� ��� �����
    String^ sign1 = button_sign->Text;
    String^ sign2 = button_sign_1->Text;
    String^ sign3 = button_sign_2->Text;
    String^ sign4 = button_sign_3->Text;
    String^ sign5 = button_sign_4->Text;
    String^ sign6 = button_sign_5->Text;
    
    // �������� ��� ������ �� �����������
    String^ tb_street = "";
    if (street->Text != ""){
        tb_street = street->Text;
        conditionArray[0] = 1;
        conditions++;
    }

    Int64 tb_home_num = 0;
    if (homeNum->Text != "")
    {
        tb_home_num = save_convertToInt64(homeNum->Text, "��������� ����� ���� �����������");
        conditionArray[1] = 1;
        conditions++;
        // ���� �������������������, ��� ������ ����������
        if (convertion_error_flag) return;

    }
    Int64 tb_year = 0;
    if (yearOfOpenning->Text != "")
    {
        tb_year = save_convertToInt64(yearOfOpenning->Text, "��������� ��� �����������");
        conditionArray[2] = 1;
        conditions++;

        if (convertion_error_flag) return;

    }
    Int64 tb_square = 0;
    if (Square->Text != "")
    {
        tb_square = save_convertToInt64(Square->Text, "��������� ������� ������� �����������");
        conditionArray[3] = 1;
        conditions++;
        if (convertion_error_flag) return;
    }
    Int64 tb_humans = 0;
    if (humansCount->Text != "")
    {
        tb_humans = save_convertToInt64(humansCount->Text, "��������� ���������� ������� �����������");
        conditionArray[4] = 1;
        conditions++;
        if (convertion_error_flag) return;
    }
    Int64 tb_floors = 0;
    if (floorsCount->Text != "")
    {
        tb_floors = save_convertToInt64(floorsCount->Text, "��������� ���������� ������ �����������");
        conditionArray[5] = 1;
        conditions++;
        if (convertion_error_flag) return;
    }
    Int64 tb_flats = 0;
    if (flatsCount->Text != "")
    {
        tb_flats = save_convertToInt64(flatsCount->Text, "����������������� ������ �����������");
        conditionArray[6] = 1;
        conditions++;
        if (convertion_error_flag) return;
    }
    // ���� ���� �������
    if (conditions)
    {
        // ���������� ������, ������� ���, ������� �������� ��� �������
        for each (DataGridViewRow ^ row in dataGridView1->Rows)
        {
            if (row->IsNewRow)
            {
                continue;
            }

            if (conditionArray[0]) {
                String^ row_street = safe_cast<String^>(row->Cells[0]->Value);
                if (String::Equals(row_street, tb_street)) {
                    matched++;
                }
            }
            if (conditionArray[1]) {
                String^ cellValue = row->Cells[1]->Value->ToString();
                if (cellValue != "") {
                    Int64 row_home_number = System::Convert::ToInt64(cellValue);
                    if (signCondition(tb_home_num, row_home_number, sign1)) matched++;
                }
                
            }
            if (conditionArray[2]) {
                String^ cellValue = row->Cells[2]->Value->ToString();
                if (cellValue != "") 
                {
                    Int64 row_year = System::Convert::ToInt64(cellValue);
                    if (signCondition(tb_year, row_year, sign2)) matched++;
                }
                
            }
            if (conditionArray[3]) {
                String^ cellValue = row->Cells[3]->Value->ToString();
                if (cellValue != "") 
                {
                    Int64 row_square = System::Convert::ToInt64(cellValue);
                    if (signCondition(tb_square, row_square, sign3)) matched++;
                }
                
            }
            if (conditionArray[4]) {
                String^ cellValue = row->Cells[6]->Value->ToString();
                if (cellValue != "") 
                {
                    Int64 row_humans = System::Convert::ToInt64(cellValue);
                    if (signCondition(tb_humans, row_humans, sign4)) matched++;
                }
                
            }
            
            if (conditionArray[5]) {
                String^ cellValue = row->Cells[4]->Value->ToString();
                if (cellValue != "") 
                {
                    Int64 row_floors = System::Convert::ToInt64(cellValue);
                    if (signCondition(tb_floors, row_floors, sign5)) matched++;
                }
                
            }
            if (conditionArray[6]) {
                String^ cellValue = row->Cells[5]->Value->ToString();
                if (cellValue != "") 
                {
                    Int64 row_flats = System::Convert::ToInt64(cellValue);
                    if (signCondition(tb_flats, row_flats, sign6)) matched++;
                }
                
            }

            // ���� ���� ������ ������������� ���� ��������, �� ��������� �� � ������
            if (conditions == matched) {
                matchingRows->Add(row);
                
            }
            matched = 0;
        }

        // ��������� ����������� ������
        dataGridView1->Rows->Clear();
        if (matchingRows->Count > 0)
        {
            // ������� ��������� ������
            for each (DataGridViewRow ^ row in matchingRows)
            {
                dataGridView1->Rows->Add(row);
            }
        }
        else
        {
            MessageBox::Show("��� ����� � ��������� ��������� �����", "����������");
        }

    }
    

}

Int64 Practise::MyForm::save_convertToInt64(String^ str, String^ error_message)
{
    Int64 num;
    try
    {
        num = System::Convert::ToInt64(str);
    }
    catch(System::FormatException^)
    {
        MessageBox::Show(error_message, "������");
        convertion_error_flag = true;
        return -1;
    }
    return num;
}

Boolean Practise::MyForm::signCondition(Int64 num1, Int64 num2, String^ sign)
{
    if (sign == ">") return num2 > num1;
    if (sign == ">=") return num2 >= num1;
    if (sign == "<") return num2 < num1;
    if (sign == "<=") return num2 <= num1;
    if (sign == "=") return num2 == num1;
    return false;
}

System::Void Practise::MyForm::dataGridView1_CellValidating(System::Object^ sender, System::Windows::Forms::DataGridViewCellValidatingEventArgs^ e)
{
    if (!isCellValueChanged) {
        return; // �������� ����������� ������ ���� �������� ������ ��������
    }
    
    String^ cellValue = e->FormattedValue != nullptr ? e->FormattedValue->ToString() : "";


    if (e->ColumnIndex == 0)
    {
        // �������� ��� ���������� ��������
        if (String::IsNullOrEmpty(cellValue))
        {
            e->Cancel = true;
            dataGridView1->Rows[e->RowIndex]->ErrorText = "���� �� ������ ���� ������";
        }
        else
        {
            dataGridView1->Rows[e->RowIndex]->ErrorText = "";
        }
    }
    else if (e->ColumnIndex > 0 && e->ColumnIndex < 7)
    {
        // �������� ��� ��������� ��������
        Int64 result;
        if (!Int64::TryParse(cellValue, result))
        {
            e->Cancel = true;
            dataGridView1->Rows[e->RowIndex]->ErrorText = "������� ���������� �����";
        }
        else
        {
            dataGridView1->Rows[e->RowIndex]->ErrorText = "";
        }
        
    }
  
}

System::Void Practise::MyForm::dataGridView1_CellEndEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
    isCellValueChanged = false;
}

System::Void Practise::MyForm::dataGridView1_CellBeginEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellCancelEventArgs^ e)
{
    isCellValueChanged = true;
}

// �������� ������
System::Void Practise::MyForm::upload_button_Click(System::Object^ sender, System::EventArgs^ )
{   
    OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
    openFileDialog1->Filter = "Text files (*.txt)|*.txt|All files (*.*)|*.*"; // ��������� ������ ��� ��������� ������
    openFileDialog1->FileName = "example.txt";
    fileUploaded = true;
    resetData("example.txt");
    MessageBox::Show("������ ������� ���������", "�������");
}