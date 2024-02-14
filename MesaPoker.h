#pragma once
#include "Card.h"
#include <io.h>
#include <string>
#include <iostream>
#include <filesystem>
using namespace PokerOmahaCard;

namespace PokerOmaha {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::IO;

	/// <summary>
	/// Resumen de MesaPoker
	/// </summary>
	/// 

	public ref class MesaPoker : public System::Windows::Forms::Form
	{


	public:
		MesaPoker(int numberOfPlayers)
		{
			players = numberOfPlayers;
			InitializeComponent();
			InicializarMazoEnMesa();
			RenderizarJugadores();

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MesaPoker()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ jugador6;

	private: System::Windows::Forms::Panel^ jugador1;
	private: System::Windows::Forms::Panel^ jugador5;


	private: System::Windows::Forms::Panel^ jugador3;
	private: System::Windows::Forms::Panel^ jugador4;


	private: System::Windows::Forms::Panel^ jugador2;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: static int players = 0;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>

		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Panel^ p1_carta2;
	private: System::Windows::Forms::Panel^ p1_carta3;


	private: System::Windows::Forms::Panel^ p1_carta1;
	private: System::Windows::Forms::Panel^ p1_carta4;


	private: System::Windows::Forms::Button^ btnVerCartas;
		   List<Card^>^ cartasEnMesa = gcnew List<Card^>();
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
		   List<String^>^ todasLasCartas = gcnew List<String^>();



#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MesaPoker::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->jugador6 = (gcnew System::Windows::Forms::Panel());
			this->jugador1 = (gcnew System::Windows::Forms::Panel());
			this->jugador5 = (gcnew System::Windows::Forms::Panel());
			this->jugador3 = (gcnew System::Windows::Forms::Panel());
			this->jugador4 = (gcnew System::Windows::Forms::Panel());
			this->jugador2 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->p1_carta2 = (gcnew System::Windows::Forms::Panel());
			this->p1_carta3 = (gcnew System::Windows::Forms::Panel());
			this->p1_carta1 = (gcnew System::Windows::Forms::Panel());
			this->p1_carta4 = (gcnew System::Windows::Forms::Panel());
			this->btnVerCartas = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->label2);
			this->panel1->Location = System::Drawing::Point(249, 209);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(727, 335);
			this->panel1->TabIndex = 0;
			// 
			// jugador6
			// 
			this->jugador6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->jugador6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"jugador6.BackgroundImage")));
			this->jugador6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->jugador6->Location = System::Drawing::Point(103, 209);
			this->jugador6->Name = L"jugador6";
			this->jugador6->Size = System::Drawing::Size(116, 116);
			this->jugador6->TabIndex = 1;
			// 
			// jugador1
			// 
			this->jugador1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->jugador1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"jugador1.BackgroundImage")));
			this->jugador1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->jugador1->Location = System::Drawing::Point(554, 550);
			this->jugador1->Name = L"jugador1";
			this->jugador1->Size = System::Drawing::Size(116, 116);
			this->jugador1->TabIndex = 2;
			// 
			// jugador5
			// 
			this->jugador5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->jugador5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"jugador5.BackgroundImage")));
			this->jugador5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->jugador5->Location = System::Drawing::Point(103, 391);
			this->jugador5->Name = L"jugador5";
			this->jugador5->Size = System::Drawing::Size(116, 116);
			this->jugador5->TabIndex = 2;
			// 
			// jugador3
			// 
			this->jugador3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->jugador3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"jugador3.BackgroundImage")));
			this->jugador3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->jugador3->Location = System::Drawing::Point(1001, 209);
			this->jugador3->Name = L"jugador3";
			this->jugador3->Size = System::Drawing::Size(116, 116);
			this->jugador3->TabIndex = 3;
			// 
			// jugador4
			// 
			this->jugador4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->jugador4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"jugador4.BackgroundImage")));
			this->jugador4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->jugador4->Location = System::Drawing::Point(1001, 391);
			this->jugador4->Name = L"jugador4";
			this->jugador4->Size = System::Drawing::Size(116, 116);
			this->jugador4->TabIndex = 4;
			// 
			// jugador2
			// 
			this->jugador2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->jugador2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"jugador2.BackgroundImage")));
			this->jugador2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->jugador2->Location = System::Drawing::Point(540, 87);
			this->jugador2->Name = L"jugador2";
			this->jugador2->Size = System::Drawing::Size(116, 116);
			this->jugador2->TabIndex = 4;
			this->jugador2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MesaPoker::panel7_Paint);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(848, 585);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(147, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Raise";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MesaPoker::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1018, 585);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Check";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// p1_carta2
			// 
			this->p1_carta2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->p1_carta2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1_carta2.BackgroundImage")));
			this->p1_carta2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->p1_carta2->Location = System::Drawing::Point(541, 672);
			this->p1_carta2->Name = L"p1_carta2";
			this->p1_carta2->Size = System::Drawing::Size(67, 76);
			this->p1_carta2->TabIndex = 7;
			// 
			// p1_carta3
			// 
			this->p1_carta3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->p1_carta3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1_carta3.BackgroundImage")));
			this->p1_carta3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->p1_carta3->Location = System::Drawing::Point(614, 672);
			this->p1_carta3->Name = L"p1_carta3";
			this->p1_carta3->Size = System::Drawing::Size(67, 76);
			this->p1_carta3->TabIndex = 8;
			// 
			// p1_carta1
			// 
			this->p1_carta1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->p1_carta1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1_carta1.BackgroundImage")));
			this->p1_carta1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->p1_carta1->Location = System::Drawing::Point(472, 672);
			this->p1_carta1->Name = L"p1_carta1";
			this->p1_carta1->Size = System::Drawing::Size(67, 76);
			this->p1_carta1->TabIndex = 9;
			// 
			// p1_carta4
			// 
			this->p1_carta4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->p1_carta4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1_carta4.BackgroundImage")));
			this->p1_carta4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->p1_carta4->Location = System::Drawing::Point(687, 672);
			this->p1_carta4->Name = L"p1_carta4";
			this->p1_carta4->Size = System::Drawing::Size(67, 76);
			this->p1_carta4->TabIndex = 9;
			// 
			// btnVerCartas
			// 
			this->btnVerCartas->Location = System::Drawing::Point(562, 761);
			this->btnVerCartas->Name = L"btnVerCartas";
			this->btnVerCartas->Size = System::Drawing::Size(108, 23);
			this->btnVerCartas->TabIndex = 10;
			this->btnVerCartas->Text = L"Ocultar Cartas";
			this->btnVerCartas->UseVisualStyleBackColor = true;
			this->btnVerCartas->Click += gcnew System::EventHandler(this, &MesaPoker::btnVerCartas_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(848, 627);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(147, 23);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Fold";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(1018, 627);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(132, 23);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Pot";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(848, 677);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(147, 23);
			this->button5->TabIndex = 13;
			this->button5->Text = L"Min";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(1018, 677);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(132, 23);
			this->button6->TabIndex = 14;
			this->button6->Text = L"Max";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(848, 742);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(302, 20);
			this->textBox1->TabIndex = 15;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(845, 715);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(23, 13);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Bet";
			this->label1->Click += gcnew System::EventHandler(this, &MesaPoker::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(336, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(32, 13);
			this->label2->TabIndex = 17;
			this->label2->Text = L"POT:";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Location = System::Drawing::Point(674, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(67, 76);
			this->panel2->TabIndex = 12;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->Location = System::Drawing::Point(459, 12);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(67, 76);
			this->panel3->TabIndex = 13;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel4->Location = System::Drawing::Point(601, 12);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(67, 76);
			this->panel4->TabIndex = 11;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
			this->panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel5->Location = System::Drawing::Point(528, 12);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(67, 76);
			this->panel5->TabIndex = 10;
			// 
			// MesaPoker
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1215, 841);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->btnVerCartas);
			this->Controls->Add(this->p1_carta4);
			this->Controls->Add(this->p1_carta1);
			this->Controls->Add(this->p1_carta3);
			this->Controls->Add(this->p1_carta2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->jugador2);
			this->Controls->Add(this->jugador4);
			this->Controls->Add(this->jugador3);
			this->Controls->Add(this->jugador5);
			this->Controls->Add(this->jugador1);
			this->Controls->Add(this->jugador6);
			this->Controls->Add(this->panel1);
			this->Name = L"MesaPoker";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MesaPoker";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


		void RenderizarJugadores() {
			switch (players) {
			case 2:
				InicializarMazoJugador1();
				jugador3->Visible = false;
				jugador4->Visible = false;
				jugador5->Visible = false;
				jugador6->Visible = false;
				break;
			case 3:
				InicializarMazoJugador1();
				jugador4->Visible = false;
				jugador5->Visible = false;
				jugador6->Visible = false;
				break;
			case 4:
				InicializarMazoJugador1();
				jugador5->Visible = false;
				jugador6->Visible = false;
				break;
			case 5:
				InicializarMazoJugador1();
				jugador6->Visible = false;
				break;
			default:
				break;
			}
		}

		void InicializarMazoEnMesa()
		{
			int numCartas = 3;

			todasLasCartas = gcnew List<String^>();

			String^ directorio = "cards";
			String^ rutaCompleta = Path::GetFullPath(directorio);

			if (Directory::Exists(rutaCompleta))
			{
				array<String^>^ archivos = Directory::GetFiles(rutaCompleta);
				todasLasCartas->AddRange(archivos);
			}
			else
			{
				Console::WriteLine("El directorio no existe.");
			}

			// Seleccionar aleatoriamente 3 cartas para la mesa
			Random^ rnd = gcnew Random();

			for (int i = 0; i < numCartas; i++)
			{
				// Seleccionar una carta aleatoria
				int index = rnd->Next(0, todasLasCartas->Count);
				String^ rutaCarta = todasLasCartas[index];

				Card^ nuevaCarta = gcnew Card();
				nuevaCarta->Ruta = rutaCarta;
				cartasEnMesa->Add(nuevaCarta);

				// Quitar la carta de la lista para evitar repeticiones
				todasLasCartas->RemoveAt(index);

				PictureBox^ pokerCard = gcnew PictureBox();
				pokerCard->Image = Image::FromFile(rutaCarta);
				pokerCard->BackColor = Color::Transparent;
				pokerCard->SizeMode = PictureBoxSizeMode::Zoom;
				pokerCard->Size = Drawing::Size(65, 85);
				int totalWidth = pokerCard->Width * numCartas;
				int x = (panel1->Width - totalWidth) / 2 + i * pokerCard->Width;
				int y = (panel1->Height - pokerCard->Height) / 2;
				pokerCard->Location = Drawing::Point(panel1->Left + x, panel1->Top + y);
				this->Controls->Add(pokerCard);
				pokerCard->BringToFront();
			}

			

		}

		void InicializarMazoJugador1() {

			Random^ rnd = gcnew Random();

			List<Card^>^ cartasJugador = gcnew List<Card^>();

			int randomIndex = rnd->Next(0, todasLasCartas->Count);
			String^ rutaCarta1 = todasLasCartas[randomIndex];
			Card^ nuevaCarta1 = gcnew Card();
			nuevaCarta1->Ruta = rutaCarta1;
			cartasJugador->Add(nuevaCarta1);
			todasLasCartas->RemoveAt(randomIndex);

			randomIndex = rnd->Next(0, todasLasCartas->Count);
			String^ rutaCarta2 = todasLasCartas[randomIndex];
			Card^ nuevaCarta2 = gcnew Card();
			nuevaCarta2->Ruta = rutaCarta2;
			cartasJugador->Add(nuevaCarta2);
			todasLasCartas->RemoveAt(randomIndex);

			randomIndex = rnd->Next(0, todasLasCartas->Count);
			String^ rutaCarta3 = todasLasCartas[randomIndex];
			Card^ nuevaCarta3 = gcnew Card();
			nuevaCarta3->Ruta = rutaCarta3;
			cartasJugador->Add(nuevaCarta3);
			todasLasCartas->RemoveAt(randomIndex);

			randomIndex = rnd->Next(0, todasLasCartas->Count);
			String^ rutaCarta4 = todasLasCartas[randomIndex];
			Card^ nuevaCarta4 = gcnew Card();
			nuevaCarta4->Ruta = rutaCarta4;
			cartasJugador->Add(nuevaCarta4);
			todasLasCartas->RemoveAt(randomIndex);

			// Asignar las cartas a los paneles del jugador

			System::Drawing::Bitmap^ titleImage = gcnew System::Drawing::Bitmap(rutaCarta1, true);
			this->p1_carta1->BackgroundImage = titleImage;
			this->p1_carta1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;

			System::Drawing::Bitmap^ titleImage2 = gcnew System::Drawing::Bitmap(rutaCarta2, true);
			this->p1_carta2->BackgroundImage = titleImage2;
			this->p1_carta2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;

			System::Drawing::Bitmap^ titleImage3 = gcnew System::Drawing::Bitmap(rutaCarta3, true);
			this->p1_carta3->BackgroundImage = titleImage3;
			this->p1_carta3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;

			System::Drawing::Bitmap^ titleImage4 = gcnew System::Drawing::Bitmap(rutaCarta4, true);
			this->p1_carta4->BackgroundImage = titleImage4;
			this->p1_carta4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		}
#pragma endregion
private: System::Void panel7_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnVerCartas_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
