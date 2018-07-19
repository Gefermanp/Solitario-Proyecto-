#include "Pila.h"

pila::pila()
{
	tope = -1;
}

void pila::push(Carta cart)
{
	if (!estaLLena())
	{
		cartas[tope + 1] = cart;
		tope++;
	}
}
Carta pila::pop()
{
	if (!estaVacia())
	{
		tope--;
		return cartas[tope + 1];
	}
}

bool pila::estaVacia()
{
	return (tope == -1);
}
bool pila::estaLLena()
{
	return (tope = 3);
}
int pila::cuantos()
{
	return tope + 1;
}