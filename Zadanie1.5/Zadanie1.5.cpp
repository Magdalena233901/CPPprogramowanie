// Zadanie1.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Palindrom np: kajak, oko, Ada

#include <iostream>
#include <string>

bool palindrom(std::string str)
{
	int dl = str.size();
	for (int i = 0; i < dl / 2; i++) // tutaj dzielenie przez 2, bo optymalizuje kod. nie ma sensu sprawdzaæ calego wyrazu - bo po³ juz sprawdzlilismy od prozdu i pol od tylu
	{
		if (str.at(i) != str.at(dl - i - 1)) // metoda .at
	    //if (str.at(i) != str[(dl - i - 1)] 
		{
			return false;
		}
	
	}
	return true;
}


int main()
{
	std::string tekst = {};
	std::cout << "Podaj tekst: ";
	std::cin >> tekst;

	std::cout << palindrom(tekst) << std::endl;

	std::cout << palindrom("KAJAK") << std::endl;
	std::cout << palindrom("MAGDA") << std::endl;
	std::cout << palindrom("ANNA") << std::endl;
}
