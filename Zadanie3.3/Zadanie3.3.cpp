// Zadanie3.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Function.h"

int main()
{
    std::cout << "Funkcja multiply 2 argumenty: " << std::endl;
    std::cout << multiply(3.5, -1.5) << std::endl;
    std::cout << multiply(5, -10) << std::endl;
    std::cout << multiply(5, 0) << std::endl;

    std::cout << "Funkcja multiply 3 argumenty: " << std::endl;
    std::cout << multiply(3.5, -1.5, 3) << std::endl;
    std::cout << multiply(5, -10, 3) << std::endl;
    std::cout << multiply(5, 0, 3) << std::endl;

    std::cout << "Funkcja multiply 4 argumenty: " << std::endl;
    std::cout << multiply(3, -1, 3, 5) << std::endl;
    std::cout << multiply(5, -10, 3, 5) << std::endl;
    std::cout << multiply(5, 0, 3, 5) << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
