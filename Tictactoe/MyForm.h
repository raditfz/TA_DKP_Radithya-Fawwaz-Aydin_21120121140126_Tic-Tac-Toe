#pragma once

namespace Tictactoe {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button_Reset;
	private: System::Windows::Forms::Label^ lblPlayer;
	private: System::Windows::Forms::Button^ button_NewGame;
	private: System::Windows::Forms::Label^ lbl1;
	private: System::Windows::Forms::Label^ lbl2;
	private: System::Windows::Forms::Label^ lblX;
	private: System::Windows::Forms::Label^ lblO;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel4;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button_NewGame = (gcnew System::Windows::Forms::Button());
			this->lblPlayer = (gcnew System::Windows::Forms::Label());
			this->button_Reset = (gcnew System::Windows::Forms::Button());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->lblX = (gcnew System::Windows::Forms::Label());
			this->lblO = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(473, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(307, 54);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 19.8806F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Menu;
			this->label1->Location = System::Drawing::Point(45, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(227, 49);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Tic Tac Toe";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Controls->Add(this->button9);
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->button7);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Location = System::Drawing::Point(12, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(439, 394);
			this->panel2->TabIndex = 1;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button9->Font = (gcnew System::Drawing::Font(L"Verdana", 22.02985F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(295, 262);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(136, 118);
			this->button9->TabIndex = 8;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button8->Font = (gcnew System::Drawing::Font(L"Verdana", 22.02985F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(153, 262);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(136, 118);
			this->button8->TabIndex = 7;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button7->Font = (gcnew System::Drawing::Font(L"Verdana", 22.02985F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(11, 262);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(136, 118);
			this->button7->TabIndex = 6;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button6->Font = (gcnew System::Drawing::Font(L"Verdana", 22.02985F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(295, 138);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(136, 118);
			this->button6->TabIndex = 5;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button5->Font = (gcnew System::Drawing::Font(L"Verdana", 22.02985F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(153, 138);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(136, 118);
			this->button5->TabIndex = 4;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button4->Font = (gcnew System::Drawing::Font(L"Verdana", 22.02985F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(11, 138);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(136, 118);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button3->Font = (gcnew System::Drawing::Font(L"Verdana", 22.02985F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(295, 14);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(136, 118);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button2->Font = (gcnew System::Drawing::Font(L"Verdana", 22.02985F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(153, 14);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(136, 118);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button1->Font = (gcnew System::Drawing::Font(L"Verdana", 22.02985F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(11, 14);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 118);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->Controls->Add(this->button_NewGame);
			this->panel3->Controls->Add(this->lblPlayer);
			this->panel3->Controls->Add(this->button_Reset);
			this->panel3->Location = System::Drawing::Point(473, 240);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(307, 166);
			this->panel3->TabIndex = 2;
			// 
			// button_NewGame
			// 
			this->button_NewGame->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button_NewGame->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_NewGame->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.20895F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_NewGame->ForeColor = System::Drawing::Color::Snow;
			this->button_NewGame->Location = System::Drawing::Point(153, 85);
			this->button_NewGame->Name = L"button_NewGame";
			this->button_NewGame->Size = System::Drawing::Size(138, 57);
			this->button_NewGame->TabIndex = 10;
			this->button_NewGame->Text = L"New Game";
			this->button_NewGame->UseVisualStyleBackColor = false;
			this->button_NewGame->Click += gcnew System::EventHandler(this, &MyForm::button_NewGame_Click);
			// 
			// lblPlayer
			// 
			this->lblPlayer->BackColor = System::Drawing::Color::White;
			this->lblPlayer->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblPlayer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.74627F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPlayer->Location = System::Drawing::Point(53, 17);
			this->lblPlayer->Name = L"lblPlayer";
			this->lblPlayer->Size = System::Drawing::Size(209, 36);
			this->lblPlayer->TabIndex = 5;
			this->lblPlayer->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button_Reset
			// 
			this->button_Reset->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button_Reset->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_Reset->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.20895F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_Reset->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button_Reset->Location = System::Drawing::Point(7, 85);
			this->button_Reset->Name = L"button_Reset";
			this->button_Reset->Size = System::Drawing::Size(142, 57);
			this->button_Reset->TabIndex = 9;
			this->button_Reset->Text = L"Reset";
			this->button_Reset->UseVisualStyleBackColor = false;
			this->button_Reset->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 16.1194F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl1->ForeColor = System::Drawing::Color::LightSkyBlue;
			this->lbl1->Location = System::Drawing::Point(24, 54);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(141, 36);
			this->lbl1->TabIndex = 0;
			this->lbl1->Text = L"Pemain X";
			// 
			// lbl2
			// 
			this->lbl2->AutoSize = true;
			this->lbl2->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 16.1194F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl2->ForeColor = System::Drawing::Color::Gold;
			this->lbl2->Location = System::Drawing::Point(24, 107);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(143, 36);
			this->lbl2->TabIndex = 1;
			this->lbl2->Text = L"Pemain O";
			// 
			// lblX
			// 
			this->lblX->BackColor = System::Drawing::Color::White;
			this->lblX->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.97015F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblX->Location = System::Drawing::Point(173, 54);
			this->lblX->Name = L"lblX";
			this->lblX->Size = System::Drawing::Size(106, 36);
			this->lblX->TabIndex = 2;
			this->lblX->Text = L"0";
			this->lblX->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblO
			// 
			this->lblO->BackColor = System::Drawing::Color::White;
			this->lblO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.97015F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblO->Location = System::Drawing::Point(174, 107);
			this->lblO->Name = L"lblO";
			this->lblO->Size = System::Drawing::Size(105, 36);
			this->lblO->TabIndex = 3;
			this->lblO->Text = L"0";
			this->lblO->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 13.97015F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label6->Location = System::Drawing::Point(111, 7);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(86, 33);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Score";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->Controls->Add(this->label6);
			this->panel4->Controls->Add(this->lblO);
			this->panel4->Controls->Add(this->lblX);
			this->panel4->Controls->Add(this->lbl2);
			this->panel4->Controls->Add(this->lbl1);
			this->panel4->Location = System::Drawing::Point(473, 72);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(307, 162);
			this->panel4->TabIndex = 3;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(792, 418);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Tic Tac Toe";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);

		}
		Boolean checker; //Pengecek giliran pemain, untuk mengubah giliran
		int plusone; //Penghitung banyak menang

#pragma endregion
		//Fungsi membuat semua tombol Non aktif
		void Enabled_False() {
			button1->Enabled = false;
			button2->Enabled = false;
			button3->Enabled = false;
			button4->Enabled = false;
			button5->Enabled = false;
			button6->Enabled = false;
			button7->Enabled = false;
			button8->Enabled = false;
			button9->Enabled = false;
		}

		//Pengecek giliran pemain, untuk menampilkan giliran
		void PlayerTurn() {
			if (checker == false) {
				lblPlayer->Text = "Giliran Pemain X";
			}
			else {
				lblPlayer->Text = "Giliran Pemain O";
			}
		}

		//Fungsi skor untuk penghitung setiap kali menang
		//Setiap sisi memiliki 8 kondisi kemenangan
		void score() {
			if (button1->Text == "X" && button2->Text == "X" && button3->Text == "X") {
				button1->BackColor = System::Drawing::Color::PowderBlue;
				button2->BackColor = System::Drawing::Color::PowderBlue;
				button3->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("Pemain X menang.", "Selamat!",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblX->Text);
				lblX->Text = Convert::ToString(plusone + 1);
				Enabled_False();
			}
			if (button1->Text == "X" && button5->Text == "X" && button9->Text == "X") {
				button1->BackColor = System::Drawing::Color::PowderBlue;
				button5->BackColor = System::Drawing::Color::PowderBlue;
				button9->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("Pemain X menang.", "Selamat!",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblX->Text);
				lblX->Text = Convert::ToString(plusone + 1);
				Enabled_False();
			}
			if (button4->Text == "X" && button5->Text == "X" && button6->Text == "X") {
				button4->BackColor = System::Drawing::Color::PowderBlue;
				button5->BackColor = System::Drawing::Color::PowderBlue;
				button6->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("Pemain X menang.", "Selamat!",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblX->Text);
				lblX->Text = Convert::ToString(plusone + 1);
				Enabled_False();
			}
			if (button7->Text == "X" && button8->Text == "X" && button9->Text == "X") {
				button7->BackColor = System::Drawing::Color::PowderBlue;
				button8->BackColor = System::Drawing::Color::PowderBlue;
				button9->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("Pemain X menang.", "Selamat!",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblX->Text);
				lblX->Text = Convert::ToString(plusone + 1);
				Enabled_False();
			}
			if (button7->Text == "X" && button5->Text == "X" && button3->Text == "X") {
				button1->BackColor = System::Drawing::Color::PowderBlue;
				button2->BackColor = System::Drawing::Color::PowderBlue;
				button3->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("Pemain X menang.", "Selamat!",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblX->Text);
				lblX->Text = Convert::ToString(plusone + 1);
				Enabled_False();
			}
			if (button1->Text == "X" && button4->Text == "X" && button7->Text == "X") {
				button1->BackColor = System::Drawing::Color::PowderBlue;
				button4->BackColor = System::Drawing::Color::PowderBlue;
				button7->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("Pemain X menang.", "Selamat!",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblX->Text);
				lblX->Text = Convert::ToString(plusone + 1);
				Enabled_False();
			}
			if (button2->Text == "X" && button5->Text == "X" && button8->Text == "X") {
				button2->BackColor = System::Drawing::Color::PowderBlue;
				button5->BackColor = System::Drawing::Color::PowderBlue;
				button8->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("Pemain X menang.", "Selamat!",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblX->Text);
				lblX->Text = Convert::ToString(plusone + 1);
				Enabled_False();
			}
			if (button3->Text == "X" && button6->Text == "X" && button9->Text == "X") {
				button3->BackColor = System::Drawing::Color::PowderBlue;
				button6->BackColor = System::Drawing::Color::PowderBlue;
				button9->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("Pemain X menang.", "Selamat!",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblX->Text);
				lblX->Text = Convert::ToString(plusone + 1);
				Enabled_False();
			}

			/****************  Pemain O  ****************/

			if (button1->Text == "O" && button2->Text == "O" && button3->Text == "O") {
				button1->BackColor = System::Drawing::Color::Gold;
				button2->BackColor = System::Drawing::Color::Gold;
				button3->BackColor = System::Drawing::Color::Gold;
				MessageBox::Show("Pemain O menang.", "Selamat!",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblO->Text);
				lblO->Text = Convert::ToString(plusone + 1);
				Enabled_False();
			}
			if (button1->Text == "O" && button5->Text == "O" && button9->Text == "O") {
				button1->BackColor = System::Drawing::Color::Gold;
				button5->BackColor = System::Drawing::Color::Gold;
				button9->BackColor = System::Drawing::Color::Gold;
				MessageBox::Show("Pemain O menang.", "Selamat!",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblO->Text);
				lblO->Text = Convert::ToString(plusone + 1);
				Enabled_False();
			}
			if (button4->Text == "O" && button5->Text == "O" && button6->Text == "O") {
				button4->BackColor = System::Drawing::Color::Gold;
				button5->BackColor = System::Drawing::Color::Gold;
				button6->BackColor = System::Drawing::Color::Gold;
				MessageBox::Show("Pemain O menang.", "Selamat!",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblO->Text);
				lblO->Text = Convert::ToString(plusone + 1);
				Enabled_False();
			}
			if (button7->Text == "O" && button8->Text == "O" && button9->Text == "O") {
				button7->BackColor = System::Drawing::Color::Gold;
				button8->BackColor = System::Drawing::Color::Gold;
				button9->BackColor = System::Drawing::Color::Gold;
				MessageBox::Show("Pemain O menang.", "Selamat!",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblO->Text);
				lblO->Text = Convert::ToString(plusone + 1);
				Enabled_False();
			}
			if (button7->Text == "O" && button5->Text == "O" && button3->Text == "O") {
				button1->BackColor = System::Drawing::Color::Gold;
				button2->BackColor = System::Drawing::Color::Gold;
				button3->BackColor = System::Drawing::Color::Gold;
				MessageBox::Show("Pemain O menang.", "Selamat!",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblO->Text);
				lblO->Text = Convert::ToString(plusone + 1);
				Enabled_False();
			}
			if (button1->Text == "O" && button4->Text == "O" && button7->Text == "O") {
				button1->BackColor = System::Drawing::Color::Gold;
				button4->BackColor = System::Drawing::Color::Gold;
				button7->BackColor = System::Drawing::Color::Gold;
				MessageBox::Show("Pemain O menang.", "Selamat!",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblO->Text);
				lblO->Text = Convert::ToString(plusone + 1);
				Enabled_False();
			}
			if (button2->Text == "O" && button5->Text == "O" && button8->Text == "O") {
				button2->BackColor = System::Drawing::Color::Gold;
				button5->BackColor = System::Drawing::Color::Gold;
				button8->BackColor = System::Drawing::Color::Gold;
				MessageBox::Show("Pemain O menang.", "Selamat!",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblO->Text);
				lblO->Text = Convert::ToString(plusone + 1);
				Enabled_False();
			}
			if (button3->Text == "O" && button6->Text == "O" && button9->Text == "O") {
				button3->BackColor = System::Drawing::Color::Gold;
				button6->BackColor = System::Drawing::Color::Gold;
				button9->BackColor = System::Drawing::Color::Gold;
				MessageBox::Show("Pemain O menang.", "Selamat!",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblO->Text);
				lblO->Text = Convert::ToString(plusone + 1);
				Enabled_False();
			}
		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false) {
			button1->Text = "X";
			checker = true;
		}
		else {
			button1->Text = "O";
			checker = false;
		}
		score();
		button1->Enabled = false;
		PlayerTurn();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false) {
			button2->Text = "X";
			checker = true;
		}
		else {
			button2->Text = "O";
			checker = false;
		}
		score();
		button2->Enabled = false;
		PlayerTurn();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false) {
			button3->Text = "X";
			checker = true;
		}
		else {
			button3->Text = "O";
			checker = false;
		}
		score();
		button3->Enabled = false;
		PlayerTurn();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false) {
			button4->Text = "X";
			checker = true;
		}
		else {
			button4->Text = "O";
			checker = false;
		}
		score();
		button4->Enabled = false;
		PlayerTurn();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false) {
			button5->Text = "X";
			checker = true;
		}
		else {
			button5->Text = "O";
			checker = false;
		}
		score();
		button5->Enabled = false;
		PlayerTurn();
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false) {
			button6->Text = "X";
			checker = true;
		}
		else {
			button6->Text = "O";
			checker = false;
		}
		score();
		button6->Enabled = false;
		PlayerTurn();
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false) {
			button7->Text = "X";
			checker = true;
		}
		else {
			button7->Text = "O";
			checker = false;
		}
		score();
		button7->Enabled = false;
		PlayerTurn();
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false) {
			button8->Text = "X";
			checker = true;
		}
		else {
			button8->Text = "O";
			checker = false;
		}
		score();
		button8->Enabled = false;
		PlayerTurn();
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false) {
			button9->Text = "X";
			checker = true;
		}
		else {
			button9->Text = "O";
			checker = false;
		}
		score();
		button9->Enabled = false;
		PlayerTurn();
	}

	//Tombol Reset untuk mengulang permainan (mengaktifkan 9 tombol permainan)
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	button1->Enabled = true;
	button2->Enabled = true;
	button3->Enabled = true;
	button4->Enabled = true;
	button5->Enabled = true;
	button6->Enabled = true;
	button7->Enabled = true;
	button8->Enabled = true;
	button9->Enabled = true;

	button1->Text = "";
	button2->Text = "";
	button3->Text = "";
	button4->Text = "";
	button5->Text = "";
	button6->Text = "";
	button7->Text = "";
	button8->Text = "";
	button9->Text = "";

	button1->BackColor = System::Drawing::Color::White;
	button2->BackColor = System::Drawing::Color::White;
	button3->BackColor = System::Drawing::Color::White;
	button4->BackColor = System::Drawing::Color::White;
	button5->BackColor = System::Drawing::Color::White;
	button6->BackColor = System::Drawing::Color::White;
	button7->BackColor = System::Drawing::Color::White;
	button8->BackColor = System::Drawing::Color::White;
	button9->BackColor = System::Drawing::Color::White;

	button_NewGame->Enabled = true;
}

	//Tombol NewGame mengulang skor pemain (kembali ke 0) dan mengulang permainan
	private: System::Void button_NewGame_Click(System::Object^ sender, System::EventArgs^ e) {
	button1->Enabled = true;
	button2->Enabled = true;
	button3->Enabled = true;
	button4->Enabled = true;
	button5->Enabled = true;
	button6->Enabled = true;
	button7->Enabled = true;
	button8->Enabled = true;
	button9->Enabled = true;

	button1->Text = "";
	button2->Text = "";
	button3->Text = "";
	button4->Text = "";
	button5->Text = "";
	button6->Text = "";
	button7->Text = "";
	button8->Text = "";
	button9->Text = "";

	button1->BackColor = System::Drawing::Color::White;
	button2->BackColor = System::Drawing::Color::White;
	button3->BackColor = System::Drawing::Color::White;
	button4->BackColor = System::Drawing::Color::White;
	button5->BackColor = System::Drawing::Color::White;
	button6->BackColor = System::Drawing::Color::White;
	button7->BackColor = System::Drawing::Color::White;
	button8->BackColor = System::Drawing::Color::White;
	button9->BackColor = System::Drawing::Color::White;

	lblX->Text = "0";
	lblO->Text = "0";
}
};
}
