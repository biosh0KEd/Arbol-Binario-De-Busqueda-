//Efraín Girón Romero 15300102 
#include "stdafx.h"
#include <iostream>

using namespace std;

struct Nodo
{
	int dato;
	Nodo *Padre;
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
		if (buscar(D)) 
		{
			cout << "			Error!!!\nEl dato ya se encuentra dentro del arbol\nNo se pueden ingresar datos repetidos" << endl;
		}
		else 
		{
			aux = raiz;
			bool exit = false;
			do
			{
				if (dato->dato < aux->dato)
				{
					if (aux->Izq == NULL)
					{
						aux->Izq = dato;
						dato->Padre = aux;
						exit = true;
					}
					aux = aux->Izq;
				}
				else
				{
					if (aux->Der == NULL)
					{
						aux->Der = dato;
						dato->Padre = aux;
						exit = true;
					}
					aux = aux->Der;
				}
			} while (exit == false);
		}
	}
}