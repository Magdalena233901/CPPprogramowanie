// Zadanie4.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

void checkString(std::string word)
{
    char lastChar = '0';
    lastChar = word.back();

    if (word.back() == 'r' && word.length() > 5)
    {
        std::cout << "Wyraz ma wi�cej ni� 5 liter i ko�czy sie na litere 'r'. \n";
    }
    else 
    {
        std::cout << "Wyraz nie ma wi�cej ni� 5 liter i ko�czy sie na litere 'r'. \n";
    }
   }
    


int main()
{
    checkString("rowerrower");
}

