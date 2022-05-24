// Zad4.6.cpp : Ten plik zawiera funkcjê „main”.W nim rozpoczyna siê i koñczy wykonywanie programu.
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