//persona.cc


#include "persona.h"

using namespace std;

Persona::Persona(string dni, string nombre, string apellidos, int edad, string direccion,  string localidad, string provincia, string pais)
{
	dni_=dni;
	nombre_=nombre;
	apellidos_=apellidos;
	edad_=edad;
	direccion_=direccion;
	localidad_=localidad;
	provincia_=provincia;
	pais_=pais;
} //Constructor que viene de la clase persona al cual le modificamos todos los datos



