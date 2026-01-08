#pragma once
#include <iostream>

class Weapon
{
	private:
		std::string type;

	public:
		Weapon(std::string type);
		~Weapon();
		void setType(std::string type);
		const std::string &getType(void);

};