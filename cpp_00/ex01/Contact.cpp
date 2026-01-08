#include <iostream>
#include "Contact.hpp"

std::string Contact::check_info(std::string str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return std::string(10 - str.length(), ' ') + str;
}

void Contact::print_selected_info(int i)
{
    if (i <= 7 && i >= 0)
    {
        std::cout << "First Name:     " << first_name << std::endl;
        std::cout << "Last Name:      " << last_name << std::endl;
        std::cout << "Nickname:       " << nick_name << std::endl;
        std::cout << "Phone Number:   " << phone_number << std::endl;
        std::cout << "Darkest Secret: " << darkest_secret << std::endl;
    }
}

void Contact::print_info(int i)
{  
    std::cout << "         " << i << "|"
    << check_info(first_name) << "|"
    << check_info(last_name) << "|"
    << check_info(nick_name) << std::endl;
}

void Contact::setFirstname(std::string first_name)
{
    this->first_name = first_name;
}

void Contact::setLastname(std::string last_name)
{
    this->last_name = last_name;
}

void Contact::setNickname(std::string nick_name)
{
    this->nick_name = nick_name;
}

void Contact::setPhonenumber(std::string phone_number)
{
    this->phone_number = phone_number;
}

void Contact::setDarkestSecret(std::string darkest_secret)
{
    this->darkest_secret = darkest_secret;
}

std::string Contact::getFirstname()
{
    return first_name;
}

std::string Contact::getLastname()
{
    return last_name;
}

std::string Contact::getNickname()
{
    return nick_name;
}

std::string Contact::getPhonenumber()
{
    return phone_number;
}

std::string Contact::getDarkestSecret()
{
    return darkest_secret;
}