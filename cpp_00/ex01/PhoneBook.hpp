#pragma once
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contact[8];
        int index;
        int contact_count;
    
    public:
        int getindex();
        PhoneBook();
        ~PhoneBook();
        void addContact(int index);
        std::string getValidInput(std::string prompt, int flag);
        void showlist();
};