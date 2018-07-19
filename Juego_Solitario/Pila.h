#ifndef _PILA_H
#define _PILA_H
#include "Carta.h"

class pila
{
public:
	pila();
	void push(Carta cart);
	Carta pop();
	bool estaVacia();
	bool estaLLena();
	int cuantos();

private:
	int tope;
	Carta cartas[40];
};

#endif //_PILA_H