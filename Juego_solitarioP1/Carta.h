#pragma once
#include "utilitario.h"


class Carta
{
public:
	Carta();
	Carta(int v, int p, string name);
	void setValor(int _valor);
	void setPinta(int _pinta);
	void setNombre(string _nombre);
	int getvalor();
	int getPinta();
	string getNombre();
	void cartaDestapada(int x, int y); //falta Completar e incluir la clase que sera de uso.
private:
	int valor;
	int pinta;
	string nombre;
};