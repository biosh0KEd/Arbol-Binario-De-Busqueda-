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

bool buscar(int D);

int main()
{
    return 0;
}

bool buscar(int D)
{
	aux = raiz;
	bool exit = false;
	do
	{
		if (D < aux->dato)
		{
			aux = aux->Izq;
			if (aux->dato == D)
			{
				exit = true;
				return(true);
			}
			else if (aux == NULL)
			{
				exit = true;
				return(false);
			}
		}
		else if (D > aux->dato)
		{
			aux = aux->Der;
			if (aux->dato == D)
			{
				exit = true;
				return(true);
			}
			else if (aux == NULL)
			{
				exit = true;
				return(false);
			}
		}
		else
		{
			if (D == raiz->dato)
			{
				exit = true;
				return(true);
			}
			else
			{
				exit = true;
				return(false);
			}
		}
	} while (exit);
}