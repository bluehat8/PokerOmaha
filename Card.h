using namespace System;
using namespace System::Drawing;


namespace PokerOmahaCard {

    // Enum para representar los palos de la carta
    public enum class Suit
    {
        Heart,
        Spade,
        Club,
        Diamond
    };

    // Clase para representar una carta
    public ref class Card
    {
    public:
        Card() {}

        property String^ Ruta;

        property bool Ocupada;

        property Image^ Imagen;

        // M�todo para obtener o establecer el estado de retenci�n de la carta
        property bool Retenida
        {
            bool get() { return _retenida; }
            void set(bool value) { _retenida = value; }
        }

    private:
        bool _retenida; // Estado de retenci�n de la carta
    };
}