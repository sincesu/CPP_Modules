#pragma once

#include <iostream>

class Contact
{
    private:
        std::string first_name, last_name;
        std::string nick_name, phone_number, darkest_secret;

    public:
        std::string getFirstname();
        std::string getLastname();
        std::string getNickname();
        std::string getPhonenumber();
        std::string getDarkestSecret();
        
        std::string check_info(std::string str);
        void print_info(int i);
        void print_selected_info(int i);
        void setFirstname(std::string first_name);
        void setLastname(std::string last_name);
        void setNickname(std::string nick_name);
        void setPhonenumber(std::string phone_number);
        void setDarkestSecret(std::string darkest_secret);
};