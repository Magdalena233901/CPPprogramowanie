// Zadanie1.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Podaj liczbe: " << std::endl;
    int l = 0;
    std::cin >> l;

    if (l > 0)
    {
        std::cout << "Liczba jest wieksza";
    }
    else if (l < 0)
    {
        std::cout << "Liczba jest mniejsza";
    }
    else
    {
        std::cout << "Liczba jest rowna";
    }
}
