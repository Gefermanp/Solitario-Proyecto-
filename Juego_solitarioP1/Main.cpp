#include "mazo.h"
#include "pila.h"
#include "utilitario.h"
#include "tablero.h"
#include <istream>
#define ARRIBA 72
#define ABAJO 80
#define	IZQUIERDA 75 
#define DERECHA 77
#define ESC 27
#define ENTER 13


int main()
{
	system("color 09");
	utilitario ventana, cursor;
	ventana.ocultarcursor();
	ventana.AjustarVentana(160, 60);

	char tecla;
	int x = 10, y = 10;
	bool game_over = false;

	tablero tablero1;
	tablero1.barajar();
	tablero1.dibujarTablero();
	tablero1.colocarCartas();
	tablero1.dibujaComodin();

	cursor.gotoxy(x, y); printf("^");
	while (!game_over)
	{
		tecla = cin.get();
		
		if (tecla == 0)
		{
			tecla = getch(); //https://docs.microsoft.com/es-es/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4996?f1url=https%3A%2F%2Fmsdn.microsoft.com%2Fquery%2Fdev15.query%3FappId%3DDev15IDEF1%26l%3DES-ES%26k%3Dk(C4996)%26rd%3Dtrue
			cout << tecla;
			if (tecla == ABAJO)
			{
				y-= 1;
				cursor.gotoxy(x , y);
				cursor.gotoxy(x, y); printf("^");
			}
			if (tecla == ARRIBA)cursor.gotoxy(x + 25, y);
			{
				y += 1;
				cursor.gotoxy(x, y);
				cursor.gotoxy(x, y); printf("^");
			}
			if (tecla == IZQUIERDA)
			{
				x -= 1;
				cursor.gotoxy(x, y );
				cursor.gotoxy(x, y); printf("^");
			}
			if (tecla == DERECHA)
			{
				x += 1;
				cursor.gotoxy(x, y);
				cursor.gotoxy(x, y); printf("^");
			}
			if (tecla == ESC)
				game_over = true;
		}
	}
	cin.get();
	return 0;
}