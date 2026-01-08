#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <ctype.h>
#include <stdlib.h>

PhoneBook::PhoneBook()
{
    index = 0;
    contact_count = 0;
}

PhoneBook::~PhoneBook(){}

int PhoneBook::getindex()
{
    return index;
}

int is_empty(std::string str)
{
    size_t i = 0;
    if (!str.empty())
    {
        while (i < str.length())
        {
            if (str[i] == ' ' || str[i] == '\t')
                return 0;
            i++;
        }
        return 1;
    }
    else
        return 0;
}

int is_printable(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (str[i] >= 32 && str[i] < 127)
            continue;
        else
            return 0;
    }
    return 1;
}

int check(std::string str)
{
    if (is_printable(str) && is_empty(str))
        return 1;
    return 0;
}

int all_isdigit(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (isdigit(str[i]))
            continue;
        else
            return 0;
    }
    return 1;
}

std::string PhoneBook::getValidInput(std::string prompt, int flag)
{
    std::string str;
    while(1)
    {
        std::cout << prompt;
        std::getline(std::cin, str);
        if (std::cin.eof())
            exit(0);
        if (flag == 1)
        {
            if (!all_isdigit(str))
            {
                std::cerr << "Unexpected Input" << std::endl;
                continue;
            }
        }
        if (check(str))
            return str;
        else
            std::cerr << "Unexpected Input" << std::endl;
    }
}

void PhoneBook::addContact(int index)
{
    std::string str;

    str = getValidInput("First Name Gir: ", 0);
    contact[index].setFirstname(str);

    str = getValidInput("Last Name Gir: ", 0);
    contact[index].setLastname(str);

    str = getValidInput("Nick Name Gir: ", 0);
    contact[index].setNickname(str);

    str = getValidInput("Phone Number Gir: ", 1);
    contact[index].setPhonenumber(str);

    str = getValidInput("Darkest Secret Gir: ", 0);
    contact[index].setDarkestSecret(str);
    
    if (contact_count <= 7)
        contact_count += 1;
    this->index += 1;
    if (this->index > 7)
        this->index = this->index % 8;
}

void PhoneBook::showlist()
{
    int i = 0;
    if (this->contact_count == 0)
    {
        std::cout << "Boş" << std::endl;
        return ;
    }

    std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
    while (i < this->contact_count)
    {
        contact[i].print_info(i);
        i++;
    }

    std::string input;
    std::cout << "Görmek istediğin indexi yaz: ";
    std::getline(std::cin, input);
    if (std::cin.eof())
        exit(0);

    if (input.empty() || !all_isdigit(input) || input[0] == '-')
    {
        std::cout << "Invalid index format. " << std::endl;
        return ;
    }

    int view = std::atoi(input.c_str());

    if (i > view)
        contact[view].print_selected_info(view);
    else
        std::cerr << "Bad input" << std::endl;
}

int main()
{
    PhoneBook phonebook;
    std::string str;
    while (1)
    {
        std::cout << "PhoneBook: ";
        std::cout << "Usage: ADD | SEARCH | EXIT" << std::endl;
        std::cout << "PhoneBook: ";
        std::getline(std::cin, str);
        if (std::cin.eof())
            exit(0);
        if (str == "ADD")
            phonebook.addContact(phonebook.getindex());
        else if (str == "SEARCH")
        {
            phonebook.showlist();
        }
        else if (str == "EXIT")
            exit(0);
        else
        {
            std::cerr << "Bad Input Try Again" << std::endl;
            continue;
        }
    }
}