#include <iostream>

#define RESET   "\033[0m"
#define CYAN    "\033[36m"
#define GREEN   "\033[32m"

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << CYAN << "The Memory adress of the string:      " << RESET << &str << std::endl;
	std::cout << CYAN << "The memory address held by stringPTR: " << RESET << stringPTR << std::endl;
	std::cout << CYAN << "The memory address held by stringREF: " << RESET << &stringREF << std::endl;

	std::cout << "                                               " << std::endl;

	std::cout << GREEN << "The value of the string variable:     " << RESET << str << std::endl;
	std::cout << GREEN << "The value pointed to by stringPTR:    " << RESET << *stringPTR << std::endl;
	std::cout << GREEN << "The value of the string variable:     " << RESET << stringREF << std::endl;
}