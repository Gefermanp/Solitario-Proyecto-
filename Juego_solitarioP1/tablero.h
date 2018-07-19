#include "mazo.h"
#include "pila.h"
#define MAXX 100
class tablero: 
	public mazo
{
public:
	tablero();

private:
	mazo _mazo;
	pila comodin;
	Cartas posicion;
};

