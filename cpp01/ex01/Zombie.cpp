#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::~Zombie(){}

void Zombie::setName(std::string name)
{
	this->name = name;
}

std::string Zombie::getName(void)
{
	return name;
}

void Zombie::announce(void)
{
    std::cout << " BraiiiiiiinnnzzzZ..." << std::endl;
}