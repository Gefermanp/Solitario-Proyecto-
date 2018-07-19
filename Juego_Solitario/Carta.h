#ifndef _CARTA_H
#define _CARTA_h
#include <iostream>
#include <string>

using namespace std;

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
	bool cartaDestapada(); //falta Completar e incluir la clase que sera de uso.
	void muestraCarta();  //falta
private:
	int valor;
	int pinta;
	string nombre;
};
#endif //CARTA