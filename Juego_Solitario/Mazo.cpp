#include "Mazo.h"

mazo::mazo()
{
	int aux;
	for (int i = 0; i < 40; i++)
	{
		if (i<10)
		{
			carta[i].setNombre = "ORO";
			carta[i].setPinta=0;
			if (i==0)
			{
				carta[i].setValor = 1;
			}
			else if (i>=7)
			{
				aux = i + 3;
				carta[i].setValor = aux;
			}
			else
			{
				aux = i + 1;
				carta[i].setValor = aux;
			}
			
		}
		else if (i>=10 && i<20)
		{
			carta[i].setNombre = "COPA";
			carta[i].setPinta = 1;
			if (i == 10)
			{
				carta[i].setValor = 1;
			}
			else if (i >= 17)
			{
				aux = 9;
				do
				{
					aux += 1;
					carta[i].setValor = aux;
					i++;
				} while (i<20);
			}
			else
			{
				aux = 1;
				do
				{
					aux += 1;
					carta[i].setValor = aux;
					i++;
				} while (i<17);

			}
		}
		else if (i>=20 && i<30)
		{
			carta[i].setNombre = "BASTO";
			carta[i].setPinta = 2;
			if (i == 20)
			{
				carta[i].setValor = 1;
			}
			else if (i >= 27)
			{
				aux = 9;
				do
				{
					aux += 1;
					carta[i].setValor = aux;
					i++;
				} while (i<30);
			}
			else
			{
				aux = 1;
				do
				{
					aux += 1;
					carta[i].setValor = aux;
					i++;
				} while (i<27);

			}
		}
		else if (i>=30 && i<40)
		{
			carta[i].setNombre = "ESPADA";
			carta[i].setPinta = 3;
			if (i == 30)
			{
				carta[i].setValor = 1;
			}
			else if (i >= 37)
			{
				aux = 9;
				do
				{
					aux += 1;
					carta[i].setValor = aux;
					i++;
				} while (i<40);
			}
			else
			{
				aux = 1;
				do
				{
					aux += 1;
					carta[i].setValor = aux;
					i++;
				} while (i<37);

			}
		}
	}
	contador = 39;
}


Carta mazo::repartirCarta()
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
	srand(time(NULL));

	do
	{
		for (c = 0; c < 40; c++)
		{
			Carta aux;
			aux = carta[c];
			num = 1 + rand() % (41 - 1);
			carta[c] = carta[num];
			carta[num] = aux;
		}
		c++;
	} while (c==40);
		

}