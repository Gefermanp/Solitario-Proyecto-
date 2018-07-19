#include "Carta.h"
#include <stdlib.h>
#include <time.h>

class mazo
{
public:
	mazo();
	Cartas repartirCarta();
	void barajar();

private:
	Cartas carta[40];
	int contador;
};

