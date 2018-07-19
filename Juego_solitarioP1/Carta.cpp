#include "Carta.h"

Cartas::Cartas()
{

}
Cartas::Cartas(int v, int p, string name)
{
	valor = v;
	pinta = p;
	nombre = name;
}

void Cartas::setValor(int _valor)
{
	valor = _valor;
}
void Cartas::setPinta(int _pinta)
{
	pinta = _pinta;
}
void Cartas::setNombre(string _nombre)
{
	nombre = _nombre;
}

int Cartas::getvalor()
{
	return valor;
}
int Cartas::getPinta()
{
	return pinta;
}
string Cartas::getNombre()
{
	return nombre;
}
/*void Carta::muestraCarta() //dibujar
{

}
bool Carta::cartaDestapada() //falta completar
{

}*/