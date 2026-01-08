#include <iostream>
#include "Zombie.hpp"

int main()
{
	Zombie *z = zombieHorde(5, "samet");
	delete[] z;
}