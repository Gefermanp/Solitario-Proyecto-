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
	bool esPar();
	bool esImpar();
	bool tapar();
	bool Destapar();
private:
	int valor;
	int pinta;
	string nombre;
};
#endif //CARTA