//guess.cc
//A program that prints a sencence that depends of the number that someone gives to the program, informing if the number is the same that the person needs to discover or if it is lower or higher

#include <iostream>
#include <cstdlib>
#include <ctime>


int main()
{
	int i, n, n1;

	srand(time(NULL));
	n = rand();
	while(i!=n1)
	{
		std::cout << "Introduzca un numero: ";
		std::cin >> i;
    	
		n1 = (n % 10) + 1;

		if(i<n1)
		{
			std::cout << "El numero que debe adivinar es mayor \n";
		}
		else if(i>n1)
		{
			std::cout << "El numero que debe adivinar es menor \n";
		}
	}
	std::cout << "¡Ha adivinado el numero!\n";
	return 0;
}