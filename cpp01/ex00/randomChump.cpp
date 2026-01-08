#include <iostream>
#include "Zombie.hpp"

void randomChump(std::string name)
{
    Zombie z(name);
	std::cout << z.getName() << ":";
	z.announce();
}