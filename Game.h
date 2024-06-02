#pragma once

namespace Practise {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	/// <summary>
	/// Summary for Game
	/// </summary>
	public ref class Game : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		Game(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

		}
		Game(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
			
			//
			//TODO: Add the constructor code here
			//

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïğàâèëàÈãğûToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäÈçÁäToolStripMenuItem;

	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip2;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip3;
	private: System::Windows::Forms::ToolStripMenuItem^ weewToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ wewToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ weeToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip4;
	private: System::Windows::Forms::ToolStripMenuItem^ eweToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ïğàâèëàÈãğûToolStripMenuItem1;

	private:Dictionary<String^, List<String^>^>^ wordMap = gcnew Dictionary<String^, List<String^>^>();
	private: String^ filePath = "cities.txt";


	private: System::Windows::Forms::Label^ secret_word;

	private: bool firsttime = true;
	private: System::ComponentModel::IContainer^ components;

	// äîáàâëåííûå ìíîş ïåğåìåííûå
	private: String^ filename = "prog.txt";
	private: System::Windows::Forms::TextBox^ userInput;
	private: System::Windows::Forms::Label^ outputCity;
	private: System::Windows::Forms::Button^ answer;


	private: Dictionary<String^, List<String^>^>^ usedWords = gcnew Dictionary<String^, List<String^>^>();
	private: System::Windows::Forms::Button^ restart;
	private: int countElems = 0;
	private: String^ last_city = "";
	private: bool unknownCity;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Game::typeid));
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğàâèëàÈãğûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäÈçÁäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->contextMenuStrip3 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->weewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->weeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip4 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->eweToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->âûõîäToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğàâèëàÈãğûToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->secret_word = (gcnew System::Windows::Forms::Label());
			this->userInput = (gcnew System::Windows::Forms::TextBox());
			this->outputCity = (gcnew System::Windows::Forms::Label());
			this->answer = (gcnew System::Windows::Forms::Button());
			this->restart = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1->SuspendLayout();
			this->contextMenuStrip3->SuspendLayout();
			this->contextMenuStrip4->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->âûõîäToolStripMenuItem,
					this->ïğàâèëàÈãğûToolStripMenuItem, this->âûõîäÈçÁäToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(156, 70);
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->âûõîäToolStripMenuItem->Text = L"Âûõîä èç èãğû";
			// 
			// ïğàâèëàÈãğûToolStripMenuItem
			// 
			this->ïğàâèëàÈãğûToolStripMenuItem->Name = L"ïğàâèëàÈãğûToolStripMenuItem";
			this->ïğàâèëàÈãğûToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->ïğàâèëàÈãğûToolStripMenuItem->Text = L"Ïğàâèëà èãğû";
			// 
			// âûõîäÈçÁäToolStripMenuItem
			// 
			this->âûõîäÈçÁäToolStripMenuItem->Name = L"âûõîäÈçÁäToolStripMenuItem";
			this->âûõîäÈçÁäToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->âûõîäÈçÁäToolStripMenuItem->Text = L"Âûõîä èç áä";
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(61, 4);
			// 
			// contextMenuStrip3
			// 
			this->contextMenuStrip3->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->weewToolStripMenuItem,
					this->wewToolStripMenuItem, this->weeToolStripMenuItem
			});
			this->contextMenuStrip3->Name = L"contextMenuStrip3";
			this->contextMenuStrip3->Size = System::Drawing::Size(105, 70);
			// 
			// weewToolStripMenuItem
			// 
			this->weewToolStripMenuItem->Name = L"weewToolStripMenuItem";
			this->weewToolStripMenuItem->Size = System::Drawing::Size(104, 22);
			this->weewToolStripMenuItem->Text = L"weew";
			// 
			// wewToolStripMenuItem
			// 
			this->wewToolStripMenuItem->Name = L"wewToolStripMenuItem";
			this->wewToolStripMenuItem->Size = System::Drawing::Size(104, 22);
			this->wewToolStripMenuItem->Text = L"wew";
			// 
			// weeToolStripMenuItem
			// 
			this->weeToolStripMenuItem->Name = L"weeToolStripMenuItem";
			this->weeToolStripMenuItem->Size = System::Drawing::Size(104, 22);
			this->weeToolStripMenuItem->Text = L"wee";
			// 
			// contextMenuStrip4
			// 
			this->contextMenuStrip4->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->eweToolStripMenuItem });
			this->contextMenuStrip4->Name = L"contextMenuStrip4";
			this->contextMenuStrip4->Size = System::Drawing::Size(96, 26);
			// 
			// eweToolStripMenuItem
			// 
			this->eweToolStripMenuItem->Name = L"eweToolStripMenuItem";
			this->eweToolStripMenuItem->Size = System::Drawing::Size(95, 22);
			this->eweToolStripMenuItem->Text = L"ewe";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->âûõîäToolStripMenuItem1,
					this->ïğàâèëàÈãğûToolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(763, 24);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// âûõîäToolStripMenuItem1
			// 
			this->âûõîäToolStripMenuItem1->Name = L"âûõîäToolStripMenuItem1";
			this->âûõîäToolStripMenuItem1->Size = System::Drawing::Size(100, 20);
			this->âûõîäToolStripMenuItem1->Text = L"Âûéòè èç èãğû";
			this->âûõîäToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Game::âûõîäToolStripMenuItem1_Click);
			// 
			// ïğàâèëàÈãğûToolStripMenuItem1
			// 
			this->ïğàâèëàÈãğûToolStripMenuItem1->Name = L"ïğàâèëàÈãğûToolStripMenuItem1";
			this->ïğàâèëàÈãğûToolStripMenuItem1->Size = System::Drawing::Size(98, 20);
			this->ïğàâèëàÈãğûToolStripMenuItem1->Text = L"Ïğàâèëà èãğû";
			this->ïğàâèëàÈãğûToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Game::ïğàâèëàÈãğûToolStripMenuItem1_Click);
			// 
			// secret_word
			// 
			this->secret_word->AutoSize = true;
			this->secret_word->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->secret_word->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->secret_word->ForeColor = System::Drawing::Color::Cornsilk;
			this->secret_word->Location = System::Drawing::Point(287, 86);
			this->secret_word->Name = L"secret_word";
			this->secret_word->Size = System::Drawing::Size(217, 33);
			this->secret_word->TabIndex = 39;
			this->secret_word->Text = L"Èãğà \"Ãîğîäà\"";
			this->secret_word->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// userInput
			// 
			this->userInput->Location = System::Drawing::Point(137, 169);
			this->userInput->Name = L"userInput";
			this->userInput->Size = System::Drawing::Size(283, 20);
			this->userInput->TabIndex = 40;
			// 
			// outputCity
			// 
			this->outputCity->AutoSize = true;
			this->outputCity->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->outputCity->Location = System::Drawing::Point(212, 238);
			this->outputCity->Name = L"outputCity";
			this->outputCity->Size = System::Drawing::Size(59, 22);
			this->outputCity->TabIndex = 41;
			this->outputCity->Text = L"label1";
			this->outputCity->Visible = false;
			// 
			// answer
			// 
			this->answer->BackColor = System::Drawing::Color::IndianRed;
			this->answer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->answer->Location = System::Drawing::Point(454, 166);
			this->answer->Name = L"answer";
			this->answer->Size = System::Drawing::Size(75, 23);
			this->answer->TabIndex = 42;
			this->answer->Text = L"îòâåòèòü";
			this->answer->UseVisualStyleBackColor = false;
			this->answer->Click += gcnew System::EventHandler(this, &Game::answer_Click);
			// 
			// restart
			// 
			this->restart->BackColor = System::Drawing::Color::IndianRed;
			this->restart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->restart->Location = System::Drawing::Point(559, 318);
			this->restart->Name = L"restart";
			this->restart->Size = System::Drawing::Size(122, 23);
			this->restart->TabIndex = 43;
			this->restart->Text = L"íà÷àòü çàíîâî";
			this->restart->UseVisualStyleBackColor = false;
			this->restart->Click += gcnew System::EventHandler(this, &Game::restart_Click);
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(763, 363);
			this->Controls->Add(this->restart);
			this->Controls->Add(this->answer);
			this->Controls->Add(this->outputCity);
			this->Controls->Add(this->userInput);
			this->Controls->Add(this->secret_word);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Game";
			this->Text = L"Game";
			this->Load += gcnew System::EventHandler(this, &Game::Game_Load);
			this->contextMenuStrip1->ResumeLayout(false);
			this->contextMenuStrip3->ResumeLayout(false);
			this->contextMenuStrip4->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Game_Load(System::Object^ sender, System::EventArgs^ e) {
		fromFileToData(filePath, wordMap);
			
	}

		   
	private: System::Void âûõîäToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		obj->Show();
	}
	   
	private: System::Void Practise::Game::fromFileToData(String^ filePath, Dictionary<String^, List<String^>^>^ wordMap);
	private: System::Void Practise::Game::CompareWordsWithKey(String^ key, String^ key_1, String^ inputString, Dictionary<String^, List<String^>^>^ dict);
	private: System::Void labelPrint(String^ city);
	private: System::Void answer_Click(System::Object^ sender, System::EventArgs^ e);
	private: String^ findLastLetter(String^ user_city);
	private: String^ findFirstLetter(String^ user_city);
	private: bool digitsCheck(String^ string);
	private: bool update_handler();
	private: System::Void restarting();
	private: System::Void restart_Click(System::Object^ sender, System::EventArgs^ e) {
	restarting();
	}
	private: Int32 randGenerator(Int32 array_length);
	private: System::Void ïğàâèëàÈãğûToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Ïğàâèëà èãğû â Ãîğîäà.\nÂû ââîäèòå ãîğîä, ïğîãğàììà ïğåäëàãàåò ñâîé, âû ââîäèòå íîâûé ãîğîä, ïåğâàÿ áóêâà êîòîğîãî ñîâïàäàåò ñ  ïîñëåäíåé áóêâîé íàçâàííîãî ïğîãğàììîé ãîğîäà");
	}			
	private: bool isUsed(String^ user_city, String^ key);


};


}
