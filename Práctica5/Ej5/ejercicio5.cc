//ejercicio5.cc
//Programa que ordena un vector de jugadores por su dni de forma ascendente o descendente segun elijamos

#include <iostream>
#include <algorithm>
#include <vector>

#include "jugador.h"
#include "persona.h"

using namespace std;

bool ascendente(Jugador j, Jugador j1) //Se ordena el vector de forma ascendente
{
	return j.getDNI()<j1.getDNI();
}

bool descendente(Jugador j, Jugador j1) //Se ordena el vector de forma descendente
{
	return j.getDNI()>j1.getDNI();
}

int main()
{

	vector <Jugador> v;
	Jugador j("","");
	string dni;

	int tam;

	cout<<"Introduzca el tamaño del vector:"<<endl;
	cin>>tam;


	cout<<"Introduzca el dni de los jugadores:"<<endl;
	for(int i=0; i<tam; i++)
	{
		cout<<"Introduzca el dni del jugador %d"<<i<<endl;
		cin>>dni;

		j.getDNI(dni);

		v.push_back(j);
	}

	int num;

	switch(num)
	{
		case 1:
			sort(v, v+tam, descendente); //Ordenamos el vector con esta funcion

			cout<<"El vector ordenado descendentemente es:"<<endl;
			for(int i=0; i<tam; i++)
			{
				cout<<v[i].getDNI()<<endl;
			}
			break;

		case 2:
			sort(v, v+tam, ascendente); //Ordenamos el vector con esta funcion

			cout<<"El vector ordenado ascendentemente es:"<<endl;
			for(int i=0; i<tam; i++)
			{
				cout<<v[i].getDNI()<<endl;
			}
			break;

		default:
			cout<<"Debe seleccionar 1 o 2"<<endl;
			break;
	}

	return 0;
}