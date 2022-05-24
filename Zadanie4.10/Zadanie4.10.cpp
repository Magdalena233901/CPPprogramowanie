// nie o to chodzi³o w tym zadaniu

#include <iostream>
#include <string>

void separation(std::string str, char c = 'a')
{
    for (int i = 0; i < str.length(); i++)
    {
        std::cout << str[i];
        std::cout << c;
    }
}

int main()
{
    separation("LLLLLLLLLLLLL");
    std::cout << std::endl;
    separation("Slonecznie", '*');
    std::cout << std::endl;


}