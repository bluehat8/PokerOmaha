#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ txtYourName;
	private: System::Windows::Forms::Panel^ titleScreen;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ player2;
	private: System::Windows::Forms::Button^ player3;
	private: System::Windows::Forms::Button^ player4;
	private: System::Windows::Forms::Button^ player5;
	private: System::Windows::Forms::Button^ player6;
	protected:

	protected:


	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->txtYourName = (gcnew System::Windows::Forms::TextBox());
			this->titleScreen = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->player2 = (gcnew System::Windows::Forms::Button());
			this->player3 = (gcnew System::Windows::Forms::Button());
			this->player4 = (gcnew System::Windows::Forms::Button());
			this->player5 = (gcnew System::Windows::Forms::Button());
			this->player6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// panel1
			// 
			System::Drawing::Bitmap^ imagen = gcnew System::Drawing::Bitmap("testfondo.bmp", true);
			this->panel1->BackgroundImage = imagen;			
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel1->ForeColor = System::Drawing::Color::Crimson;
			this->panel1->Location = System::Drawing::Point(446, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(289, 463);
			this->panel1->TabIndex = 0;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 7.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::Control;
			System::Drawing::Bitmap^ addImage = gcnew System::Drawing::Bitmap("add-20.png", true);

			this->button2->Image = addImage;
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;			
			this->button2->Location = System::Drawing::Point(42, 343);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(367, 39);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Iniciar";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// txtYourName
			// 
			this->txtYourName->Location = System::Drawing::Point(192, 226);
			this->txtYourName->Name = L"txtYourName";
			this->txtYourName->Size = System::Drawing::Size(217, 20);
			this->txtYourName->TabIndex = 4;
			// 
			// titleScreen
			// 
			System::Drawing::Bitmap^ titleImage = gcnew System::Drawing::Bitmap("PokerTitleScreen.png", true);
			this->titleScreen->BackgroundImage = titleImage;
			//this->titleScreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"titleScreen.BackgroundImage")));
			this->titleScreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->titleScreen->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->titleScreen->Location = System::Drawing::Point(42, 55);
			this->titleScreen->Name = L"titleScreen";
			this->titleScreen->Size = System::Drawing::Size(378, 120);
			this->titleScreen->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.818182F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::AliceBlue;
			this->label1->Location = System::Drawing::Point(39, 226);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(133, 18);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Escribe tu nombre:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.818182F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::AliceBlue;
			this->label2->Location = System::Drawing::Point(39, 283);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 18);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Nº de jugadores";
			// 
			// player2
			// 
			this->player2->Location = System::Drawing::Point(192, 283);
			this->player2->Name = L"player2";
			this->player2->Size = System::Drawing::Size(37, 23);
			this->player2->TabIndex = 8;
			this->player2->Text = L"2";
			this->player2->UseVisualStyleBackColor = true;
			// 
			// player3
			// 
			this->player3->Location = System::Drawing::Point(235, 283);
			this->player3->Name = L"player3";
			this->player3->Size = System::Drawing::Size(37, 23);
			this->player3->TabIndex = 9;
			this->player3->Text = L"3";
			this->player3->UseVisualStyleBackColor = true;
			// 
			// player4
			// 
			this->player4->Location = System::Drawing::Point(278, 283);
			this->player4->Name = L"player4";
			this->player4->Size = System::Drawing::Size(37, 23);
			this->player4->TabIndex = 10;
			this->player4->Text = L"4";
			this->player4->UseVisualStyleBackColor = true;
			// 
			// player5
			// 
			this->player5->Location = System::Drawing::Point(321, 283);
			this->player5->Name = L"player5";
			this->player5->Size = System::Drawing::Size(37, 23);
			this->player5->TabIndex = 11;
			this->player5->Text = L"5";
			this->player5->UseVisualStyleBackColor = true;
			// 
			// player6
			// 
			this->player6->Location = System::Drawing::Point(364, 283);
			this->player6->Name = L"player6";
			this->player6->Size = System::Drawing::Size(37, 23);
			this->player6->TabIndex = 12;
			this->player6->Text = L"6";
			this->player6->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(735, 463);
			this->Controls->Add(this->player6);
			this->Controls->Add(this->player5);
			this->Controls->Add(this->player4);
			this->Controls->Add(this->player3);
			this->Controls->Add(this->player2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->titleScreen);
			this->Controls->Add(this->txtYourName);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->panel1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
