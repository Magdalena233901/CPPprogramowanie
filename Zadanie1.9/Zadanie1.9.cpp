// Zadanie1.9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <time.h>

int main()
{
    float number = 0.00;
    srand(time(NULL)); // funkcja srand zmienia ziarno losowania - inicjalizacja ziarna funkcji pseudolosowej

    do
    {
        number = rand() / 1000.0f;
        std::cout << "Wyswietlana liczba to: " << number << std::endl; // rand() - generowanie tej liczby       
   
       
    } 
    while (number > 0.03);
 }

