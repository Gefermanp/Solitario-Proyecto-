#include "Carta.h"
#define MAX 4

class pila
{
public:
	pila();
	void push(Cartas cart);
	Cartas pop();
	bool estaVacia();
	bool estaLLena();
	int cuantos();

private:
	int tope;
	Cartas cartass[MAX];
};
