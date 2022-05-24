// Zadanie5.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int main()
    {
        const unsigned short tabSize = 10;
        double tab[tabSize][tabSize] = {};

        int value = 1;
        for (int i = 0; i < tabSize; ++i)
        {
            for (int k = 0; k < tabSize; k++)
            {

                tab[i][k] = static_cast<double>(value);
                std::cout << tab[i][k] << " ";
                value += 1;

            }
        }
}

