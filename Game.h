#pragma once

namespace Practise {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Label^ secret_word;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ letters;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ToolStripMenuItem^ ÚÂÏ‡—ÎÓ‚ToolStripMenuItem;
	private: System::Windows::Forms::Label^ comments;
	private: System::ComponentModel::IContainer^ components;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->secret_word = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->letters = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->ÚÂÏ‡—ÎÓ‚ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->comments = (gcnew System::Windows::Forms::Label());
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
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->‚˚ıÓ‰ToolStripMenuItem1,
					this->Ô‡‚ËÎ‡»„˚ToolStripMenuItem1, this->ÚÂÏ‡—ÎÓ‚ToolStripMenuItem
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
			// 
			// Ô‡‚ËÎ‡»„˚ToolStripMenuItem1
			// 
			this->Ô‡‚ËÎ‡»„˚ToolStripMenuItem1->Name = L"Ô‡‚ËÎ‡»„˚ToolStripMenuItem1";
			this->Ô‡‚ËÎ‡»„˚ToolStripMenuItem1->Size = System::Drawing::Size(98, 20);
			this->Ô‡‚ËÎ‡»„˚ToolStripMenuItem1->Text = L"œ‡‚ËÎ‡ Ë„˚";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(73, 204);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(49, 41);
			this->button1->TabIndex = 6;
			this->button1->Text = L"È";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(128, 204);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(49, 41);
			this->button2->TabIndex = 7;
			this->button2->Text = L"ˆ";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(183, 204);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(49, 41);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Û";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(238, 204);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(49, 41);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Í";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(293, 204);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(49, 41);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Â";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(348, 204);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(49, 41);
			this->button6->TabIndex = 11;
			this->button6->Text = L"Ì";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(403, 204);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(49, 41);
			this->button7->TabIndex = 12;
			this->button7->Text = L"„";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(458, 204);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(49, 41);
			this->button8->TabIndex = 13;
			this->button8->Text = L"¯";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(513, 204);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(49, 41);
			this->button9->TabIndex = 14;
			this->button9->Text = L"˘";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(568, 204);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(49, 41);
			this->button10->TabIndex = 15;
			this->button10->Text = L"Á";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(623, 204);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(49, 41);
			this->button11->TabIndex = 16;
			this->button11->Text = L"ı";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(678, 204);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(49, 41);
			this->button12->TabIndex = 27;
			this->button12->Text = L"˙";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(568, 251);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(49, 41);
			this->button13->TabIndex = 26;
			this->button13->Text = L"Ê";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(513, 251);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(49, 41);
			this->button14->TabIndex = 25;
			this->button14->Text = L"‰";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(458, 251);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(49, 41);
			this->button15->TabIndex = 24;
			this->button15->Text = L"Î";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(403, 251);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(49, 41);
			this->button16->TabIndex = 23;
			this->button16->Text = L"Ó";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(348, 251);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(49, 41);
			this->button17->TabIndex = 22;
			this->button17->Text = L"";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(293, 251);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(49, 41);
			this->button18->TabIndex = 21;
			this->button18->Text = L"Ô";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(238, 251);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(49, 41);
			this->button19->TabIndex = 20;
			this->button19->Text = L"‡";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(183, 251);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(49, 41);
			this->button20->TabIndex = 19;
			this->button20->Text = L"‚";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(128, 251);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(49, 41);
			this->button21->TabIndex = 18;
			this->button21->Text = L"˚";
			this->button21->UseVisualStyleBackColor = true;
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(73, 251);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(49, 41);
			this->button22->TabIndex = 17;
			this->button22->Text = L"Ù";
			this->button22->UseVisualStyleBackColor = true;
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(623, 251);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(49, 41);
			this->button23->TabIndex = 38;
			this->button23->Text = L"˝";
			this->button23->UseVisualStyleBackColor = true;
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(18, 204);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(49, 41);
			this->button24->TabIndex = 37;
			this->button24->Text = L"∏";
			this->button24->UseVisualStyleBackColor = true;
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(513, 298);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(49, 41);
			this->button25->TabIndex = 36;
			this->button25->Text = L"˛";
			this->button25->UseVisualStyleBackColor = true;
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(458, 298);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(49, 41);
			this->button26->TabIndex = 35;
			this->button26->Text = L"·";
			this->button26->UseVisualStyleBackColor = true;
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(403, 298);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(49, 41);
			this->button27->TabIndex = 34;
			this->button27->Text = L"¸";
			this->button27->UseVisualStyleBackColor = true;
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(348, 298);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(49, 41);
			this->button28->TabIndex = 33;
			this->button28->Text = L"Ú";
			this->button28->UseVisualStyleBackColor = true;
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(293, 298);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(49, 41);
			this->button29->TabIndex = 32;
			this->button29->Text = L"Ë";
			this->button29->UseVisualStyleBackColor = true;
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(238, 298);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(49, 41);
			this->button30->TabIndex = 31;
			this->button30->Text = L"Ï";
			this->button30->UseVisualStyleBackColor = true;
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(183, 298);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(49, 41);
			this->button31->TabIndex = 30;
			this->button31->Text = L"Ò";
			this->button31->UseVisualStyleBackColor = true;
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(128, 298);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(49, 41);
			this->button32->TabIndex = 29;
			this->button32->Text = L"˜";
			this->button32->UseVisualStyleBackColor = true;
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(73, 298);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(49, 41);
			this->button33->TabIndex = 28;
			this->button33->Text = L"ˇ";
			this->button33->UseVisualStyleBackColor = true;
			// 
			// secret_word
			// 
			this->secret_word->AutoSize = true;
			this->secret_word->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->secret_word->Location = System::Drawing::Point(161, 115);
			this->secret_word->Name = L"secret_word";
			this->secret_word->Size = System::Drawing::Size(99, 33);
			this->secret_word->TabIndex = 39;
			this->secret_word->Text = L"label1";
			this->secret_word->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(175, 20);
			this->label1->TabIndex = 40;
			this->label1->Text = L"«‡„‡‰‡ÌÓ ÒÎÓ‚Ó ËÁ ";
			// 
			// letters
			// 
			this->letters->AutoSize = true;
			this->letters->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->letters->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->letters->Location = System::Drawing::Point(192, 39);
			this->letters->Name = L"letters";
			this->letters->Size = System::Drawing::Size(66, 24);
			this->letters->TabIndex = 41;
			this->letters->Text = L"label2";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(267, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 20);
			this->label2->TabIndex = 42;
			this->label2->Text = L"·ÛÍ‚";
			// 
			// ÚÂÏ‡—ÎÓ‚ToolStripMenuItem
			// 
			this->ÚÂÏ‡—ÎÓ‚ToolStripMenuItem->Name = L"ÚÂÏ‡—ÎÓ‚ToolStripMenuItem";
			this->ÚÂÏ‡—ÎÓ‚ToolStripMenuItem->Size = System::Drawing::Size(90, 20);
			this->ÚÂÏ‡—ÎÓ‚ToolStripMenuItem->Text = L"“ÂÏ‡ Á‡„‡‰ÍË";
			// 
			// comments
			// 
			this->comments->AutoSize = true;
			this->comments->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comments->Location = System::Drawing::Point(412, 61);
			this->comments->Name = L"comments";
			this->comments->Size = System::Drawing::Size(66, 24);
			this->comments->TabIndex = 43;
			this->comments->Text = L"label3";
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(763, 363);
			this->Controls->Add(this->comments);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->letters);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->secret_word);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
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
	}
};
}
