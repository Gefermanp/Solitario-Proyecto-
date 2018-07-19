#include "Pila.h"

pila::pila()
{
	tope = -1;
}

void pila::push(Cartas cart)
{
	if (!estaLLena())
	{
		cartass[tope + 1]=cart;
		tope++;
	}
}
Cartas pila::pop()
{
	if (!estaVacia())
	{
		tope--;
		return cartass[tope + 1];
	}
}

bool pila::estaVacia()
{
	return (tope == -1);
}
bool pila::estaLLena()
{
	return (tope = MAX-1);
}
int pila::cuantos()
{
	return tope + 1;
}