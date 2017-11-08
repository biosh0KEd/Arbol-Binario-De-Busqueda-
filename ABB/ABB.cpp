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
}*aux, *raiz;

struct ListaParaMostrar
{
	int dato;
	ListaParaMostrar *sig;
}*inicioLM, *auxLM;

void mostrarInOrden();
bool buscar(int dato);
bool vaciaLSE();
void limpia();

int main()
{
    return 0;
}

bool vaciaLSE()
{
	if (inicioLM == NULL)
	{
		return(true);
	}
	else
	{
		return(false);
	}
}

void limpia()
{
	if (vaciaLSE())
	{
		cout << "La lista ya se encuentra vacia" << endl;
	}
	else
	{
		auxLM = inicioLM;
		while (inicioLM != NULL)
		{
			inicioLM = inicioLM->sig;
			delete auxLM;
			auxLM = inicioLM;
		}
	}
}

bool buscar(int dato)
{
	if (vacia())
	{
		return(false);
	}
	else
	{
		aux = inicio;
		while (aux != NULL)
		{
			if (aux->dato == dato)
			{
				return(true);
			}
			else
			{
				aux = aux->sig;
			}
		}
		if (aux == NULL)
		{
			return(false);
		}
	}
}


void mostrarInOrden()
{
	if (vacia())
	{
		cout << "El arbol se encuentra vacio" << endl;
	}
	else
	{
		aux = raiz;
		inicioLM = new ListaParaMostrar;
		auxLM = inicioLM;
		for (int x = 1; x <= 3; x++)
		{
			if (x = 1) //Izquierda
			{
				if (aux->Izq != NULL)
				{
					if (!buscar(aux->Izq->dato))
					{
						aux = aux->Izq;
						if (aux->Der == NULL && aux->Izq == NULL)
						{
							auxLM->dato = aux->dato;
							auxLM = auxLM->sig;
							aux = aux->Padre;
						}
						else
						{
							x = -1;
						}
					}
				}
			}
			else if (x = 2) //Raiz
			{
				auxLM->dato = aux->dato;
				auxLM = auxLM->sig;
			}
			else if (x = 3)
			{
				if (aux->Der != NULL)
				{
					if (!buscar(aux->Der->dato))
					{
						aux = aux->Der;
						if (aux->Der == NULL && aux->Izq == NULL)
						{
							auxLM->dato = aux->dato;
							auxLM = auxLM->sig;
							aux = aux->Padre;
						}
						else
						{
							x = -1;
						}
					}
				}
			}
		}

	}
}