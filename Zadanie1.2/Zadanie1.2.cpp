// Zadanie1.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Podaj liczbe: " << std::endl;
    int l = 0;
    std::cin >> l;

    if (l % 2)
    {
        std::cout << "Liczba jest nieparzysta";
    }
    else
    {
        std::cout << "Liczba jest parzysta";
    }

}

