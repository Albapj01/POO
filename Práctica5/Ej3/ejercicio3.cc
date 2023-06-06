//ejercicio3.cc
//Programa que ordena un vector 

#include <iostream>
#include <algorithm>

using namespace std;

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

	sort(v, v+tam); //Ordenamos el vector con esta funcion

	cout<<"El vector ordenado ascendentemente es:"<<endl;
	for(int i=0; i<tam; i++)
	{
		cout<<v[i]<<endl;
	}

	return 0;
}