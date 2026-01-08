#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	this->name = name;
	weapon = NULL;
};

HumanB::~HumanB(){};

void HumanB::attack()
{
	if (weapon == NULL)
	{
		std::cout << "I don't have a gun" << std::endl;
		return ;
	}
	std::cout << getName() << " attacks with their " << weapon->getType() << std::endl;
}

void HumanB::setName(std::string name)
{
	this->name = name;
}

std::string HumanB::getName()
{
	return name;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

std::string HumanB::getWeapon(void)
{
	return weapon->getType();
}