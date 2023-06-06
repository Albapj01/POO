//miclase.hpp
//Programa que contiene las funciones necesarias en el ejercicio7.cc


#ifndef MI_CLASE_H
#define MI_CLASE_H

#include <vector>

using namespace std;

template <class T> //Creamos la plantilla

class MiClase
{
private:
	vector <T> d_;

public:
	MiClase(){}

	void add(T d) //Se añade 
	{
		d_.push_back(d);
	}

	void print()
	{
		cout<<"El contenido del vector es: "<<endl;

		for(int i=0; i<d_.size(); i++)
		{
			cout<<d_[i]<<endl;
		}
	}

	float suma() //Hacemos la suma de los elementos del vector
	{
		float suma = 0;

		for(int i=0; i<d_.size(); i++)
		{
			suma = suma + d_[i];
		}
		return suma;
	}

	float producto() //Hacemos el producto de los elementos del vector
	{
		float producto = 1;

		for(int i=0; i<d_.size(); i++)
		{
			producto = producto * d_[i];
		}
		return producto;
	}

	float division() //Hacemos la division de los elementos del vector
	{
		float division = d_[0];

		for(int i=1; i<d_.size(); i++)
		{
			division = division / d_[i];
		}
		return division;
	}

};

#endif
