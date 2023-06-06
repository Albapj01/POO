//crupier.h
//La clase crupier representa la informacion de un crupier

#ifndef CRUPIER_H
#define CRUPIER_H

#include "persona.h" //Se añade para que se haga de forma correcta la herencia

#include <string>

using namespace std;

class Crupier : public Persona //La clase crupier hereda la parte publica de la clase persona 
{
	private: //En esta parte declaramos las variables
		string codigo_;

	public: //En esta parte guardamos las funciones
		inline Crupier(string dni, string codigo, string nombre = "", string apellidos = "", int edad = 0, string direccion = "", string localidad = "", string provincia = "", string pais = "") : Persona(dni, nombre, apellidos, edad, direccion, localidad, provincia, pais)
		{
			codigo_ = codigo;
		}; //El constructor 
		inline string getCodigo(){return codigo_;}; //Devuelve el codigo de un crupier
		inline void setCodigo(string codigo){codigo_=codigo;}; //Modifica el codigo del crupier asignandole uno nuevo

		
};


#endif