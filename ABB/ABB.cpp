//Efraín Girón Romero 15300102 
#include "stdafx.h"
#include <iostream>

using namespace std;

struct Nodo
{
	int dato;
	Nodo *Izq;
	Nodo *Der;
}*aux, *raiz, *dato;

void Insertar(int D);



int main()
{
    return 0;
}


void Insertar(int D)
{
	dato = new Nodo;
	dato->dato = D;
	dato->Der = NULL;
	dato->Izq = NULL;
	if (vacia())
	{
		raiz = dato;
	}
	else
	{

	}
}