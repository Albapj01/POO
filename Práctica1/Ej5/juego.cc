//juego.cc
//Programa principal prueba funcionamiento de la clase Dados
//The principal program that prove the correct function of the class "Dados" using the funcions of dados.cc


#include "dados.h"
#include <iostream>

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
			default:
				std::cout<<"Se ha producido un error, debe seleccionar un valor entre 0 y 6. \n";
				break;
		}

	}
	return 0;
}




