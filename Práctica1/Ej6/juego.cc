//juego.cc
//Programa principal prueba funcionamiento de la clase Dados
//The principal program that prove the correct function of the class "Dados" using the funcions of dados.cc


#include "dados.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#define NULL_null

int main()
{
	Dados d;

	int select = 1, n;

	while (select != 0)
	{
		std::cout<<"\nSelecciona un numero del menu: \n";
		std::cout<<"0 Para salir del programa. \n";
		std::cout<<"1 Laznar los dados. \n";
		std::cout<<"2 Obtener el valor del dado 1. \n";
		std::cout<<"3 Obtener el valor del dado 2. \n";
		std::cout<<"4 Asignar un valor al dado 1. \n";
		std::cout<<"5 Asignar un valor al dado 2. \n";
		std::cout<<"6 Sumar el valor del dado 1 y del dado 2. \n";
		std::cout<<"7 Diferencia de los dados. \n";
		std::cout<<"8 Mostrar el numero de laznamientos realizados del dado 1. \n";
		std::cout<<"9 Mostrar el numero de laznamientos realizados del dado 2. \n";
		std::cout<<"10 Obtener la media de la suma de los valores obtenidos en el dado 1. \n";
		std::cout<<"11 Obtener la media de la suma de los valores obtenidos en el dado 2. \n";
		std::cout<<"12 Mostrar los ultimos 5 valores que ha obtenido el dado 1. \n";
		std::cout<<"13 Mostrar los ultimos 5 valores que ha obtenido el dado 2. \n";
		std::cout<<"\nIntroduzca su elección: \n";
		std::cin>> select;

		switch(select)
		{
			case 0:
				std::cout<<"Hasta la proxima.\n";
				break;
			case 1:
				d.lanzamiento();
				break;
			case 2:
				std::cout<<"El valor del dado 1 es: "<<d.getDado1()<<"\n";
				break;
			case 3:
				std::cout<<"El valor del dado 2 es: "<<d.getDado2()<<"\n";
				break;
			case 4:
				std::cout<<"¿Que valor desea que se le asigne al dado 1? \n";
				std::cin>>n;
				if(d.setDado1(n))
				{
					std::cout<<"El valor se ha asignado correctamente. \n";
				}
				else
				{
					std::cout<<"Se ha producido un error. \n";
				}
				break;
			case 5:
				std::cout<<"¿Que valor desea que se le asigne al dado 2? \n";
				std::cin>>n;
				if(d.setDado2(n))
				{
					std::cout<<"El valor se ha asignado correctamente. \n";
				}
				else
				{
					std::cout<<"Se ha producido un error. \n";
				}
				break;
			case 6:
				std::cout<<"La suma de ambos dados es: "<<d.getSuma()<<"\n";
				break;
			case 7:
				std::cout<<"La diferencia de ambos dados es: "<<d.getDiferencia()<<"\n";
				break;
			case 8:
				std::cout<<"Los lanzamientos realizados del dado 1 es: "<<d.getLanzamientos1()<<"\n";
				break;
			case 9:
				std::cout<<"Los lanzamientos realizados del dado 2 es: "<<d.getLanzamientos2()<<"\n";
				break;
			case 10:
				std::cout<<"La media de la suma de los valores del dado 1 es: "<<d.getMedia1()<<"\n";
				break;
			case 11:
				std::cout<<"La media de la suma de los valores del dado 2 es: "<<d.getMedia2()<<"\n";
				break;
			case 12:
				int v1[5];
				std::cout<<"Los ultimos 5 valores que hemos obtenido del dado 1 son: \n";
				d.getUltimos1(v1);
				for(int i=0; i<5; i++)
				{
					std::cout<<v1[i];
				}
				std::cout<<std::endl;
				break;
			case 13:
				int v2[5];
				d.getUltimos2(v2);
				std::cout<<"Los ultimos 5 valores que hemos obtenido del dado 2 son: \n";
				for(int i=0; i<5; i++)
				{
					std::cout<<v2[i];
				}
				std::cout<<std::endl;
				break;
			default:
				std::cout<<"Se ha producido un error, debe seleccionar un valor entre 0 y 13. \n";
				break;
		}

	}
	return 0;
}




