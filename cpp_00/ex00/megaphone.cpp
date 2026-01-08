#include <iostream>

void word_upper(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        str[i] = std::toupper(str[i]);
        std::cout << str[i]; 
    }
}

int main(int ac, char **av)
{
    if (ac < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        for (int i = 1; i < ac; i++)
            word_upper(av[i]);
        }
    std::cout << std::endl;
    return 0;
}