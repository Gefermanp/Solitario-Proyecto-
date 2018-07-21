#include "Mazo.h"

mazo::mazo()
{
	int aux;
	for (int i = 0; i < 40; i++)
	{
		contador = i;
		if (i<10)
		{
			carta[i].setNombre("ORO");
			carta[i].setPinta(0);
			if (i == 0)
			{
				carta[i].setValor(1);
			}
			else if (i >= 7)
			{
				aux = i + 3;
				carta[i].setValor(aux);
			}
			else
			{
				aux = i + 1;
				carta[i].setValor(aux);
			}

		}
		else if (i >= 10 && i<20)
		{
			carta[i].setNombre("COPA");
			carta[i].setPinta(1);
			if (i == 10)
			{
				carta[i].setValor(1);
			}
			else if (carta[i - 1].getvalor() >= 7)
			{
				switch (carta[i - 1].getvalor())
				{
				case 7:
					carta[i].setValor(10);
					break;
				case 10:
					carta[i].setValor(11);
					break;
				case 11:
					carta[i].setValor(12);
					break;
				}
			}
			else if (carta[i - 1].getvalor() >= 1 && carta[i - 1].getvalor() <7)
			{
				aux = carta[i-1].getvalor() + 1;
				carta[i].setValor(aux);
			}
		}
		else if (i >= 20 && i<30)
		{
			carta[i].setNombre("BASTO");
			carta[i].setPinta(2);
			if (i == 20)
			{
				carta[i].setValor(1);
			}
			else if (carta[i - 1].getvalor() >= 7)
			{
				switch (carta[i - 1].getvalor())
				{
				case 7:
					carta[i].setValor(10);
					break;
				case 10:
					carta[i].setValor(11);
					break;
				case 11:
					carta[i].setValor(12);
					break;
				}
			}
			else if (carta[i - 1].getvalor() >= 1 && carta[i - 1].getvalor() <7)
			{
				aux = carta[i - 1].getvalor() + 1;
				carta[i].setValor(aux);
			}
		}
		else if (i >= 30 && i<40)
		{
			carta[i].setNombre("ESPADA");
			carta[i].setPinta(3);
			if (i == 30)
			{
				carta[i].setValor(1);
			}
			else if (carta[i - 1].getvalor() >= 7)
			{
				switch (carta[i - 1].getvalor())
				{
				case 7:
					carta[i].setValor(10);
					break;
				case 10:
					carta[i].setValor(11);
					break;
				case 11:
					carta[i].setValor(12);
					break;
				}
			}
			else if (carta[i - 1].getvalor() >= 1 && carta[i - 1].getvalor() <7)
			{
				aux = carta[i - 1].getvalor() + 1;
				carta[i].setValor(aux);
			}
		}
	}
	
}


Carta mazo::tomarCarta()
{
	if (contador != -1)
	{
		contador--;
		return carta[contador + 1];
	}
}

void mazo::barajar()
{
	int num, c;
	Carta aux;
	srand(time(NULL));
	for (c = 0; c < 40; c++)
	{
		aux = carta[c];
		num = 1 + rand() % (40 - 1);
		carta[c] = carta[num];
		carta[num] = aux;
	}
}

int mazo::cartasEnMazo()
{
	return contador;
}