// Zad5.8.cpp : Ten plik zawiera funkcj� �main�.W nim rozpoczyna si� i ko�czy wykonywanie programu.
//
#include <iostream>
//dziala ale generalnie spaghetti
void drawText()
{
    char cS[8][8] = {
    {' ',' ',' ' ,'$' ,'$' ,'$' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,' ' ,' ' ,' '},
    {' ','$',' ' ,' ' ,' ' ,' ' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,' ' ,' ' ,' '},
    {' ',' ',' ' ,'$' ,'$' ,' ' ,' ' ,' '},
    {' ',' ',' ' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ',' ' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,'$' ,'$' ,' ' ,' ' ,' '}, };
    char cD[8][8] = {
    {' ',' ','$' ,'$' ,'$' ,' ' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,'$' ,'$' ,' ' ,' ' ,' '}, };
    char cA[8][8] = {
    {' ',' ',' ' ,'$' ,'$' ,' ' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,'$' ,'$' ,'$' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '}, };
    char cHouse[8][8] = {
    {' ',' ',' ' ,'$' ,'$' ,'$' ,'$' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,'$' ,' '},
    {' ','$',' ' ,' ' ,' ' ,' ' ,'$' ,' '},
    {'$',' ',' ' ,' ' ,' ' ,' ' ,' ' ,'$'},
    {'$',' ','$' ,'$' ,'$' ,' ' ,' ' ,'$'},
    {'$',' ','$' ,' ' ,'$' ,' ' ,' ' ,'$'},
    {'$',' ','$' ,' ' ,'$' ,' ' ,' ' ,'$'},
    {'$','$','$' ,'$' ,'$' ,'$' ,'$' ,'$'}, };
    for (int i = 0; i < 8; i++) { // jedna petla for do iteracji po wierszach
        for (int j = 0; j < 8; j++)
        {
            std::cout << cS[i][j];
        }
        for (int j = 0; j < 8; j++)
        {
            std::cout << cD[i][j];
        }
        for (int j = 0; j < 8; j++)
        {
            std::cout << cA[i][j];
        }
        for (int j = 0; j < 8; j++)
        {
            std::cout << cHouse[i][j];
        }
        for (int j = 0; j < 8; j++)
        {
            std::cout << cHouse[i][j];
        }
        std::cout << std::endl;
    }
}
//dziala ale generalnie spaghetti
void drawTextv2()
{
    char charArray[4][8][8] = {
        {{' ',' ',' ' ,'$' ,'$' ,'$' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,' ' ,' ' ,' '},
    {' ','$',' ' ,' ' ,' ' ,' ' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,' ' ,' ' ,' '},
    {' ',' ',' ' ,'$' ,'$' ,' ' ,' ' ,' '},
    {' ',' ',' ' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ',' ' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,'$' ,'$' ,' ' ,' ' ,' '}, },
    {{' ',' ','$' ,'$' ,'$' ,' ' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,'$' ,'$' ,' ' ,' ' ,' '}, },
    {{' ',' ',' ' ,'$' ,'$' ,' ' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,'$' ,'$' ,'$' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,' ' ,' '}, },
    {{' ',' ',' ' ,'$' ,'$' ,'$' ,'$' ,' '},
    {' ',' ','$' ,' ' ,' ' ,'$' ,'$' ,' '},
    {' ','$',' ' ,' ' ,' ' ,' ' ,'$' ,' '},
    {'$',' ',' ' ,' ' ,' ' ,' ' ,' ' ,'$'},
    {'$',' ','$' ,'$' ,'$' ,' ' ,' ' ,'$'},
    {'$',' ','$' ,' ' ,'$' ,' ' ,' ' ,'$'},
    {'$',' ','$' ,' ' ,'$' ,' ' ,' ' ,'$'},
    {'$','$','$' ,'$' ,'$' ,'$' ,'$' ,'$'}, } };
    for (int i = 0; i < 8; i++) // jedna petla for do iteracji po wierszach
    {
        for (int l = 0; l < 4; l++) //tutaj iterujemy po kolejnych literach
        {
            for (int j = 0; j < 8; j++) //nastepnie wyswieltamy znaki dla danej litery w danym wierszu
            {
                std::cout << charArray[l][i][j];
            }
            std::cout << ' ';
        }
        std::cout << std::endl;
    }
}
int main()
{
    drawText();
    drawTextv2();
}