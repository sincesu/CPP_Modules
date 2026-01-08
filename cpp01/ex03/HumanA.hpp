#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanA{
	
	private:
		Weapon &_weapon;
		std::string name;

	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void attack(void);
		void setName(std::string name);
		std::string getName();

};