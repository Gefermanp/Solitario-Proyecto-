#include "mazo.h"
#include "pila.h"

class tablero
{
public:
	tablero();
	void dibujarTablero();
	void colocarCartas();
	void barajar();
	int cuantosComodines();
	void pedirComodin();
	void dibujaComodin();
private:
	mazo _mazo;
	Carta comodin[4];
	Carta posicion[36];
	int i = 3;
};

