#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanB{

	private:
		Weapon *weapon;
		std::string name;

	public:
		HumanB(std::string name);
		~HumanB();
		void attack(void);
		void setName(std::string name);
		std::string getName();
		void setWeapon(Weapon &weapon);
		std::string getWeapon(void);

};