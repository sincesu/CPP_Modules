#include <iostream>
#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon)
{
	this->name = name;
}

HumanA::~HumanA(){};

void HumanA::attack()
{
	std::cout << getName() << " attacks with their " << _weapon.getType() << std::endl;
}

void HumanA::setName(std::string name)
{
	this->name = name;
}

std::string HumanA::getName()
{
	return name;
}