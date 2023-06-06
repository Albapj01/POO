//contador.h
//Programa que contiene las funciones del contador

#ifndef CONTADOR_H
#define CONTADOR_H

#include <vector>

using namespace std;

class Contador
{
private:
	int valor_;
	int min_;
	int max_;

	vector <int> cambios_; //Creamos un vector

public:
	Contador()
	{
		valor_ = 0;
		min_ = 0;
		max_ = 1000;
		cambios_.clear();
	}

	Contador(int valor, int min = 0, int max = 1000) //Constructor del contador
	{	
		min_ = min;
		max_ = max;

		if(min_>=max_)
		{
			valor_ = 0;
			min_ = 0;
			max_ = 1000;
		}
		else if(valor<min_)
		{
			valor_ = 0;
		}
		else if(valor>max_)
		{
			valor_ = 0;
		}
		else
		{
			valor_ = valor;
		}
		
		cambios_.clear();
	}

	inline void setCamb(int valor)
	{
		cambios_.push_back(valor_); //Se añade al final

		valor_ = valor;

		if(valor_>max_)
		{
			valor_=max_;
		}
		else if(valor_<min_)
		{
			valor_ = min_;
		}
	}

	inline Contador& operator=(int n){setCamb(n); return  * this;} //Se le asigna al contador un entero

	inline Contador& operator=(Contador &contador){setCamb(contador.valor_); return * this;} //Se le asigna al contador otro contador

	inline Contador& operator++(int){setCamb(valor_+1); return * this;} //Incrementa el valor del contador

	inline Contador& operator++(void){setCamb(valor_+1); return * this;} //Incrementa el valor del contador

	inline Contador& operator--(int){setCamb(valor_-1); return * this;} //Decrementa el valor del contador

	inline Contador& operator--(void){setCamb(valor_-1); return * this;} //Decrementa el valor del contador

	inline Contador& operator+(int n) //Devuelve en un contador la suma entre un entero y un objeto de tipo contador
	{
		Contador cont(valor_, min_, max_);

		cont.valor_ = cont.valor_ + n;

		if(cont.valor_ + n > cont.max_)
		{
			cont.valor_ = cont.max_;
		}
		return cont;
	}

	inline friend Contador& operator+(int n, Contador contador) //Devuelve en un contador la suma entre un entero y un objeto de tipo contador
	{
		Contador cont(contador.valor_, contador.min_, contador.max_);

		cont.valor_ = cont.valor_ + n;

		if(cont.valor_ + n > cont.max_)
		{
			cont.valor_ = cont.max_;
		}
		return cont;
	}

	inline Contador& operator-(int n) //Devuelve en un contador que realiza lo analogo a la funcion anterior
	{
		Contador cont(valor_, min_, max_);

		cont.setCamb(cont.get()-n);

		return cont;
	}

	inline friend Contador& operator-(int n, Contador contador) //Devuelve en un contador que realiza lo analogo a la funcion anterior
	{
		Contador cont(contador.get(), contador.min_, contador.max_);

		cont.setCamb(n-cont.get());

		return cont;
	}

	inline bool undo(int n=1) //Deshace las n ultimas operaciones realizadas en el contador
	{
		if(n<cambios_.size() || n>cambios_.size())
		{
			return false;
		}
		setCamb(cambios_[cambios_.size()-n]);
		return true;
	}

	inline int get() const {return valor_;} //Devuelve el valor del contador

};


#endif