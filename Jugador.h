#pragma once
#include "Card.h"
using namespace PokerOmahaCard;
using namespace System::Collections::Generic;


namespace Jugador{
ref class Jugador
{
public:
	List<Card^>^ mazo;
	String^ nombre;
	int fichas;

	Jugador(String^ n, int f) : nombre(n), fichas(f) {
		mazo = gcnew List<Card^>();
	}

	void RecibirCarta(Card^ carta) {
		mazo->Add(carta);
	}

};

}
