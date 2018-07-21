#include "Carta.h"

Carta::Carta()
{

}
Carta::Carta(int v, int p, string name)
{
	valor = v;
	pinta = p;
	nombre = name;
}

void Carta::setValor(int _valor)
{
	valor = _valor;
}
void Carta::setPinta(int _pinta)
{
	pinta = _pinta;
}
void Carta::setNombre(string _nombre)
{
	nombre = _nombre;
}

int Carta::getvalor()
{
	return valor;
}
int Carta::getPinta()
{
	return pinta;
}
string Carta::getNombre()
{
	return nombre;
}
void Carta::cartaTapada(int x, int y)
{
	utilitario naipe;

	for (int i = x; i <= x + 10; i++)
	{
		naipe.gotoxy(i, y); printf("%c", 205);
		naipe.gotoxy(i, y + 8); printf("%c", 205);
	}

	for (int i = y; i <= y + 8; i++)
	{
		naipe.gotoxy(x, i); printf("%c", 186);
		naipe.gotoxy(x + 10, i); printf("%c", 186);
	}
	naipe.gotoxy(x, y); printf("%c", 201);
	naipe.gotoxy(x + 10, y); printf("%c", 187);
	naipe.gotoxy(x, y + 8); printf("%c", 200);
	naipe.gotoxy(x + 10, y + 8); printf("%c", 188);
	
	naipe.gotoxy(x + 5, y + 4); cout << "X";
	naipe.gotoxy(x + 1, y + 1); cout << "X";
	naipe.gotoxy(x + 9, y + 7); cout << "X";

}
void Carta::cartaDestapada(int x, int y)
{
	utilitario naipe;

	for (int i = x; i <= x + 10; i++) 
	{
		naipe.gotoxy(i, y); printf("%c", 205);
		naipe.gotoxy(i, y + 8); printf("%c", 205);
	}

	for (int i = y; i <= y + 8; i++) 
	{
		naipe.gotoxy(x, i); printf("%c", 186);
		naipe.gotoxy(x + 10, i); printf("%c", 186);
	}
	naipe.gotoxy(x, y); printf("%c", 201);
	naipe.gotoxy(x + 10, y); printf("%c", 187);
	naipe.gotoxy(x, y + 8); printf("%c", 200);
	naipe.gotoxy(x + 10, y + 8); printf("%c", 188);
	naipe.gotoxy(x + 1, y + 1); cout << valor;
	naipe.gotoxy(x + 3, y + 3); cout << nombre; 

	
}

