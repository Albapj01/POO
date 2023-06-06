//jugador.cc
//A program that contains the functions of the hole program that we are going to use 


#include "jugador.h"

using namespace std;

void Jugador::setApuestas()
{
	apuestas_.clear(); //Deja vacía la lista de apuestas
	ifstream f((getDNI() + "dni.txt")); //Abrimos el fichero en modo lectura

	if(!f) //Si no se ha podidio abrir entra en este if
	{
		exit(EXIT_FAILURE);
	}

	Apuesta apuestas;
	string cad;
	getline(f, cad, ','); //Lee el fichero y hasta la coma se almacena en cadena

	while(!f.eof()) //Hasta el final del fichero
	{
		apuestas.tipo = stoi(cad);
		getline(f, cad, ',');
		apuestas.valor = cad;
		getline(f, cad, '\n');
		apuestas.cantidad = stoi(cad);
		apuestas_.push_back(apuestas);
		getline(f, cad, ',');
	}

	f.close(); //Cerramos el fichero
}

