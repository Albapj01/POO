//ruleta.h
//La clase ruleta representa el funcionamiento de la ruleta

#ifndef RULETA_H
#define RULETA_H	

#include <iostream>
#include <list>
#include "jugador.h"
#include "crupier.h"

using namespace std;

class Ruleta
{
private: //En esta parte declaramos las variables
	int banca_;
	int bola_;
	list <Jugador> jugadores_;
	Crupier crupier_;
	int numjug_;
	int sumdin_;
	int numlanzbol_;
	int gananciabanca_;

public: //En esta parte guardamos las funciones
	inline Ruleta(Crupier crupier):crupier_(crupier.getDNI(),crupier.getCodigo())
	{
		bola_ = -1;
		banca_ = 1000000;
	} //El constructor 

	inline int getBanca() const {return banca_;} //Devuelve la banca de una ruleta
	inline int getBola() const {return bola_;} //Devuelve la bola de una ruleta
	
	inline bool setBanca(int const banca) //Modifica la banca de una ruleta asignandole un valor nuevo
	{
		if(banca>0)
		{
			banca_ = banca; 
			return true;
		}
		return false;
	} 

	inline bool setBola(int const bola) //Modifica la bola de una ruleta asignandole un valor nuevo
	{
		if(bola>=0 && bola<=36)
		{
			bola_ = bola; 
			return true;
		}
		return false;
	}

	inline Crupier getCrupier() const {return crupier_;} //Devuelve el crupier de la ruleta
	inline void setCrupier(Crupier crupier){crupier_ = crupier;} //Modifica el crupier de una ruleta asignandole un vlaor nuevo

	inline list <Jugador> getJugadores() const {return jugadores_;} //Devuelve la lista de jugadores de una ruleta

	bool addJugador(Jugador const &jugador); //Devuelve true si se ha podidio añadir bien al jugador si no devuelve false
	int deleteJugador(string const &dni); //Elimina el jugador si coincide el dni buscado con el de algun jugador
	int deleteJugador(Jugador &jugador); //Elimina el jugador si coincide con el buscado 

	void escribeJugadores(); //Escribe los jugadores en un fichero
	void leeJugadores(); //Lee los jugadores de un fichero

	inline void giraRuleta(){srand(time(NULL)); bola_=(rand()%(37));} //Gira la ruleta y guarda el valor en bola

	void getPremios(); //Actualiza a los jugadores
	bool esRoja(int const &n); //Devuelve true si el valor corresponde a un color rojo y si no devuelve false
	
	inline bool esPar(int const &n) //Devuelve true si el valor corresponde a un valor par y si no devuelve false
	{
		if(n%2==0)
		{
			return true;
		}
		return false;
	}
	 
	inline bool esAlta(int const &n) //Devuelve true si el valor corresponde a un valor entre 1 y 18 y si no devuelve false
	{
		if(n>=1 && n<=18)
		{
			return false;
		}
		return true;
	} 

	void getEstadoRuleta(int &numjug, int &sumdin, int &numlanzbol, int &gananciabanca); //Devuelve el estado de la ruleta
};

#endif


