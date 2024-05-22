#pragma once

namespace Practise {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			originalRows = gcnew BindingList<DataGridViewRow^>();
			buttonClickCounts = gcnew System::Collections::Generic::Dictionary<Button^, int>();
			this->buttonClickCounts->Add(button_sign, 0);
			this->buttonClickCounts->Add(button_sign_1, 0);
			this->buttonClickCounts->Add(button_sign_2, 0);
			this->buttonClickCounts->Add(button_sign_3, 0);
			this->buttonClickCounts->Add(button_sign_4, 0);
			this->buttonClickCounts->Add(button_sign_5, 0);
			
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ‰ÂÈÒÚ‚ËˇToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ Á‡„ÛÁËÚ¸ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ‰Ó·‡‚ËÚ¸ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ Ó·ÌÓ‚ËÚ¸ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ Û‰‡ÎËÚ¸ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÓœÓ„‡ÏÏÂToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ‚˚ıÓ‰ToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ upload_button;

	private: System::Windows::Forms::Button^ del_button;

	private: System::Windows::Forms::Button^ add_button;
	private:
		BindingList<DataGridViewRow^>^ originalRows;



	private:
		bool isCellValueChanged = false;
	private: bool fileUploaded = false;


	private: System::Windows::Forms::Button^ saveData;
	private: System::Windows::Forms::ToolStripMenuItem^ ÓÚ‰ÓıÌÛÚ¸ŒÚ–‡·ÓÚ˚ToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ street;
	private: System::Windows::Forms::TextBox^ homeNum;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ yearOfOpenning;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ Square;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ floorsCount;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ flatsCount;

	private: System::Windows::Forms::Label^ label6;

	private: int number;
	
	private: System::Windows::Forms::Label^ label7;
	

	private: System::Collections::Generic::Dictionary<Button^, int>^ buttonClickCounts;




	private: System::Windows::Forms::TextBox^ humansCount;




	private: System::Windows::Forms::Button^ button_sign;
private: System::Windows::Forms::Button^ button_sign_4;

private: System::Windows::Forms::Button^ button_sign_3;

private: System::Windows::Forms::Button^ button_sign_2;

private: System::Windows::Forms::Button^ button_sign_1;
private: System::Windows::Forms::Button^ button_sign_5;
	private: System::Windows::Forms::Button^ button_udate_1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ street_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ home_number;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ year;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ s;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ floors;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ flats;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ humanz;























	protected:









	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->street_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->home_number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->year = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->s = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->floors = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->flats = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->humanz = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->‰ÂÈÒÚ‚ËˇToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Á‡„ÛÁËÚ¸ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->‰Ó·‡‚ËÚ¸ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Ó·ÌÓ‚ËÚ¸ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Û‰‡ÎËÚ¸ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÓÚ‰ÓıÌÛÚ¸ŒÚ–‡·ÓÚ˚ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÓœÓ„‡ÏÏÂToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->‚˚ıÓ‰ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button_udate_1 = (gcnew System::Windows::Forms::Button());
			this->saveData = (gcnew System::Windows::Forms::Button());
			this->upload_button = (gcnew System::Windows::Forms::Button());
			this->del_button = (gcnew System::Windows::Forms::Button());
			this->add_button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->street = (gcnew System::Windows::Forms::TextBox());
			this->homeNum = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->yearOfOpenning = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Square = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->floorsCount = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->flatsCount = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->humansCount = (gcnew System::Windows::Forms::TextBox());
			this->button_sign = (gcnew System::Windows::Forms::Button());
			this->button_sign_4 = (gcnew System::Windows::Forms::Button());
			this->button_sign_3 = (gcnew System::Windows::Forms::Button());
			this->button_sign_2 = (gcnew System::Windows::Forms::Button());
			this->button_sign_1 = (gcnew System::Windows::Forms::Button());
			this->button_sign_5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->street_name,
					this->home_number, this->year, this->s, this->floors, this->flats, this->humanz
			});
			this->dataGridView1->Location = System::Drawing::Point(262, 38);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(732, 372);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellBeginEdit += gcnew System::Windows::Forms::DataGridViewCellCancelEventHandler(this, &MyForm::dataGridView1_CellBeginEdit);
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			this->dataGridView1->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellEndEdit);
			this->dataGridView1->CellValidating += gcnew System::Windows::Forms::DataGridViewCellValidatingEventHandler(this, &MyForm::dataGridView1_CellValidating);
			// 
			// street_name
			// 
			this->street_name->HeaderText = L"Õ‡Á‚‡ÌËÂ ÛÎËˆ˚";
			this->street_name->Name = L"street_name";
			// 
			// home_number
			// 
			this->home_number->HeaderText = L"ÕÓÏÂ ‰ÓÏ‡";
			this->home_number->Name = L"home_number";
			// 
			// year
			// 
			this->year->HeaderText = L"√Ó‰ Ò‰‡˜Ë";
			this->year->Name = L"year";
			// 
			// s
			// 
			this->s->HeaderText = L"œÎÓ˘‡‰¸ Û˜‡ÒÚÍ‡";
			this->s->Name = L"s";
			// 
			// floors
			// 
			this->floors->HeaderText = L" ÓÎ-‚Ó ˝Ú‡ÊÂÈ";
			this->floors->Name = L"floors";
			// 
			// flats
			// 
			this->flats->HeaderText = L" ÓÎ-‚Ó Í‚‡ÚË";
			this->flats->Name = L"flats";
			// 
			// humanz
			// 
			this->humanz->HeaderText = L" ÓÎ-‚Ó ÊËÎ¸ˆÓ‚";
			this->humanz->Name = L"humanz";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->‰ÂÈÒÚ‚ËˇToolStripMenuItem,
					this->ÓœÓ„‡ÏÏÂToolStripMenuItem, this->‚˚ıÓ‰ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1006, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ‰ÂÈÒÚ‚ËˇToolStripMenuItem
			// 
			this->‰ÂÈÒÚ‚ËˇToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->Á‡„ÛÁËÚ¸ToolStripMenuItem,
					this->‰Ó·‡‚ËÚ¸ToolStripMenuItem, this->Ó·ÌÓ‚ËÚ¸ToolStripMenuItem, this->Û‰‡ÎËÚ¸ToolStripMenuItem, this->ÓÚ‰ÓıÌÛÚ¸ŒÚ–‡·ÓÚ˚ToolStripMenuItem
			});
			this->‰ÂÈÒÚ‚ËˇToolStripMenuItem->Name = L"‰ÂÈÒÚ‚ËˇToolStripMenuItem";
			this->‰ÂÈÒÚ‚ËˇToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			this->‰ÂÈÒÚ‚ËˇToolStripMenuItem->Text = L"ƒÂÈÒÚ‚Ëˇ";
			// 
			// Á‡„ÛÁËÚ¸ToolStripMenuItem
			// 
			this->Á‡„ÛÁËÚ¸ToolStripMenuItem->Name = L"Á‡„ÛÁËÚ¸ToolStripMenuItem";
			this->Á‡„ÛÁËÚ¸ToolStripMenuItem->Size = System::Drawing::Size(216, 22);
			this->Á‡„ÛÁËÚ¸ToolStripMenuItem->Text = L"«‡„ÛÁËÚ¸";
			this->Á‡„ÛÁËÚ¸ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::upload_button_Click);
			// 
			// ‰Ó·‡‚ËÚ¸ToolStripMenuItem
			// 
			this->‰Ó·‡‚ËÚ¸ToolStripMenuItem->Name = L"‰Ó·‡‚ËÚ¸ToolStripMenuItem";
			this->‰Ó·‡‚ËÚ¸ToolStripMenuItem->Size = System::Drawing::Size(216, 22);
			this->‰Ó·‡‚ËÚ¸ToolStripMenuItem->Text = L"ƒÓ·‡‚ËÚ¸";
			this->‰Ó·‡‚ËÚ¸ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::add_button_Click);
			// 
			// Ó·ÌÓ‚ËÚ¸ToolStripMenuItem
			// 
			this->Ó·ÌÓ‚ËÚ¸ToolStripMenuItem->Name = L"Ó·ÌÓ‚ËÚ¸ToolStripMenuItem";
			this->Ó·ÌÓ‚ËÚ¸ToolStripMenuItem->Size = System::Drawing::Size(216, 22);
			this->Ó·ÌÓ‚ËÚ¸ToolStripMenuItem->Text = L"—·ÓÒËÚ¸";
			this->Ó·ÌÓ‚ËÚ¸ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::button_udate_1_Click);
			// 
			// Û‰‡ÎËÚ¸ToolStripMenuItem
			// 
			this->Û‰‡ÎËÚ¸ToolStripMenuItem->Name = L"Û‰‡ÎËÚ¸ToolStripMenuItem";
			this->Û‰‡ÎËÚ¸ToolStripMenuItem->Size = System::Drawing::Size(216, 22);
			this->Û‰‡ÎËÚ¸ToolStripMenuItem->Text = L"”‰‡ÎËÚ¸";
			this->Û‰‡ÎËÚ¸ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::del_button_Click);
			// 
			// ÓÚ‰ÓıÌÛÚ¸ŒÚ–‡·ÓÚ˚ToolStripMenuItem
			// 
			this->ÓÚ‰ÓıÌÛÚ¸ŒÚ–‡·ÓÚ˚ToolStripMenuItem->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ÓÚ‰ÓıÌÛÚ¸ŒÚ–‡·ÓÚ˚ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->ÓÚ‰ÓıÌÛÚ¸ŒÚ–‡·ÓÚ˚ToolStripMenuItem->Name = L"ÓÚ‰ÓıÌÛÚ¸ŒÚ–‡·ÓÚ˚ToolStripMenuItem";
			this->ÓÚ‰ÓıÌÛÚ¸ŒÚ–‡·ÓÚ˚ToolStripMenuItem->Size = System::Drawing::Size(216, 22);
			this->ÓÚ‰ÓıÌÛÚ¸ŒÚ–‡·ÓÚ˚ToolStripMenuItem->Text = L"ŒÚ‰ÓıÌÛÚ¸ ÓÚ ‡·ÓÚ˚";
			// 
			// ÓœÓ„‡ÏÏÂToolStripMenuItem
			// 
			this->ÓœÓ„‡ÏÏÂToolStripMenuItem->Name = L"ÓœÓ„‡ÏÏÂToolStripMenuItem";
			this->ÓœÓ„‡ÏÏÂToolStripMenuItem->Size = System::Drawing::Size(94, 20);
			this->ÓœÓ„‡ÏÏÂToolStripMenuItem->Text = L"Œ ÔÓ„‡ÏÏÂ";
			this->ÓœÓ„‡ÏÏÂToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ÓœÓ„‡ÏÏÂToolStripMenuItem_Click);
			// 
			// ‚˚ıÓ‰ToolStripMenuItem
			// 
			this->‚˚ıÓ‰ToolStripMenuItem->Name = L"‚˚ıÓ‰ToolStripMenuItem";
			this->‚˚ıÓ‰ToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->‚˚ıÓ‰ToolStripMenuItem->Text = L"¬˚ıÓ‰";
			this->‚˚ıÓ‰ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::‚˚ıÓ‰ToolStripMenuItem_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button_udate_1);
			this->groupBox1->Controls->Add(this->saveData);
			this->groupBox1->Controls->Add(this->upload_button);
			this->groupBox1->Controls->Add(this->del_button);
			this->groupBox1->Controls->Add(this->add_button);
			this->groupBox1->Location = System::Drawing::Point(12, 38);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(244, 372);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"ƒÂÈÒÚ‚Ëˇ";
			// 
			// button_udate_1
			// 
			this->button_udate_1->Location = System::Drawing::Point(24, 306);
			this->button_udate_1->Name = L"button_udate_1";
			this->button_udate_1->Size = System::Drawing::Size(204, 51);
			this->button_udate_1->TabIndex = 4;
			this->button_udate_1->Text = L"Ò·ÓÒËÚ¸";
			this->button_udate_1->UseVisualStyleBackColor = true;
			this->button_udate_1->Click += gcnew System::EventHandler(this, &MyForm::button_udate_1_Click);
			// 
			// saveData
			// 
			this->saveData->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->saveData->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->saveData->Location = System::Drawing::Point(24, 236);
			this->saveData->Name = L"saveData";
			this->saveData->Size = System::Drawing::Size(204, 51);
			this->saveData->TabIndex = 3;
			this->saveData->Text = L"ÒÓı‡ÌËÚ¸";
			this->saveData->UseVisualStyleBackColor = false;
			this->saveData->Click += gcnew System::EventHandler(this, &MyForm::saveData_Click);
			// 
			// upload_button
			// 
			this->upload_button->Location = System::Drawing::Point(24, 170);
			this->upload_button->Name = L"upload_button";
			this->upload_button->Size = System::Drawing::Size(204, 51);
			this->upload_button->TabIndex = 2;
			this->upload_button->Text = L"Á‡„ÛÁËÚ¸";
			this->upload_button->UseVisualStyleBackColor = true;
			this->upload_button->Click += gcnew System::EventHandler(this, &MyForm::upload_button_Click);
			// 
			// del_button
			// 
			this->del_button->Location = System::Drawing::Point(24, 95);
			this->del_button->Name = L"del_button";
			this->del_button->Size = System::Drawing::Size(204, 51);
			this->del_button->TabIndex = 1;
			this->del_button->Text = L"Û‰‡ÎËÚ¸";
			this->del_button->UseVisualStyleBackColor = true;
			this->del_button->Click += gcnew System::EventHandler(this, &MyForm::del_button_Click);
			// 
			// add_button
			// 
			this->add_button->Location = System::Drawing::Point(24, 19);
			this->add_button->Name = L"add_button";
			this->add_button->Size = System::Drawing::Size(204, 51);
			this->add_button->TabIndex = 0;
			this->add_button->Text = L"‰Ó·‡‚ËÚ¸";
			this->add_button->UseVisualStyleBackColor = true;
			this->add_button->Click += gcnew System::EventHandler(this, &MyForm::add_button_Click);
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(33, 435);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(118, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Õ‡Á‚‡ÌËÂ ÛÎËˆ˚";
			// 
			// street
			// 
			this->street->Location = System::Drawing::Point(157, 432);
			this->street->Name = L"street";
			this->street->Size = System::Drawing::Size(289, 20);
			this->street->TabIndex = 4;
			this->street->TextChanged += gcnew System::EventHandler(this, &MyForm::TextChanged);
			// 
			// homeNum
			// 
			this->homeNum->Location = System::Drawing::Point(157, 467);
			this->homeNum->Name = L"homeNum";
			this->homeNum->Size = System::Drawing::Size(131, 20);
			this->homeNum->TabIndex = 6;
			this->homeNum->TextChanged += gcnew System::EventHandler(this, &MyForm::TextChanged);
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(33, 471);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"ÕÓÏÂ ‰ÓÏ‡";
			// 
			// yearOfOpenning
			// 
			this->yearOfOpenning->Location = System::Drawing::Point(157, 503);
			this->yearOfOpenning->Name = L"yearOfOpenning";
			this->yearOfOpenning->Size = System::Drawing::Size(131, 20);
			this->yearOfOpenning->TabIndex = 8;
			this->yearOfOpenning->TextChanged += gcnew System::EventHandler(this, &MyForm::TextChanged);
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(33, 507);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(118, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"√Ó‰ Ò‰‡˜Ë";
			// 
			// Square
			// 
			this->Square->Location = System::Drawing::Point(157, 537);
			this->Square->Name = L"Square";
			this->Square->Size = System::Drawing::Size(131, 20);
			this->Square->TabIndex = 10;
			this->Square->TextChanged += gcnew System::EventHandler(this, &MyForm::TextChanged);
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(33, 540);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(118, 22);
			this->label4->TabIndex = 9;
			this->label4->Text = L"œÎÓ˘‡‰¸";
			// 
			// floorsCount
			// 
			this->floorsCount->Location = System::Drawing::Point(588, 464);
			this->floorsCount->Name = L"floorsCount";
			this->floorsCount->Size = System::Drawing::Size(131, 20);
			this->floorsCount->TabIndex = 12;
			this->floorsCount->TextChanged += gcnew System::EventHandler(this, &MyForm::TextChanged);
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(464, 470);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(118, 20);
			this->label5->TabIndex = 11;
			this->label5->Text = L" ÓÎ-‚Ó ˝Ú‡ÊÂÈ";
			// 
			// flatsCount
			// 
			this->flatsCount->Location = System::Drawing::Point(588, 502);
			this->flatsCount->Name = L"flatsCount";
			this->flatsCount->Size = System::Drawing::Size(131, 20);
			this->flatsCount->TabIndex = 14;
			this->flatsCount->TextChanged += gcnew System::EventHandler(this, &MyForm::TextChanged);
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(464, 506);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(118, 20);
			this->label6->TabIndex = 13;
			this->label6->Text = L" ÓÎ-‚Ó Í‚‡ÚË";
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(464, 438);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(118, 20);
			this->label7->TabIndex = 15;
			this->label7->Text = L" ÓÎ-‚Ó ÊËÎ¸ˆÓ‚";
			// 
			// humansCount
			// 
			this->humansCount->Location = System::Drawing::Point(588, 432);
			this->humansCount->Name = L"humansCount";
			this->humansCount->Size = System::Drawing::Size(131, 20);
			this->humansCount->TabIndex = 16;
			this->humansCount->TextChanged += gcnew System::EventHandler(this, &MyForm::TextChanged);
			// 
			// button_sign
			// 
			this->button_sign->Location = System::Drawing::Point(307, 467);
			this->button_sign->Name = L"button_sign";
			this->button_sign->Size = System::Drawing::Size(75, 23);
			this->button_sign->TabIndex = 42;
			this->button_sign->Text = L">";
			this->button_sign->UseVisualStyleBackColor = true;
			this->button_sign->Click += gcnew System::EventHandler(this, &MyForm::button_sign_Click);
			// 
			// button_sign_4
			// 
			this->button_sign_4->Location = System::Drawing::Point(748, 461);
			this->button_sign_4->Name = L"button_sign_4";
			this->button_sign_4->Size = System::Drawing::Size(75, 23);
			this->button_sign_4->TabIndex = 43;
			this->button_sign_4->Text = L">";
			this->button_sign_4->UseVisualStyleBackColor = true;
			this->button_sign_4->Click += gcnew System::EventHandler(this, &MyForm::button_sign_Click);
			// 
			// button_sign_3
			// 
			this->button_sign_3->Location = System::Drawing::Point(748, 433);
			this->button_sign_3->Name = L"button_sign_3";
			this->button_sign_3->Size = System::Drawing::Size(75, 23);
			this->button_sign_3->TabIndex = 44;
			this->button_sign_3->Text = L">";
			this->button_sign_3->UseVisualStyleBackColor = true;
			this->button_sign_3->Click += gcnew System::EventHandler(this, &MyForm::button_sign_Click);
			// 
			// button_sign_2
			// 
			this->button_sign_2->Location = System::Drawing::Point(307, 534);
			this->button_sign_2->Name = L"button_sign_2";
			this->button_sign_2->Size = System::Drawing::Size(75, 23);
			this->button_sign_2->TabIndex = 45;
			this->button_sign_2->Text = L">";
			this->button_sign_2->UseVisualStyleBackColor = true;
			this->button_sign_2->Click += gcnew System::EventHandler(this, &MyForm::button_sign_Click);
			// 
			// button_sign_1
			// 
			this->button_sign_1->Location = System::Drawing::Point(307, 496);
			this->button_sign_1->Name = L"button_sign_1";
			this->button_sign_1->Size = System::Drawing::Size(75, 23);
			this->button_sign_1->TabIndex = 46;
			this->button_sign_1->Text = L">";
			this->button_sign_1->UseVisualStyleBackColor = true;
			this->button_sign_1->Click += gcnew System::EventHandler(this, &MyForm::button_sign_Click);
			// 
			// button_sign_5
			// 
			this->button_sign_5->Location = System::Drawing::Point(748, 499);
			this->button_sign_5->Name = L"button_sign_5";
			this->button_sign_5->Size = System::Drawing::Size(75, 23);
			this->button_sign_5->TabIndex = 47;
			this->button_sign_5->Text = L">";
			this->button_sign_5->UseVisualStyleBackColor = true;
			this->button_sign_5->Click += gcnew System::EventHandler(this, &MyForm::button_sign_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1006, 609);
			this->Controls->Add(this->button_sign_5);
			this->Controls->Add(this->button_sign_1);
			this->Controls->Add(this->button_sign_2);
			this->Controls->Add(this->button_sign_3);
			this->Controls->Add(this->button_sign_4);
			this->Controls->Add(this->button_sign);
			this->Controls->Add(this->humansCount);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->flatsCount);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->floorsCount);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Square);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->yearOfOpenning);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->homeNum);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->street);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	}
	private: System::Void add_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void del_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void upload_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ‚˚ıÓ‰ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ÓœÓ„‡ÏÏÂToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void saveData_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void resetData( String^ filename);
	private: System::Void TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: bool NumbersAction(String^ sign, Int64 number, Int64 current_num);
	
	private: System::Void button_sign_changevalue(System::Object^ sender);
	private: System::Void UpdateMatchingRows();


	private: System::Void button_sign_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (fileUploaded)
		{
			button_sign_changevalue(sender);
			resetData("example.txt");
			UpdateMatchingRows();
		}
		else {
			MessageBox::Show("—Ì‡˜‡Î‡ ÌÛÊÌÓ Á‡„ÛÁËÚ¸ Ù‡ÈÎ", "Œ¯Ë·Í‡");
		}
	}

	private: System::Void button_sign_1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		button_sign_changevalue(sender);
		resetData("example.txt");
		UpdateMatchingRows();
	}

	private: System::Void button_sign_2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		button_sign_changevalue(sender);
		
		resetData("example.txt");
		UpdateMatchingRows();
	}

	private: System::Void button_sign_3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		button_sign_changevalue(sender);
		resetData("example.txt");
		UpdateMatchingRows();
	}

	private: System::Void button_sign_4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		button_sign_changevalue(sender);
		resetData("example.txt");
		UpdateMatchingRows();
	}

	private: System::Void button_sign_5_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// ÏÂÌˇÂÏ ÁÌ‡Í
		button_sign_changevalue(sender);	
		resetData("example.txt");
		UpdateMatchingRows();
	}
	private: System::Void button_udate_1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Ò·‡Ò˚‚‡ÂÏ ÚÂÍÒÚ·ÓÍÒ˚
		street->Text = "";
		homeNum->Text = "";
		yearOfOpenning->Text = "";
		Square->Text = "";
		humansCount->Text = "";
		floorsCount->Text = "";
		flatsCount->Text = "";
		// Ò·‡Ò˚‚‡ÂÏ ÍÌÓÔÍË
		button_sign->Text = ">";
		button_sign_1->Text = ">";
		button_sign_2->Text = ">";
		button_sign_3->Text = ">";
		button_sign_4->Text = ">";
		button_sign_5->Text = ">";

		// ÔÂÂÁ‡„ÛÊ‡ÂÏ ‰‡ÌÌ˚Â ËÁ Ù‡ÈÎËÍ‡
		resetData("example.txt");
	}
	private: Int64 save_convertToInt64(String^ str);
	private: Boolean signCondition(Int64 num1, Int64 num2, String^ sign);


	private: System::Void dataGridView1_CellValidating(System::Object^ sender, System::Windows::Forms::DataGridViewCellValidatingEventArgs^ e);
	private: void MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView1->CellValidating += gcnew System::Windows::Forms::DataGridViewCellValidatingEventHandler(this, &MyForm::dataGridView1_CellValidating);
		this->dataGridView1->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellEndEdit);
	}
	private: System::Void dataGridView1_CellEndEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);


private: System::Void dataGridView1_CellBeginEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellCancelEventArgs^ e);
};
	

}
