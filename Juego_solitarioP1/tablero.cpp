#include "tablero.h"



tablero::tablero()
{
}

void tablero::dibujarTablero()
{
	utilitario tableroo;
	for (int i = 1; i <= 142; i++) //Horizontal
	{
		tableroo.gotoxy(i, 0); printf("%c", 205);
		tableroo.gotoxy(i, 53); printf("%c", 205);
	}
	for (int j = 1; j <= 10; j++) 
	{
		switch (j)
		{
		case 1:
			tableroo.gotoxy( 10 ,2);
			cout << j;
			break;
		case 2:
			tableroo.gotoxy(24, 2);
			cout <<j;
			break;
		case 3:
			tableroo.gotoxy(38, 2);
			cout <<j;
			break;
		case 4:
			tableroo.gotoxy(51, 2);
			cout << j;
			break;
		case 5:
			tableroo.gotoxy(66, 2);
			cout << j;
			break;
		case 6:
			tableroo.gotoxy(80, 2);
			cout << j;
			break;
		case 7:
			tableroo.gotoxy(94, 2);
			cout << j;
			break;
		case 8:
			tableroo.gotoxy(107, 2);
			cout << j+2;
			break;
		case 9:
			tableroo.gotoxy(121, 2);
			cout <<j+2;
			break; 
		case 10:
			tableroo.gotoxy(134, 2);
			cout << j+2;
			break;

		}		
	}

	for (int i = 1; i <= 52; i++) //Vertical
	{
		tableroo.gotoxy(1, i); printf("%c", 186);
		tableroo.gotoxy(143, i); printf("%c", 186);
	}
	for (int i = 1; i <= 5; i++)
	{
		switch (i)
		{
		case 1:
			tableroo.gotoxy(2, i+5);
			cout << " O ";
			tableroo.gotoxy(2, i + 6);
			cout << " R";
			tableroo.gotoxy(2, i + 7);
			cout << " O ";
			break;

		case 2:
			tableroo.gotoxy(2, i + 13);
			cout << " C ";
			tableroo.gotoxy(2, i + 14);
			cout << " O ";
			tableroo.gotoxy(2, i + 15);
			cout << " P ";
			tableroo.gotoxy(2, i + 16);
			cout << " A ";
			break;

		case 3:
			tableroo.gotoxy(2, i + 22);
			cout << " B ";
			tableroo.gotoxy(2, i + 23);
			cout << " A ";
			tableroo.gotoxy(2, i + 24);
			cout << " S ";
			tableroo.gotoxy(2, i + 25);
			cout << " T ";
			tableroo.gotoxy(2, i + 26);
			cout << " O ";
			break;

		case 4:
			tableroo.gotoxy(2, i + 30);
			cout << " E ";
			tableroo.gotoxy(2, i + 31);
			cout << " S";
			tableroo.gotoxy(2, i + 32);
			cout << " P ";
			tableroo.gotoxy(2, i + 33);
			cout << " A ";
			tableroo.gotoxy(2, i + 34);
			cout << " D ";
			tableroo.gotoxy(2, i + 35);
			cout << " A ";
			break;
		case 5:
			tableroo.gotoxy(2, i + 39);
			cout << " C ";
			tableroo.gotoxy(2, i + 40);
			cout << " O ";
			tableroo.gotoxy(2, i + 41);
			cout << " M ";
			tableroo.gotoxy(2, i + 42);
			cout << " O ";
			tableroo.gotoxy(2, i + 43);
			cout << " D ";
			tableroo.gotoxy(2, i + 44);
			cout << " I ";
			tableroo.gotoxy(2, i + 45);
			cout << " N ";
			break;
		}
		
	}
	tableroo.gotoxy(1, 0); printf("%c", 201);
	tableroo.gotoxy(143, 0); printf("%c", 187);
	tableroo.gotoxy(1, 53); printf("%c", 200);
	tableroo.gotoxy(143, 53); printf("%c", 188);




}

void tablero::colocarCartas()
{
	{
		int x = 5;
		int y = 3;

		for (int i = 0; i<36; i++)
		{
			posicion[i] = _mazo.tomarCarta();
			posicion[i].cartaTapada(x, y);// aqui cambiar por " posicion[i].cartaDestapada(x,y) ".
			x = x + 14;
			switch (i)
			{
			case 8:
				x = 5;
				y = y + 10;
				break;
			case 17:
				x = 5;
				y = y + 10;
				break;
			case 26:
				x = 5;
				y = y + 10;
				break;
			case 35:
				x = 5;
				y = y + 15;
				
			}	
		}
		for (int i = 0; i < 4; i++)
		{
				comodin[i] = _mazo.tomarCarta();
			
		}

	}
	
}

void tablero::barajar()
{
	_mazo.barajar();
}

int tablero::cuantosComodines()
{
	return i+1;
}

void tablero::pedirComodin()
{
	if (i != -1)
	{
		i--;
		comodin[i + 1].cartaDestapada(19, 43);
	}
}

void tablero::dibujaComodin()
{
	Carta comodinn;
	comodinn.cartaTapada(5, 43);
}



