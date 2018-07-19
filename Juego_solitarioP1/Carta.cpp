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
void Carta::cartaDestapada(int x, int y)
{
	/*cout<<" ______________ " <<endl
	<<	"|              |" <<endl
	<<	"|              |" <<endl
	<<	"|              |" <<endl
	<<	"|              |" <<endl
	<<	"|              |" <<endl
	<<	"|              |" <<endl
	<<	"|              |" <<endl
	<<	"|              |" <<endl
	<<	"|              |" <<endl
	<<	"|              |" <<endl
	<< "|______________|";*/

	utilitario naipe;

	for (int i = x; i <= x + 10; i++) {
		naipe.gotoxy(i, y); printf("%c", 205);
		naipe.gotoxy(i, y + 10); printf("%c", 205);
	}

	for (int i = y; i <= y + 10; i++) {
		naipe.gotoxy(x, i); printf("%c", 186);
		naipe.gotoxy(x + 10, i); printf("%c", 186);
	}
	naipe.gotoxy(x, y); printf("%c", 201);
	naipe.gotoxy(x + 10, y); printf("%c", 187);
	naipe.gotoxy(x, y + 10); printf("%c", 200);
	naipe.gotoxy(x + 10, y + 10); printf("%c", 188);

	naipe.gotoxy(x + 1, y + 1); cout << valor;

	if (pinta == 0) { naipe.gotoxy(x + 3, y + 3); cout << "ORO"; }
	if (pinta == 1) { naipe.gotoxy(x + 3, y + 3); cout << "COPA"; }
	if (pinta == 2) { naipe.gotoxy(x + 3, y + 3); cout << "BASTO"; }
	if (pinta == 3) { naipe.gotoxy(x + 3, y + 3); cout << "ESPADA"; }
}
