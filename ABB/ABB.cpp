//Efraín Girón Romero 15300102 
#include "stdafx.h"
#include <iostream>

using namespace std;

struct Nodo
{
	int dato;
	Nodo *Izq;
	Nodo *Der;
}*aux, *raiz;

void inicializar();

int main()
{
    return 0;
}

void inicializar() 
{
	raiz = NULL;
}