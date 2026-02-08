#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	name = "DEFAULT";
	std::cout << "ClapTrap Default Constructor called" << std::endl;
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name){
	std::cout << "ClapTrap Constructor called" << std::endl;
	this->name = name;
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	if (this != &other)
		operator=(other);
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		this->hit_points = other.hit_points;
		this->energy_points = other.energy_points;
		this->name = other.name;
		this->attack_damage = other.attack_damage;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
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
	
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing "
	<< attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if ((int)amount < 0)
	{
		std::cerr << "Invalid input" << std::endl;
		return ;
	}
	if (this->hit_points <= 0)
	{
		std::cout << this->name << " already dead, you can't attack him." << std::endl;
		return ;
	}

	std::cout << "ClapTrap " << this->name << " took "
	<< amount << " damage." << std::endl;

	this->hit_points -= amount;
	
	if (this->hit_points <= 0)
		std::cout << this->name << " dead" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if ((int)amount < 0)
	{
		std::cerr << "Invalid input" << std::endl;
		return ;
	}
	if (this->hit_points <= 0)
	{
		std::cout << this->name << " already dead, can't repair itself" << std::endl;
		return ;
	}

	if (this->energy_points <= 0)
	{
		std::cout << this->name << " can't repair itself, " << this->name << " out of energy." << std::endl;
		return ;
	}

	this->energy_points -=1;
	this->hit_points += amount;
	std::cout << "ClapTrap " << this->name << " healed himself for "
	<< amount << " hit points." << std::endl; 
}
