#pragma once
#include "Carta.h"
#define MAX 4

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
	Carta cartass[MAX];
};
