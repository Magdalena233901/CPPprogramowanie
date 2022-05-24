// Zadanie5.5B.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// rysowanie trojkata prostokatnego
void drawFigureA(int l)
{
    for (int i = 0; i < l; i++) //przechodzenie po wierszach
    {
      
            for (int k = 0; k <= i; k++) // licz wykonan petli zagniezdzonej jest zalezna od aktualnej wartosci i
            {
                std::cout << ' '; //rysujemy pojedyncza gwiazdke
            }
        std::cout << '*' << std::endl; //po narysowaniu w danej linii/wierszu przechodzimy do nastepnego wiersza
    }
}

bool isBeginnigOrEnd(const int iteration, const int length) {
    return iteration == 0 || iteration == length;
}

void drawC(int h) {
    for (int i = 0; i <= h; i++) {
        for (int j = 0; j <= h; j++) {
            if (j == i || j == h - i) {
                std::cout << '*';
            }
            else {
                std::cout << ' ';
            }
        }
        std::cout << std::endl;
    }
}

void drawD(int h) {
    for (int i = 0; i <= h; i++) {
        for (int j = h; j >= 0; j--) {
            if (isBeginnigOrEnd(i, h)) {
                std::cout << '*';
            }
            else {
                if (isBeginnigOrEnd(j, h)) {
                    std::cout << '*';
                }
                else {
                    std::cout << ' ';
                }
            }
        }
        std::cout << std::endl;
    }
}


int main()
{
    drawFigureA(10);
    drawC(10);
    drawD(20);
}