//Zadanie5.3.cpp : This file contains the 'main' function.Program execution begins and ends there.


#include <iostream>

void zamien(int tab[][4], int w1, int w2)
{
	int t, k;
	for (k = 0; k < 4; k++)
	{
		t = tab[w1][k];
		tab[w1][k] = tab[w2][k];
		tab[w2][k] = t;

	}
}

void printTable(int tab[][4], int dim1)
{

	int w, k;
	for (w = 0; w < dim1; w++)
	{
		for (k = 0; k < 4; k++)
		std::cout << tab[w][k] << " ";
		std::cout << std::endl;

	}

}


	int main()
	{
		int tab[3][4] = { {1,2,3,4}, {5,6}, {1} };

		std::cout << "Tablica przed:\n"; printTable(tab, 3);
		zamien(tab, 0, 1);
		std::cout << "Tablica    po:\n"; printTable(tab, 3);

	}

