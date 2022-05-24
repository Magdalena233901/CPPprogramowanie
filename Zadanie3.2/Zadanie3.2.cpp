// Zadanie3.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Function.h"

int main()
{
    // tutaj testujemy int power
    // nalezy pamietac o tym, ¿eby sprawdzaæ wszystkie mozliwe przypadki

    std::cout << "Funkcja int power: " << std::endl;
    std::cout << power(3, -1) << std::endl;
    std::cout << power(2, 2) << std::endl;
    std::cout << power(3, 5) << std::endl;
    std::cout << power(3, 0) << std::endl;
    std::cout << power(3, 1) << std::endl;

    // tutaj testujemy float power
    // nalezy pamietac o tym, ¿eby sprawdzaæ wszystkie mozliwe przypadki

    std::cout << "Funkcja float power: " << std::endl;
    std::cout << power(3.0f, -1.0f) << std::endl;
    std::cout << power(2.0f, 2.0f) << std::endl;
    std::cout << power(3.0f, 5.0f) << std::endl;
    std::cout << power(3.0f, 0.0f) << std::endl;
    std::cout << power(3.0f, 1.0f) << std::endl;


    std::cout << "Funkcja double power: " << std::endl;
    std::cout << power(3, -1) << std::endl;
    std::cout << power(2, 2) << std::endl;
    std::cout << power(3, 5) << std::endl;
    std::cout << power(3, 0) << std::endl;
    std::cout << power(3, 1) << std::endl;
}

