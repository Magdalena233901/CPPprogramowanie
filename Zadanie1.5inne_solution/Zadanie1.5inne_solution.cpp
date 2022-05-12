// Zadanie1.5inne_solution.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

bool Palindrom(std::string word)
{
    int i = 0;
    int j = word.size() - 1;    for (; i < j; i++, j--)
    {
        if (word[i] != word[j])
            return false;
    }
    return true;
}
int main()
{
    std::cout << std::boolalpha << Palindrom("ADA");
}