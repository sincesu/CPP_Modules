#include <iostream>
#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(const int value)
{
	setRawBits(value * 256);
}

Fixed::Fixed(const float value)
{
	setRawBits((int)roundf(value * 256));
}

float Fixed::toFloat(void) const
{
	return (num_value / 256.0);
}

int Fixed::toInt(void) const
{
	return (num_value >> bit_value);
}

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	num_value = 0;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	operator=(other);
	//*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->num_value = other.num_value;
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return num_value;
}

void Fixed::setRawBits(int const raw)
{
	num_value = raw;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) 
{
	out << fixed.toFloat();
	
	return out;
}