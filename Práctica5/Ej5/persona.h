//persona.h
//La clase persona representa la informacion de una persona

#ifndef PERSONA_H
#define PERSONA_H

#include <string>

using namespace std;

// El profe dice que usemos using namespace std mejor que std:: ya que es mas practico

class Persona
{
private: //En esta parte declaramos las variables
	string dni_;
	string nombre_;
	string apellidos_;
	int edad_;
	string direccion_;
	string localidad_;
	string provincia_;
	string pais_;

public: //En esta parte guardamos las funciones
	inline void setDNI(string const dni){dni_=dni;} //Modifica el dni de una persona asignandole un nuevo dni
	inline string getDNI() const {return dni_;} //Devuelve el dni de una persona
	inline void setNombre(string const nombre){nombre_=nombre;} //Modifica el nombre de una persona asignandole un nuevo nombre
	inline string getNombre() const {return nombre_;} //Devuelve el nombre de una persona
	inline void setApellidos(string const apellidos){apellidos_=apellidos;} //Modifica los apellidos de una persona asignandole unos nuevos apellidos
	inline string getApellidos() const {return apellidos_;} //Devuelve los apellidos de una persona
	
	inline bool setEdad(int const edad) //Modifica la edad de una persona asignandole una nueva edad
	{
		if(edad>=0)
		{
			edad_=edad; 
			return true;
		} 
		return false;
	}
	 
	inline int getEdad() const {return edad_;} //Devuelve la edad de una persona
	inline void setDireccion(string const direccion){direccion_=direccion;} //Modifica la direccion de una persona asignandole una nueva direccion
	inline string getDireccion() const {return direccion_;} //Devuelve la direccion de una persona
	inline void setLocalidad(string const localidad){localidad_=localidad;} //Modifica la localidad de una persona asignandole una nueva localidad
	inline string getLocalidad() const {return localidad_;} //Devuelve la localidad de una persona
	inline void setProvincia(string const provincia){provincia_=provincia;} //Modifica la provincia de una persona asignandole una nueva provincia
	inline string getProvincia() const {return provincia_;} //Devuelve la provincia de una persona
	inline void setPais(string const pais){pais_=pais;} //Modifica el pais de una persona asignandole un nuevo pais
	inline string getPais() const {return pais_;} //Devuelve el pais de una persona

	Persona(string dni, string nombre = "", string apellidos = "", int edad = 0, string direccion = "", string localidad = "", string provincia = "", string pais = ""); //El contructor

	inline string getApellidosyNombre(){return (apellidos_+ ", " +nombre_);} //Devuelve el nombre y los apellidos de una persona

	inline bool mayor() //Devuelve true si la edad es mayor a 18 y false si es menor
	{
		if(edad_>18)
		{
			return true;
		}
		return false;
	} 


};

#endif