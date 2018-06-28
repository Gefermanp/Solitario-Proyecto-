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

bool Carta::esPar()
{
	if (valor % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool Carta::esImpar()
{
	if (valor % 2 != 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool Carta::tapar()
{
	
}