#pragma once
#include "utilitario.h"
#include <string>

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
	void cartaTapada(int x, int y);
	void cartaDestapada(int x, int y); 
	
private:
	int valor;
	int pinta;
	string nombre;
};