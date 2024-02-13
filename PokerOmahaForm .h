#pragma once

namespace PokerOmaha {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Resumen de PokerOmahaForm
    /// </summary>
    /// 
    /// 
    ref class PokerOmahaForm : public Form
    {
    public:
        PokerOmahaForm(int numberOfPlayers)
        {
            // Configuración del formulario principal

            this->Text = "Poker Omaha";
            this->Size = Drawing::Size(1250, 750);

            // Configuración del fondo del formulario
            this->BackgroundImage = Image::FromFile("pokertable.jpg");
            this->BackgroundImageLayout = ImageLayout::Stretch; // Ajusta la imagen al tamaño del formulario

            // Suscribirse al evento Resize del formulario
            this->Resize += gcnew EventHandler(this, &PokerOmahaForm::Form_Resize);

            // Configuración de los controles
            InitializeControls(numberOfPlayers);
            RenderPlayers(numberOfPlayers);

        }
    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~PokerOmahaForm()
        {
            if (components)
            {
                delete components;
            }
        }

    protected:

    private:
        System::ComponentModel::Container^ components;

        void InitializeControls(int numberOfPlayers)
        {
           
            Label^ lblPlayers = gcnew Label();
            lblPlayers->Text = "Cantidad de Jugadores: " + numberOfPlayers;
            lblPlayers->ForeColor = Color::White; 
            lblPlayers->Location = Drawing::Point(10, 10);
            this->Controls->Add(lblPlayers);


            /*PictureBox^ pokerTable = gcnew PictureBox();
            pokerTable->BackColor = Color::Green;
            pokerTable->Region = CreateRoundRectRgn(0, 0, 500, 300, 20);
            pokerTable->Size = Drawing::Size(500, 300);
            pokerTable->Location = Drawing::Point((this->Width - pokerTable->Width) / 2, (this->Height - pokerTable->Height) / 2);
            this->Controls->Add(pokerTable);*/
            pokerTable = gcnew PictureBox();
            pokerTable->BackColor = Color::Transparent;
            pokerTable->Image = Image::FromFile("pokertable.png"); 
            pokerTable->SizeMode = PictureBoxSizeMode::Zoom;
            pokerTable->Size = Drawing::Size(800, 600);
            pokerTable->Location = Drawing::Point((this->Width - pokerTable->Width) / 2, (this->Height - pokerTable->Height) / 2);
            this->Controls->Add(pokerTable);

           
            int numCards = 3;

            for (int i = 0; i < numCards; i++)
            {
                PictureBox^ pokerCard = gcnew PictureBox();
                pokerCard->Image = Image::FromFile("cards\\2D.png");
                pokerCard->BackColor = Color::ForestGreen;
                pokerCard->SizeMode = PictureBoxSizeMode::Zoom;
                pokerCard->Size = Drawing::Size(65, 85);
                int totalWidth = pokerCard->Width * numCards;
                int x = (pokerTable->Width - totalWidth) / 2 + i * pokerCard->Width;
                int y = (pokerTable->Height - pokerCard->Height) / 2;
                pokerCard->Location = Drawing::Point(pokerTable->Left + x, pokerTable->Top + y);
                this->Controls->Add(pokerCard);
                pokerCard->BringToFront();
            }


           
        }

        void RenderPlayers(int numberOfPlayers)
        {
            int radius = 200; // Radio para la disposición circular de jugadores
            double angleIncrement = Math::PI / (numberOfPlayers - 1); // Ángulo entre jugadores

            int playerMargin = 20; // Margen entre jugadores y la mesa

            // Configurar jugadores en la parte superior e inferior
            for (int i = 0; i < numberOfPlayers / 2; i++)
            {
                int playerXTop = pokerTable->Left + pokerTable->Width / 2 + static_cast<int>(radius * Math::Cos(angleIncrement * i));
                int playerYTop = pokerTable->Top + playerMargin; // Ajusta el margen desde la parte superior

                int playerXBottom = pokerTable->Left + pokerTable->Width / 2 + static_cast<int>(radius * Math::Cos(angleIncrement * i));
                int playerYBottom = pokerTable->Top + pokerTable->Height - playerMargin - 60; // Ajusta el margen desde la parte inferior

                // Jugadores en la parte superior
                Label^ playerLabelTop = gcnew Label();
                playerLabelTop->Text = "Jugador " + (i + 1);
                playerLabelTop->ForeColor = Color::Black;
                playerLabelTop->Location = Drawing::Point(playerXTop, playerYTop);
                this->Controls->Add(playerLabelTop);
                playerLabelTop->BringToFront();

                // Jugadores en la parte inferior
                Label^ playerLabelBottom = gcnew Label();
                playerLabelBottom->Text = "Jugador " + (i + 1 + numberOfPlayers / 2);
                playerLabelBottom->ForeColor = Color::Black;
                playerLabelBottom->Location = Drawing::Point(playerXBottom, playerYBottom);
                this->Controls->Add(playerLabelBottom);
                playerLabelBottom->BringToFront();
            }

            int playerXLeft = pokerTable->Left + playerMargin; // Ajusta el margen desde el lado izquierdo
            int playerYLeft = pokerTable->Top + pokerTable->Height / 2;
            Label^ playerLabelLeft = gcnew Label();
            playerLabelLeft->Text = "Jugador " + (numberOfPlayers - 1); // Último jugador en la parte izquierda
            playerLabelLeft->ForeColor = Color::Black;
            playerLabelLeft->Location = Drawing::Point(playerXLeft, playerYLeft);
            this->Controls->Add(playerLabelLeft);
            playerLabelLeft->BringToFront();

            int playerXRight = pokerTable->Left + pokerTable->Width - playerMargin - 80; // Ajusta el margen desde el lado derecho
            int playerYRight = pokerTable->Top + pokerTable->Height / 2;
            Label^ playerLabelRight = gcnew Label();
            playerLabelRight->Text = "Jugador " + numberOfPlayers; // Último jugador en la parte derecha
            playerLabelRight->ForeColor = Color::Black;
            playerLabelRight->Location = Drawing::Point(playerXRight, playerYRight);
            this->Controls->Add(playerLabelRight);
            playerLabelRight->BringToFront();
        }


        System::Drawing::Region^ CreateRoundRectRgn(int x, int y, int width, int height, int radius)
        {
            System::Drawing::Drawing2D::GraphicsPath^ path = gcnew System::Drawing::Drawing2D::GraphicsPath();
            path->AddLine(x + radius, y, x + width - radius, y);
            path->AddArc(x + width - radius, y, radius, radius, 270, 90);
            path->AddLine(x + width, y + radius, x + width, y + height - radius);
            path->AddArc(x + width - radius, y + height - radius, radius, radius, 0, 90);
            path->AddLine(x + width - radius, y + height, x + radius, y + height);
            path->AddArc(x, y + height - radius, radius, radius, 90, 90);
            path->AddLine(x, y + height - radius, x, y + radius);
            path->AddArc(x, y, radius, radius, 180, 90);
            path->CloseFigure();
            return gcnew System::Drawing::Region(path);
        }

        void Form_Resize(Object^ sender, EventArgs^ e)
        {
            // Ajustar el tamaño y la posición del PictureBox cuando se cambie el tamaño del formulario
            //pokerTable->Size = this->ClientSize;
            pokerTable->Location = Drawing::Point((this->Width - pokerTable->Width) / 2, (this->Height - pokerTable->Height) / 2);

           
        }

        PictureBox^ pokerTable;
    private: System::Void InitializeComponent() {
        this->SuspendLayout();
        // 
        // PokerOmahaForm
        // 
        this->ClientSize = System::Drawing::Size(581, 422);
        this->Name = L"PokerOmahaForm";
        this->ResumeLayout(false);

    }
    };


#pragma endregion
	};

