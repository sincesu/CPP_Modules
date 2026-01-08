#include <iostream>
#include "Zombie.hpp"

int main()
{
    Zombie* samko = newZombie("Samet");
    randomChump("Chump");
    delete samko;
    return 0;
}