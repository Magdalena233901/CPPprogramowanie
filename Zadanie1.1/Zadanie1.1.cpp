// Zadanie1.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>



int main()
{
    int a = 3;
    int b = 66;
    int c = -8;

    if ((a > b) && (a > c))
    {
        std::cout << "Najwieksza: " << a << std::endl;
    }
    else if ((b > a) && (b > c))
    {
        std::cout << "Najwieksza: " << b << std::endl;
    }
    else
    {
        std::cout << "Najwieksza: " << c << std::endl;
    }
}

