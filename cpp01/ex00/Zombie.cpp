#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name){
    this->name = name;
    std::cout << "Zombie " << this->name << " created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->name << " deleted" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << " BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName(void)
{
    return name;
}