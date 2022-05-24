// Zadanie2.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <time.h>

int randomTo10()
{
    return rand() % 10 + 1; //funkcja random dla przedzia³u od 0 do 9 potem dodajemy +1
}

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    a = randomTo10();
    b = randomTo10();
    c = randomTo10();

    std::cout << a << "\n";
    std::cout << b << "\n";
    std::cout << c << "\n";
    
}

