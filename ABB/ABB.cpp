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

bool vacia();

int main()
{
    return 0;
}

bool vacia()
{
	if (raiz == NULL)
	{
		return(true);
	}
	else
	{
		return(false);
	}
}