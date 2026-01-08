#include <iostream>
#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie* z = new Zombie(name);
	std::cout << z->getName() << ":";
	z->announce();
    return z;
}