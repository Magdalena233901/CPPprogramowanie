// Zad4.6.cpp : Ten plik zawiera funkcj� �main�.W nim rozpoczyna si� i ko�czy wykonywanie programu.
//
#include <iostream>
std::string toLowerCase(std::string str) {
    for (int i = 0; i < str.size(); i++) {
        str.at(i) = std::tolower(str.at(i));
    }
    return str;
}
int main()
{
    std::cout << toLowerCase("ABcDeF");
}