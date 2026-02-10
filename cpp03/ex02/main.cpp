#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap samko("samko");
	FragTrap kel("kel");

	std::cout << std::endl;
	std::cout << std::endl;

	samko.attack("kel");
	kel.takeDamage(31);
	samko.highFivesGuys();
	
	std::cout << std::endl;
	std::cout << std::endl;

	return 0;
}