// Zadanie7.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

bool ifFirst(int a) {
    if (a % 2 == 0)
        return (a == 2); // bo 2 jest jedyna parzysta liczba pierwsza
    for (int i = 3; i <= sqrt(a); i += 2) 
    {
        if (a % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    int a = 0;
    std::cout << "Wpisz liczbe do sprawdzenia czy jest liczba pierwsza:\n";
    std::cin >> a;
    std::cout << "Liczba " << a << (ifFirst(a) ? "" : " nie") << " jest pierwsza\n";
    
}

