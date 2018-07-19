#include "mazo.h"
#include "pila.h"
#define MAXX 100
class tablero
{
public:
	tablero();
	//void dibujartablero();
	void colocarCartas();


private:
	mazo _mazo;
	pila comodin;
	Carta posicion[36];
};

