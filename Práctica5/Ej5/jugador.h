//jugador.h
//La clase jugador representa la informacion de un jugador

#ifndef JUGADOR_H
#define JUGADOR_H

#include "persona.h"

#include <string>
#include <list>
#include <fstream>
#include <iostream>

using namespace std;


struct Apuesta //Estructura que contiene tres datos de las apuestas que despues usara la lista
{
	int tipo;
	string valor;
	int cantidad;

};

class Jugador : public Persona
{
private: //En esta parte declaramos las variables
	int dinero_;
	string codigo_;
	list <Apuesta> apuestas_;

public: //En esta parte guardamos las funciones
	Jugador(string dni, string codigo, string nombre = "", string apellidos = "", int edad = 0, string direccion = "", string localidad = "", string provincia = "", string pais = "", int dinero = 1000) : Persona(dni, nombre, apellidos, edad, direccion, localidad, provincia, pais)
	{
		dinero_ = dinero;
		codigo_ = codigo;
	};
	inline string getCodigo(){return codigo_;}; //Devuelve el codigo que contiene un jugador
	inline void setCodigo(string codigo){codigo_ = codigo;}; //Modifica el codigo que contiene un jugador
	inline int getDinero(){return dinero_;}; //Devuelve el dinero que contiene un jugador
	inline void setDinero(int dinero){dinero_ = dinero;}; //Modifica el dinero que contiene un jugador
	inline list <Apuesta> getApuestas(){return apuestas_;} //Devuelve la lista con la informacion del struct creado anteriormente
	void setApuestas(); //Modifica las apuestas de los jugadores

};

#endif