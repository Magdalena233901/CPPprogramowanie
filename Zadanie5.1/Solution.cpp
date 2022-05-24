#include "Solution.h"
#include <iostream>


void taskA(int num[], int size)
{
	std::cout << "Zadanie 5.1 part A: " << std::endl;
	for (int i = 0; i < size; i++)
	{
		//std::cout << num[i] << std::endl;
		std::cout << num[i] << "; ";
	}
	std::cout << std::endl;
}

void taskB(int num[], int size)
{
	std::cout << "Zadanie 5.1 part B: " << std::endl;
	for (int i = size -1; i>=0; --i)
	{
		//std::cout << num[i] << std::endl;
		std::cout << num[i] << "; ";
	}
	std::cout << std::endl;
}

void taskC(int num[], int size)
{
	std::cout << "Zadanie 5.1 part C: " << std::endl;
	for (int i = 0; i < size; i+=2)
	{
		//std::cout << num[i] << std::endl;
		std::cout << num[i] << "; ";
	}
	std::cout << std::endl;
}

void taskD(int num[], int size)
{
	std::cout << "Zadanie 5.1 part D: " << std::endl;
	for (int i = 0; i < size; i += 3)
	{
		//std::cout << num[i] << std::endl;
		std::cout << num[i] << "; ";
	}
	std::cout << std::endl;
}

void taskE(int num[], int size)
{
	std::cout << "Zadanie 5.1 part E: " << std::endl;

	int sum = 0;
	for (int i = 0; i < size; i ++)
	{
		sum += num[i];
		//std::cout << num[i] << std::endl;
		std::cout << sum << "; ";
	}
	std::cout << std::endl;
}

void taskF(int num[], int size)
{
	std::cout << "Zadanie 5.1 part F: " << std::endl;
	int sum = 0;
	int k = 0;
	for (int i = size; i >= size -5; i--)
	{
		if (num[i] > 3)
		{
			sum += num[i];
		}
	}
	std::cout << "Suma 5 ostatnich to: " << sum << std::endl;
}


void taskG(int num[], int size)
{
	int sumAll = 0;
	std::cout << "E: " << std::endl;


	int i = 0;
	do
	{
		sumAll += num[i];
		i++;
	} while (sumAll <= 10);

	std::cout << i << std::endl;

}


void taskH(int num[], int size)
{
	std::cout << "Zadanie 5.1 part H: " << std::endl;
	int rand = 0;
	std::cout << "Podaj liczbe n, co ile ma  byc wyswieltane: " << std::endl;
	std::cin >> rand;
	for (int i = 0; i < size; i += rand)
	{
		//std::cout << num[i] << std::endl;
		std::cout << num[i] << "; ";
	}
	std::cout << std::endl;
}

void taskI(int num[], int size)
{
	std::cout << "Zadanie 5.1 part I: " << std::endl;
	int m = 0;
	std::cout << "Podaj liczbe m. dzielnik: " << std::endl;
	std::cin >> m;
	for (int i = 0; i < size; i++)
	{
		if (num[i] % m == 0)
		{
			std::cout << "Podzielne przez m: " << num[i];
		}
		std::cout << std::endl;
	}
}

