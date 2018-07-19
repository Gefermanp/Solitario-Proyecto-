#include "Mazo.h"

mazo::mazo()
{

}
mazo::mazo(Carta cartt)
{

}

Carta mazo::getCarta()
{

}

void mazo::barajar()
{
	int num;
	srand(time(NULL));
	
	num = 1 + rand() % (41 - 1); /*dentro "for"http://informatica.uv.es/iiguia/FP/BarajarCartas.pdf */				


}
void mazo::setCarta(Carta cartt)
{

}