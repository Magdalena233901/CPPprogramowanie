#include <ctype.h>
#include <iostream>
#include <string>

bool checkFirstCountryChar(std::string countryName)
{
    char firstChar = '0';
    firstChar = countryName.front();

    if (isupper(firstChar))
    {
        return 1;
    }
    return 0;
}

int main()
{
    std::cout << checkFirstCountryChar("Polska") << std::endl;
    std::cout << checkFirstCountryChar("polska");
}