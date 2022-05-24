#include <iostream>
#include "Functions.h"
std::string concatenateStrings(std::string s[], const int len, char c = '\n')
{
    // metoda size() lub length() odnosi si� do klasy string i jest uzywana na obiektach tej klasy
    // ta metoda zwraca dlugosc stringa, a nie wielkosc tablicy typu string
    // w zwiazku z powyzszym nie ma ona wplywu na tablice klasy string
    //
    // metoda size nie dzia�a na tablicy typu string
    // std::cout << s[0].size() << std::endl --> moetoda size dzia�a na obiekcie typu string
    // std::cout << s[0][0]  --> w taki spos�b odnosimy si� do konkretnego chara z danego stringa
    std::string str;
    for (int i = 0; i < len; ++i)
    {
        str += s[i];
        str += c;
    }
    return str;
}
int main()
{
    const int len = 5;
    std::string s[len] = { "Ala", "ma", "kota", "ha", "ha" };
    char c = ' ';
    std::cout << concatenateStrings(s, len, c);
}