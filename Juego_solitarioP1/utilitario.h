#pragma once
#include <stdio.h>
#include <windows.h> 
#include <stdlib.h>
#include <iostream>
#include <istream>
#include <time.h> 
#include <conio.h>


using namespace std;

class utilitario
{
public:
	utilitario();
	bool AjustarVentana(int Ancho, int Alto);
	void gotoxy(int x, int y);
	void ocultarcursor();
	
};


