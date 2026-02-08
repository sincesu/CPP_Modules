#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap samko("samko");
	ScavTrap kel("kel");
	std::cout << std::endl;
	std::cout << std::endl;
	samko.attack("kel");
	kel.takeDamage(20);
	samko.guardGate();
	kel.beRepaired(20);
	samko.guardGate();
	std::cout << std::endl;
	std::cout << std::endl;
}