//jugador-ppal.cc
//A principal program that shows the informations of the players

#include <iostream>
#include "jugador.h"

using namespace std;


int main()
{
	string dni;
	string codigo;
	list <Apuesta> apuestas;
	int a = 1;

	cout<<"Este progrma se ha creado para comprobar el correcto funcionamiento de la clase jugador"<<endl;
	cout<<"Introduzca los datos de un jugador"<<endl;
	cout<<"Introduzca su Dni:"<<endl;
	cin>>dni;
	cout<<"Introduzca su codigo:"<<endl;
	cin>>codigo;
	cout<<"Introduzca su nombre:"<<endl;
	cin>>nombre;
	cout<<"Introduzca sus apellidos:"<<endl;
	cin>>apellido1;
	cin>>apellido2;
	cout<<"Introduzca su edad:"<<endl;
	cin>>edad;
	cout<<"Introduzca su direccion:"<<endl;
	cin>>direccion;
	cout<<"Introduzca su localidad:"<<endl;
	cin>>localidad;
	cout<<"Introduzca su provincia:"<<endl;
	cin>>provincia;
	cout<<"Introduzca su pais:"<<endl;
	cin>>pais;

	Jugador jug(dni, codigo);

	jug.setApuestas();
	apuestas = jug.getApuestas();

	for(auto i = apuestas.begin(); i != apuestas.end(); i++) //Se imprime desde el principio hasta el final del fichero
	{
		cout<<"Apuesta "<<a<<":"<<endl;
		cout<<"Tipo: "<<i->tipo<<" "<<"Valor:"<<i->valor<<" "<<"Cantidad:"<<i->cantidad<<endl;
		a++;
	}

	return 0;

}

