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
}

bool Dados::setDado1(const int &n)
{
	while(1<=n && n<=6)
	{
		d1_=n;
		return true;
	}
	return false;
}

bool Dados::setDado2(const int &n)
{
	while(1<=n && n<=6)
	{
		d2_=n;
		return true;
	}
	return false;
}

