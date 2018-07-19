#include "tablero.h"



tablero::tablero()
{
}

/*void tablero::dibujartablero()
{
	utilitario tableroo;
	for (int i = 1; i <= 120; i++) {
		tableroo.gotoxy(i, 0); printf("%c", 205);
		tableroo.gotoxy(i, 41); printf("%c", 205);
	}

	for (int i = 1; i <= 40; i++) {
		tableroo.gotoxy(1, i); printf("%c", 186);
		tableroo.gotoxy(121, i); printf("%c", 186);
	}
	tableroo.gotoxy(1, 0); printf("%c", 201);
	tableroo.gotoxy(121, 0); printf("%c", 187);
	tableroo.gotoxy(1, 41); printf("%c", 200);
	tableroo.gotoxy(121, 41); printf("%c", 188);

}*/

void tablero::colocarCartas()
{
	{
		int x = 3;
		int y = 3;

		for (int i = 0; i<36; i++)
		{
			posicion[i] = _mazo.tomarCarta();
			posicion[i].cartaDestapada(x, y);
			x = x + 14;

			if (i == 4) {
				x = 2;
				y = y + 10;
			}


		}

	}
}

