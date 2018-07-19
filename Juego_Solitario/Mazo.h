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
	mazo(Carta cartt);
	Carta getCarta();
	void barajar();
	void setCarta(Carta cartt);
private:
	Carta carta[40];
};

#endif // !_MAZO_H
