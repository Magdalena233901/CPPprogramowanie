// Zadanie6.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main(int argc, char* argv[])
{
    // zapissuujac tablice 2-wymiarowa jako char* argv[] uzyskujemy mozliwosc przekazania takeiej tablicy o dowolnych wymiarach
    std::cout << "You have entered " << argc << " arguments: " << std::endl;

    for (int i = 0; i < argc; ++i)
    {
        std::cout << argv[i] << std::endl; //argv[i] pobiera tablice 1-wymiarowa. Taka tablica stanowi pojedynczy argument
    }

    int sum = 0;
    // zakladamy ze uzytkownik podaje tylko 1 cyfre w argymencie
    //liczba argumentow jest dowolna
    for (int i = 1; i < argc; ++i)
    {
        //argv[i] -> i-ty argument jest to tablica char
        //argv[i][0] -> dostajemy sie do pierwsszego zaku i-tego argumentu u¿ytk.
        //std::cout << static_cast<int>(argv[i][0]); // static_cast uzywamy na koonkretnym typie, nie na tablicy
        std::cout << argv[i][0] - '0' << "; ";

        //argv[i][0] -> to zwroci mi pojedynczy char
        //argv[i][0] - '0' -> to wykona mi konwersje z chara na konkretna wartosc - korystajac z tablicy ascii
        //argv[i][0] - '0' -> w tym moemncie char z argv jest zamieniany niejawnie na int, '0' rowniez zamieniane niejawniena int, a nastepnie wykonywana jest operacja odejmowania
        
        sum += argv[i][0] - '0';
    }
    std::cout << sum;
}

