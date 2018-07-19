#ifndef _MAZO_H
#define _MAZO_H
#include "Carta.h"
#include "Pila.h"
#include <stdlib.h>
#include <time.h>

class mazo
{
public:
	mazo();
	Carta repartirCarta();
	void barajar();

private:
	Carta carta[40];
	int contador;
};

#endif // !_MAZO_H
