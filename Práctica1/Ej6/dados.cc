//dados.cc
//Cuerpo de los métodos de la clase Dados
//A program that contains the functions of the hole program that we are going to use in the main

#include <ctime>
#include <cstdlib>
#include "dados.h"

Dados::Dados()
{
	srand(time(NULL));
	d1_=1;
	d2_=1;
	lanz1_=0;
	lanz2_=0;
	suma1_=0;
	suma2_=0;
	for (int i = 0; i < 5; ++i)
	{
		ulti1[i]=0;
		ulti2[i]=0;
	}
}

void Dados::lanzamiento()
{
	d1_=(rand()%6)+1;
	d2_=(rand()%6)+1;

	lanz1_++;
	lanz2_++;

	suma1_=suma1_+d1_;
	suma2_=suma2_+d2_;

	for(int i=4; i>=0; i--)
	{
		ulti1[i]=ulti1[i-1];
	}
	ulti1[0]=d1_;
	for(int i=4; i>=0; i--)
	{
		ulti2[i]=ulti2[i-1];
	}
	ulti2[0]=d2_;
}

bool Dados::setDado1(const int &n) 
{
	while(1<=n && n<=6)
	{
		d1_=n;
		lanz1_++;
		suma1_=suma1_+d1_;

		for(int i=4; i>=0; i--)
		{
			ulti1[i]=ulti1[i-1];
		}
		ulti1[0]=d1_;
		return true;
	}
	return false;
}

bool Dados::setDado2(const int &n) 
{
	while(1<=n && n<=6)
	{
		d2_=n;
		lanz2_++;
		suma2_=suma2_+d2_;

		for(int i=4; i>=0; i--)
		{
			ulti2[i]=ulti2[i-1];
		}
		ulti2[0]=d2_;
		return true;
	}
	return false;
}




