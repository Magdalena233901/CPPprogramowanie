// Zad4.7.cpp : Ten plik zawiera funkcj� �main�. W nim rozpoczyna si� i ko�czy wykonywanie programu.
//
#include <iostream>
#include <string>
std::string performReplaceInString(std::string str)
{
    if (str.size() >= 6)
        //replace(poczatek, dlugosc, tekst)
        return str.replace(2, 4, "abcd");
    else
        return "Ci�g jest zbyt ma�y";
}
int main()
{
    std::cout << performReplaceInString("qwert");
}