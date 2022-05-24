// Zad7.2.cpp : Ten plik zawiera funkcjê „main”. W nim rozpoczyna siê i koñczy wykonywanie programu.
//
#include <iostream>
#include <string>
#include <algorithm>
char dec2HexDigit(int d)
{
    char result;
    if (d < 0 || d>15) //sprawdzamy czy mamy doczynienia z odpowiednim zakresem cyfry hex
        return '-';
    if (d > 9)
    {
        result = d + 'A' - 10;
    }
    else
    {
        result = d + '0'; //???
    }
    return result;
}
//decimal to hexadecimal
std::string dec2Hex(int number)
{
    std::string result;
    do
    {
        int r = number % 16;
        number /= 16;
        result += dec2HexDigit(r);
        //badz
        //result = dec2HexDigit(r) + result; wtedy nie trzeba odwracac
    } while (number > 0);
    //wykorzystanie funkcji z bibiolteki algorithm
    std::reverse(result.begin(), result.end());
    return result;
}
int main()
{
    std::cout << dec2Hex(0) << std::endl;
    std::cout << dec2Hex(30874) << std::endl;
}
