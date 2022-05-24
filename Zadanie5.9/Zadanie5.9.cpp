// Zadanie5.9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <algorithm>
#include <math.h>
void revertCharArray(char tab[][3])
{
    //tworzymy nowa tablice 3x3
    char findings[3][3];
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            //przypisujemy od konca do poczatku
            findings[i][j] = tab[3 - i - 1][3 - j - 1];
            std::cout << findings[i][j];
        }
        std::cout << std::endl;
    }
}
//3x3
//
void revertCharArrayv2(char tab[][3])
{
    int rM = ceil(3 / 2.0);
    for (int i = 0; i < rM; ++i)
    {
        if (i == rM - 1)
        {
            for (int j = 0; j < rM; ++j)
            {
                std::swap(tab[i][j], tab[3 - i - 1][3 - j - 1]);
            }
        }
        else
        {
            for (int j = 0; j < 3; ++j)
            {
                std::swap(tab[i][j], tab[3 - i - 1][3 - j - 1]);
            }
        }
    }
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            std::cout << tab[i][j];
        }
        std::cout << std::endl;
    }
}
int main()
{
    const int size = 3;
    char tab[size][size] =
    { {'a', 'b', 'c'},
      {'d', 'e', 'f'},
      {'*', '#', '$'} };
    //3->2
    //[a b c d
    // e f g h
    // i j k l
    // m n o p]
    //4->2
    revertCharArray(tab);
    revertCharArrayv2(tab);
}