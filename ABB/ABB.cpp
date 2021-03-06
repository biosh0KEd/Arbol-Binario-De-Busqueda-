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

struct ListaParaMostrar
{
	int dato;
	ListaParaMostrar *sig;
}*inicioLM, *auxLM;

bool vacia();
void inicializar();
bool buscar(int D);
bool buscarLSE(int dato);
bool vaciaLSE();
void limpiaLSE();
void imprimeLSE();
void mostrarInOrden();
void Insertar(int D);

int main()
{
	int R = 0;
	do
	{
		system("cls");
		cout << "			Arbol Binario de Busqueda			" << endl;
		cout << "1- Ingresar elemento\n2- Elimina elemento\n3- Mostrar Arbol\nMostrar\n    4- Raiz\n    5- Hojas\n    6- Padre\n    7- Hijos\n    8- Altura\n    9- Nivel\n    10- Orden\n    11- Tamaño\n12- Salir" << endl;
		cout << "¿Que accion decea realizar? __________________ ";
		cin >> R;
		system("cls");
		switch (R)
		{
		case 1://Ingresar elemento
			cout << "			Arbol Binario de Busqueda			" << endl;
			cout << "¿Que elemento desea ingrear en el arbol?" << endl;
			int D;
			cin >> D;
			Insertar(D);
			break;
		case 2://Elimina elemento
			cout << "			Arbol Binario de Busqueda			" << endl;
			cout << "¿Que elemento desea eliminar del arbol?" << endl;
			int E;
			cin >> E;
			break;
		case 3://Mostrar Arbol
			cout << "			Arbol Binario de Busqueda			" << endl;
			cout << "1- Grafico\n2-Inorden\n3-Posorden\n4-Preorden" << endl;
			cout << "¿De que manera desea mostrar los datos?___________";
			int RM;
			cin >> RM;
			system("cls");
			switch (RM)
			{
			case 1://Grafico
				cout << "			Arbol Binario de Busqueda			" << endl;
				cout << "Grafico:" << endl;
				break;
			case 2://Inorden
				cout << "			Arbol Binario de Busqueda			" << endl;
				cout << "Inorden:" << endl;
				mostrarInOrden();
				break;
			case 3://Posorden
				cout << "			Arbol Binario de Busqueda			" << endl;
				cout << "Posorden:" << endl;
				break;
			case 4://Preorden
				cout << "			Arbol Binario de Busqueda			" << endl;
				cout << "Preorden:" << endl;
				break;
			default:
				cout << "			Arbol Binario de Busqueda			" << endl;
				cout << "				ERROR!!!!\n					Opcion no valida" << endl;
				system("Pause");
				break;
			}
			break;
		case 4://Raiz
			cout << "			Arbol Binario de Busqueda			" << endl;
			break;
		case 5://Hojas
			cout << "			Arbol Binario de Busqueda			" << endl;
			break;
		case 6://Padre
			cout << "			Arbol Binario de Busqueda			" << endl;
			break;
		case 7://Hijos
			cout << "			Arbol Binario de Busqueda			" << endl;
			break;
		case 8://Altura
			cout << "			Arbol Binario de Busqueda			" << endl;
			break;
		case 9://Nivel
			cout << "			Arbol Binario de Busqueda			" << endl;
			break;
		case 10://Orden
			cout << "			Arbol Binario de Busqueda			" << endl;
			break;
		case 11://Tamaño
			cout << "			Arbol Binario de Busqueda			" << endl;
			break;
		case 12://Salir
			cout << "			Arbol Binario de Busqueda			" << endl;
			break;
		default:
			cout << "			Arbol Binario de Busqueda			" << endl;
			cout << "				ERROR!!!!\n					Opcion no valida" << endl;
			system("Pause");
			break;
		}
	} while (R != 12);
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

void inicializar()
{
	raiz = NULL;
}

bool buscar(int D)
{
	aux = raiz;
	bool exit = false;
	do
	{
		if (D < aux->dato)
		{
			if (aux->Izq == NULL)
			{
				exit = true;
				return(false);
			}
			else if (aux->Izq->dato == D)
			{
				exit = true;
				return(true);
			}

			else
			{
				aux = aux->Izq;
			}
		}
		else if (D > aux->dato)
		{
			if (aux->Der == NULL)
			{
				exit = true;
				return(false);
			}
			if (aux->Der->dato == D)//exepcion
			{
				exit = true;
				return(true);
			}
			else
			{
				aux = aux->Der;
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
	} while (exit == false);
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

void limpiaLSE()
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

bool buscarLSE(int dato)
{
	if (vacia())
	{
		return(false);
	}
	else
	{
		auxLM = inicioLM;
		while (auxLM != NULL)
		{
			if (auxLM->dato == dato)
			{
				return(true);
			}
			else
			{
				auxLM = auxLM->sig;
			}
		}
		if (auxLM == NULL)
		{
			return(false);
		}
	}
}

void imprimeLSE()
{
	if (vacia())
	{
		cout << "La lista esta vacia" << endl;
	}
	else
	{
		auxLM = inicioLM;
		while (auxLM != NULL)
		{
			cout << auxLM->dato << " - ";
			auxLM = auxLM->sig;
		}
		cout << endl;
	}
	system("Pause");
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
			else if (x = 3)//Derecha
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
			if (buscar(aux->Izq->dato) && buscar(aux->Der->dato) && aux->Padre == NULL)
			{
				x = 10;
			}
		}
	}
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
			system("Pause");
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