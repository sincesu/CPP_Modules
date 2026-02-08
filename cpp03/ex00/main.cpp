#include <iostream>
#include "ClapTrap.hpp"

int main()
{
	ClapTrap samko("samko");
	ClapTrap kel("kel");

	samko.attack("kel");
	kel.takeDamage(10);
	std::cout << "------------------" << std::endl;
	kel.attack("samko");
	kel.beRepaired(-1);
	kel.takeDamage(-1);
	kel.beRepaired(10);
}