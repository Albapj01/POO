//ejercicio4.cc
//Programa que ordena un vector de forma ascendente o descendente segun elijamos

#include <iostream>
#include <algorithm>

using namespace std;

bool ascendente(int i, int j) //Se ordena de forma ascendente
{
	return i<j;
}

bool descendente(int i, int j) //Se ordena de forma descendente
{
	return i>j;
}

int main()
{
	int tam;

	cout<<"Introduzca el tamaño del vector:"<<endl;
	cin>>tam;

	int v[tam];

	cout<<"Introduzca los datos del vector:"<<endl;
	for(int i=0; i<tam; i++)
	{
		cin>>v[i];
	}

	int num;
	cout<<"Seleccione 1 para ordenar el vector descendentemente:"<<endl;
	cout<<"Seleccione 2 para ordenar el vector ascendentemente:"<<endl;
	cin>>num;

	switch(num)
	{
		case 1:
			sort(v, v+tam, descendente); //Ordenamos el vector con esta funcion

			cout<<"El vector ordenado descendentemente es:"<<endl;
			for(int i=0; i<tam; i++)
			{
				cout<<v[i]<<endl;
			}
			break;

		case 2:
			sort(v, v+tam, ascendente); //Ordenamos el vector con esta funcion

			cout<<"El vector ordenado ascendentemente es:"<<endl;
			for(int i=0; i<tam; i++)
			{
				cout<<v[i]<<endl;
			}
			break;

		default:
			cout<<"Debe seleccionar 1 o 2"<<endl;
			break;
	}

	return 0;
}