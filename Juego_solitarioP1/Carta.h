#pragma once
#include <iostream>
#include <string>


using namespace std;

class Cartas
{
public:
	Cartas();
	Cartas(int v, int p, string name);
	void setValor(int _valor);
	void setPinta(int _pinta);
	void setNombre(string _nombre);
	int getvalor();
	int getPinta();
	string getNombre();
	//bool cartaDestapada(); //falta Completar e incluir la clase que sera de uso.
	//void muestraCarta();  //falta
private:
	int valor;
	int pinta;
	string nombre;
};