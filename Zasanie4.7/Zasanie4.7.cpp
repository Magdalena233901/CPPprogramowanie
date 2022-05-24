// Zad4.7.cpp : Ten plik zawiera funkcjê „main”. W nim rozpoczyna siê i koñczy wykonywanie programu.
//
#include <iostream>
#include <string>
std::string performReplaceInString(std::string str)
{
    if (str.size() >= 6)
        //replace(poczatek, dlugosc, tekst)
        return str.replace(2, 4, "abcd");
    else
        return "Ci¹g jest zbyt ma³y";
}
int main()
{
    std::cout << performReplaceInString("qwert");
}