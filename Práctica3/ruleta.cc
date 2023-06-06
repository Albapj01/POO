//ruleta.cc
//Programa que contiene las funciones de la clase ruleta

#include "ruleta.h"
#include <fstream>
#include <ctime>

using namespace std;

bool Ruleta::addJugador(Jugador const &jugador)
{
	list <Jugador>::iterator it;
	for(it = jugadores_.begin(); it != jugadores_.end(); it++)
	{
		if(it->getDNI() == jugador.getDNI())
		{
			return false;
		}
	}

	jugadores_.push_back(jugador);
	string nombreFich = jugador.getDNI()+".txt";

	ifstream f;
	f.open(nombreFich.c_str()); 

	if(f) //Si existe devuelvo true y si no lo creo
	{
		f.close();
		return true;
	}

	ofstream f1; //Si no existe lo creo
	f1.open(nombreFich.c_str());
	f1.close();
	return true;
}


int Ruleta::deleteJugador(string const &dni)
{
	list <Jugador>::iterator it; 
	for (it = jugadores_.begin(); it != jugadores_.end(); it++)
	{
		if(it->getDNI() == dni)
		{
			jugadores_.erase(it);
			return 1;
		}
	}

	if(jugadores_.empty())
	{
		return -1;
	}

	return -2;
}


int Ruleta::deleteJugador(Jugador &jugador)
{
	return deleteJugador(jugador.getDNI());
}


void Ruleta::escribeJugadores()
{
	fstream f;
	f.open("jugadores.txt", ios::out);
	for(auto it = jugadores_.begin(); it != jugadores_.end(); it++)
	{
		f<<it->getDNI()<<","<<it->getCodigo()<<","<<it->getNombre()<<","<<it->getApellidos()<<","<<it->getDireccion()<<","<<it->getLocalidad()<<","<<it->getProvincia()<<","<<it->getPais()<<","<<it->getDinero()<<endl;
	}
	f.close();
}


void Ruleta::leeJugadores()
{
	jugadores_.empty();

	fstream f;

	f.open("jugadores.txt", ios::in);
	
	char dni[200], codigo[200], nombre[200], apellidos[200], direccion[200], localidad[200], provincia[200], pais[200], dinero[200];

	while(f.getline(dni, 200, ','))
	{
		f.getline(codigo, 200, ',');
		f.getline(nombre, 200, ',');
		f.getline(apellidos, 200, ',');
		f.getline(direccion, 200, ',');
		f.getline(localidad, 200, ',');
		f.getline(provincia, 200, ',');
		f.getline(pais, 200, ',');
		f.getline(dinero, 200, '\n');

		Jugador j1(dni, codigo, nombre, apellidos, 0, direccion, localidad, provincia, pais, atoi(dinero));
		jugadores_.push_back(j1);
	}

	f.close();
}


void Ruleta::getPremios()
{
	for (auto it = jugadores_.begin(); it != jugadores_.end(); it++)
	{
		it->setApuestas();
		list <Apuesta> j1 = it->getApuestas();

		for(auto j = j1.begin(); j != j1.end(); j++)
		{
			Apuesta ap = *j;

			switch(ap.tipo)
			{
				case 1:
					if(bola_ == stoi(ap.valor)) //Gana el jugador y no la banca
					{
						setBanca(getBanca() - 35*ap.cantidad); 
						it->setDinero(it->getDinero() + (ap.cantidad*35));
					}
					else //Gana la banca y no el jugador
					{
						setBanca(getBanca() + ap.cantidad);
						it->setDinero(it->getDinero() - ap.cantidad);
					}
				break;

				case 2:
					if(bola_==0) //Gana la banca y pierde el jugador si el valor es 0
					{
						setBanca(getBanca() + ap.cantidad);
						it->setDinero(it->getDinero() - ap.cantidad);
					}
					else if ((ap.valor=="rojo" && esRoja(bola_)) || (ap.valor=="negro" && !esRoja(bola_))) //Gana el jugador y no la banca
					{
						setBanca(getBanca() - ap.cantidad);
						it->setDinero(it->getDinero() + (ap.cantidad));
					}
					else //Gana la banca y pierde el jugador 
					{
						setBanca(getBanca() + ap.cantidad);
						it->setDinero(it->getDinero() - ap.cantidad);
					}
				break;

				case 3:
					if(bola_==0) //Gana la banca y pierde el jugador si el valor es 0
					{
						setBanca(getBanca() + ap.cantidad);
						it->setDinero(it->getDinero() - ap.cantidad);
					}
					else if ((ap.valor=="par" && esPar(bola_)) || (ap.valor=="impar" && !esPar(bola_))) //Gana el jugador y no la banca
					{
						setBanca(getBanca() - ap.cantidad);
						it->setDinero(it->getDinero() + (ap.cantidad));
					}
					else //Gana la banca y pierde el jugador 
					{
						setBanca(getBanca() + ap.cantidad);
						it->setDinero(it->getDinero() - ap.cantidad);
					}
				break;

				case 4:
					if(bola_==0) //Gana la banca y pierde el jugador si el valor es 0
					{
						setBanca(getBanca() + ap.cantidad);
						it->setDinero(it->getDinero() - ap.cantidad);
					}
					else if ((ap.valor=="alto" && esAlta(bola_)) || (ap.valor=="bajo" && !esAlta(bola_))) //Gana el jugador y no la banca
					{
						setBanca(getBanca() - ap.cantidad);
						it->setDinero(it->getDinero() + (ap.cantidad));
					}
					else //Gana la banca y pierde el jugador
					{
						setBanca(getBanca() + ap.cantidad);
						it->setDinero(it->getDinero() - ap.cantidad);
					}
				break;
			}
		}
	}
}


bool Ruleta::esRoja(int const &n)
{
	int rojas[18] = {1,3,5,7,9,12,14,16,18,19,21,23,25,27,30,32,34,36};
	for(int i = 0; i<18; i++)
	{
		if(n==rojas[i])
		{
			return true;
		}
	}
	return false;
}




