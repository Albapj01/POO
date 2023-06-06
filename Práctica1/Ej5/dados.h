//dados.h
//La clase dados representa el lanzamiento de 2 dados

#ifndef DADOS_H
#define DADOS_H

#include <cstdlib>

class Dados
{
private: //En esta parte declaramos las variables
	int d1_;
	int d2_;
public: //En esta parte guardamos las funciones
	bool setDado1(const int &n); //Le da un valor al dado 1 y si este se ha guardado correctamente devuelve true, y si no devuelve false
	bool setDado2(const int &n); //Le da un valor al dado 2 y si este se ha guardado correctamente devuelve true, y si no devuelve false
	Dados(); //El contructor no devuelve nada
	
	inline void lanzamiento() //Le da un valor aleatorio a ambos dados
	{
		d1_=(rand()%6)+1; 
		d2_=(rand()%6)+1;
	}; 

	inline int getDado1() const {return d1_;}; //Devuelve el numero del dado 1
	inline int getDado2() const {return d2_;}; //Devuelve el numero del dado 2
	inline int getSuma() const {return (d1_+d2_);}; //Devuelve suma de ambos dados
	inline int getDiferencia() const //Devuelve la diferencia entre ambos dados
	{
		if(d1_>d2_)
		{
			return (d1_-d2_);
		} 
		return (d2_-d1_);
	}
}; 

#endif