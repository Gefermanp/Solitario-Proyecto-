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

bool Carta::cartaDestapada() //falta completar
{

}