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
		
		Game(void)
		{
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
	private: System::Windows::Forms::ToolStripMenuItem^ ‚˚ıÓ‰ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ Ô‡‚ËÎ‡»„˚ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ‚˚ıÓ‰»Á¡‰ToolStripMenuItem;

	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip2;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip3;
	private: System::Windows::Forms::ToolStripMenuItem^ weewToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ wewToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ weeToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip4;
	private: System::Windows::Forms::ToolStripMenuItem^ eweToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ‚˚ıÓ‰ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ Ô‡‚ËÎ‡»„˚ToolStripMenuItem1;



	private:Dictionary<String^, List<String^>^>^ wordMap = gcnew Dictionary<String^, List<String^>^>();
	private: String^ filePath = "cities.txt";


	private: System::Windows::Forms::Label^ secret_word;








	private: System::ComponentModel::IContainer^ components;

	// ‰Ó·‡‚ÎÂÌÌ˚Â ÏÌÓ˛ ÔÂÂÏÂÌÌ˚Â
	private: String^ filename = "prog.txt";
	private: System::Windows::Forms::TextBox^ userInput;
	private: System::Windows::Forms::Label^ outputCity;
	private: System::Windows::Forms::Button^ answer;


	private: Dictionary<String^, List<String^>^>^ usedWords = gcnew Dictionary<String^, List<String^>^>();



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
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->‚˚ıÓ‰ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Ô‡‚ËÎ‡»„˚ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->‚˚ıÓ‰»Á¡‰ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->contextMenuStrip3 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->weewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->weeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip4 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->eweToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->‚˚ıÓ‰ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Ô‡‚ËÎ‡»„˚ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->secret_word = (gcnew System::Windows::Forms::Label());
			this->userInput = (gcnew System::Windows::Forms::TextBox());
			this->outputCity = (gcnew System::Windows::Forms::Label());
			this->answer = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1->SuspendLayout();
			this->contextMenuStrip3->SuspendLayout();
			this->contextMenuStrip4->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->‚˚ıÓ‰ToolStripMenuItem,
					this->Ô‡‚ËÎ‡»„˚ToolStripMenuItem, this->‚˚ıÓ‰»Á¡‰ToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(156, 70);
			// 
			// ‚˚ıÓ‰ToolStripMenuItem
			// 
			this->‚˚ıÓ‰ToolStripMenuItem->Name = L"‚˚ıÓ‰ToolStripMenuItem";
			this->‚˚ıÓ‰ToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->‚˚ıÓ‰ToolStripMenuItem->Text = L"¬˚ıÓ‰ ËÁ Ë„˚";
			// 
			// Ô‡‚ËÎ‡»„˚ToolStripMenuItem
			// 
			this->Ô‡‚ËÎ‡»„˚ToolStripMenuItem->Name = L"Ô‡‚ËÎ‡»„˚ToolStripMenuItem";
			this->Ô‡‚ËÎ‡»„˚ToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->Ô‡‚ËÎ‡»„˚ToolStripMenuItem->Text = L"œ‡‚ËÎ‡ Ë„˚";
			// 
			// ‚˚ıÓ‰»Á¡‰ToolStripMenuItem
			// 
			this->‚˚ıÓ‰»Á¡‰ToolStripMenuItem->Name = L"‚˚ıÓ‰»Á¡‰ToolStripMenuItem";
			this->‚˚ıÓ‰»Á¡‰ToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->‚˚ıÓ‰»Á¡‰ToolStripMenuItem->Text = L"¬˚ıÓ‰ ËÁ ·‰";
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
				this->‚˚ıÓ‰ToolStripMenuItem1,
					this->Ô‡‚ËÎ‡»„˚ToolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(763, 24);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ‚˚ıÓ‰ToolStripMenuItem1
			// 
			this->‚˚ıÓ‰ToolStripMenuItem1->Name = L"‚˚ıÓ‰ToolStripMenuItem1";
			this->‚˚ıÓ‰ToolStripMenuItem1->Size = System::Drawing::Size(100, 20);
			this->‚˚ıÓ‰ToolStripMenuItem1->Text = L"¬˚ÈÚË ËÁ Ë„˚";
			this->‚˚ıÓ‰ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Game::‚˚ıÓ‰ToolStripMenuItem1_Click);
			// 
			// Ô‡‚ËÎ‡»„˚ToolStripMenuItem1
			// 
			this->Ô‡‚ËÎ‡»„˚ToolStripMenuItem1->Name = L"Ô‡‚ËÎ‡»„˚ToolStripMenuItem1";
			this->Ô‡‚ËÎ‡»„˚ToolStripMenuItem1->Size = System::Drawing::Size(98, 20);
			this->Ô‡‚ËÎ‡»„˚ToolStripMenuItem1->Text = L"œ‡‚ËÎ‡ Ë„˚";
			// 
			// secret_word
			// 
			this->secret_word->AutoSize = true;
			this->secret_word->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->secret_word->Location = System::Drawing::Point(210, 55);
			this->secret_word->Name = L"secret_word";
			this->secret_word->Size = System::Drawing::Size(217, 33);
			this->secret_word->TabIndex = 39;
			this->secret_word->Text = L"»„‡ \"√ÓÓ‰‡\"";
			this->secret_word->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// userInput
			// 
			this->userInput->Location = System::Drawing::Point(86, 166);
			this->userInput->Name = L"userInput";
			this->userInput->Size = System::Drawing::Size(270, 20);
			this->userInput->TabIndex = 40;
			// 
			// outputCity
			// 
			this->outputCity->AutoSize = true;
			this->outputCity->Location = System::Drawing::Point(216, 249);
			this->outputCity->Name = L"outputCity";
			this->outputCity->Size = System::Drawing::Size(35, 13);
			this->outputCity->TabIndex = 41;
			this->outputCity->Text = L"label1";
			// 
			// answer
			// 
			this->answer->Location = System::Drawing::Point(385, 162);
			this->answer->Name = L"answer";
			this->answer->Size = System::Drawing::Size(75, 23);
			this->answer->TabIndex = 42;
			this->answer->Text = L"ÓÚ‚ÂÚËÚ¸";
			this->answer->UseVisualStyleBackColor = true;
			this->answer->Click += gcnew System::EventHandler(this, &Game::answer_Click);
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(763, 363);
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

	
private: System::Void ‚˚ıÓ‰ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
	   
	private: System::Void Practise::Game::fromFileToData(String^ filePath, Dictionary<String^, List<String^>^>^ wordMap);
//private: System::Void userInput_TextChanged(System::Object^ sender, System::EventArgs^ e);
	 private:  System::Void Practise::Game::CompareWordsWithKey(String^ key, String^ inputString, Dictionary<String^, List<String^>^>^ dict);
			private: System::Void labelPrint(String^ city);
private: System::Void answer_Click(System::Object^ sender, System::EventArgs^ e);
private: bool save_convertToInt64(String^ str);
	 private: String^ findLastLetter(String^ user_city);
	private: bool digitsCheck(String^ string);

};


}
