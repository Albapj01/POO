//ejercicio6.cc
//Programa que imprime un vector

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <class T> //Creamos la plantilla

void imprimirVector(T v[], int tam) //Imprimimos el vvector
{
	for(int i=0; i<tam; i++)
	{
		cout<<v[i]<<endl;
	}
}


int main()
{
	int v[4] = {1,2,3,4};
	float v1[4] = {1.1,2.2,3.3,4.4};
	char v2[4] = {'a','b','c','d'};

	cout<<"El vector de datos int contiene los siguientes valores:"<<endl;
	imprimirVector(v,4); //Se imprime el vector de enteros

	cout<<"El vector de datos float contiene los siguientes valores:"<<endl;
	imprimirVector(v1,4); //Se imprime el vector de flotantes

	cout<<"El vector de datos char contiene los siguientes valores:"<<endl;
	imprimirVector(v2,4); //Se imprime el vector de caracteres

	return 0;
}