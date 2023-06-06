//ejercicio7.cc
//Programa en el cual sumamos, multiplicamos y dividimos los elementos de un vector

#include <iostream>
#include "miclase.hpp"

using namespace std;

int main()
{
	MiClase <int> c;

	c.add(1); //Añadimos los elementos
	c.add(2);
	c.add(3);
	c.add(4);

	c.print(); //Imprimimos los elementos del vector

	cout<<"La suma de los datos de c es: "<<c.suma()<<endl;
	cout<<"El producto de los datos de c es: "<<c.producto()<<endl;
	cout<<"La división de los datos de c es: "<<c.division()<<endl;



	MiClase <float> c1;

	c1.add(1.1);
	c1.add(2.2);
	c1.add(3.3);
	c1.add(4.4);

	c1.print();

	cout<<"La suma de los datos de c1 es: "<<c1.suma()<<endl;
	cout<<"El producto de los datos de c1 es: "<<c1.producto()<<endl;
	cout<<"La división de los datos de c1 es: "<<c1.division()<<endl;

	return 0;
}





