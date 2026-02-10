#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap Default Constructor called" <<  std::endl;
	name = "DEFAULT";
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	gate_situation = false;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap Copy Constructor called" <<  std::endl;
	if (this != &other)
		operator=(other);
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		this->gate_situation = other.gate_situation;
	}
	return *this;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap Constructor called" <<  std::endl;
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	gate_situation = false;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" <<  std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->hit_points <= 0)
	{
		std::cout << this->name << " already dead, " << this->name << " can't attack" << std::endl;
		return ;
	}

	if (this->energy_points <= 0)
	{
		std::cout << this->name << " can't attack, " << this->name << " out of energy." << std::endl;
		return ;
	}

	this->energy_points -=1;
	
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing "
	<< attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	if (gate_situation != true)
	{
		std::cout << "Gate Situation activated for " << this->name << std::endl;
		gate_situation = true;
		return ;
	}
	std::cout << "Gate Situation deactivated for " << this->name << std::endl;
	gate_situation = false;
}