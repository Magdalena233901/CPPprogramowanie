// Zadanie4.8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

std::string changeInString(std::string str)
{
    std::swap(str.front(), str.back());
    return str;
}

std::string changeFirstLastChar(std::string str)
{
    char c = str.back();
    str.back() = str.front();
    str.front() = c;
    return str;
}


int main()
{
    std::cout << changeInString("Magda") << std::endl;
    std::cout << changeFirstLastChar("Magda") << std::endl;
}

