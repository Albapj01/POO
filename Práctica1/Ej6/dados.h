//dados.h
//La clase dados representa el lanzamiento de 2 dados

#ifndef DADOS_H
#define DADOS_H


class Dados
{
private: //En esta parte declaramos las variables
	int d1_;
	int d2_;
	int lanz1_;
	int lanz2_;
	int suma1_;
	int suma2_;
	int ulti1 [5];
	int ulti2 [5];
	
public: //En esta parte guardamos las funciones
	Dados(); //El contructor no devuelve nada

	bool setDado1(const int &n); //Le da un valor al dado 1 y si este se ha guardado correctamente devuelve true, y si no devuelve false
	bool setDado2(const int &n); //Le da un valor al dado 2 y si este se ha guardado correctamente devuelve true, y si no devuelve false
	
	void getUltimos1(int v[]) //Se guarda en el vector los ultimos 5 valores que se le han asignado al dado 1
	{
		for(int i=0; i<5; i++)
		{
			v[i]=ulti1[i];
		}
	};

	void getUltimos2(int v[]) //Se guarda en el vector los ultimos 5 valores que se le han asignado al dado 2
	{
		for(int i=0; i<5; i++)
		{
			v[i]=ulti2[i];
		}
	}; 

	void lanzamiento(); //Le da un valor aleatorio a ambos dados
	
	inline float getMedia1() const //Devuelve la media del dado 1
	{
		if(lanz1_==0)
		{
			return 0;
		}
		return (float)suma1_/lanz1_;
	};

	inline float getMedia2() const //Devuelve la media del dado 2
	{
		if(lanz2_==0)
		{
			return 0;
		}
		return (float)suma2_/lanz2_;
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
	
	inline int getLanzamientos1() const {return lanz1_;}; //Devuelve el numero de veces que hemos lanzado el dado 1
	inline int getLanzamientos2() {return lanz2_;}; //Devuelve el numero de veces que hemos lanzado el dado 2
};
#endif