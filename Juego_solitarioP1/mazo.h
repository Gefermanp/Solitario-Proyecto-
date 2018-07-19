#pragma once
#include "Carta.h"


class mazo
{
public:
	mazo();
	Carta tomarCarta();
	void barajar();
	int cartasEnMazo();

private:
	Carta carta[40];
	int contador;
};

