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
	num_value = 0;
}

Fixed::Fixed(const Fixed &other)
{
	operator=(other);
}

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
		this->num_value = other.num_value;
	return *this;
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits(void) const
{
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

const Fixed &Fixed::min(Fixed const &fixed1, Fixed const &fixed2)
{
	if (fixed1 < fixed2)
		return fixed1;
	return fixed2;
}

const Fixed &Fixed::max(Fixed const &fixed1, Fixed const &fixed2)
{
	if (fixed1 > fixed2)
		return fixed1;
	return fixed2;
}

Fixed &Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 < fixed2)
		return fixed1;
	return fixed2;
}

Fixed &Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 > fixed2)
		return fixed1;
	return fixed2;
}

bool Fixed::operator>(Fixed const &other) const
{
	return (this->num_value > other.num_value);
}

bool Fixed::operator<(Fixed const &other) const
{
	return (this->num_value < other.num_value);
}

bool Fixed::operator>=(Fixed const &other) const
{
	return (this->num_value >= other.num_value);
}

bool Fixed::operator<=(Fixed const &other) const
{
	return (this->num_value <= other.num_value);
}

bool Fixed::operator==(Fixed const &other) const
{
	return (this->num_value == other.num_value);
}

bool Fixed::operator!=(Fixed const &other) const
{
	return (this->num_value != other.num_value);
}

Fixed Fixed::operator+(Fixed const &other) const
{
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(Fixed const &other) const
{
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(Fixed const &other) const
{
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(Fixed const &other) const
{
	return Fixed(this->toFloat() / other.toFloat());
}

Fixed &Fixed::operator++()
{
	this->num_value++;
	
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = Fixed(*this);

	this->num_value++;

	return tmp;
}

Fixed &Fixed::operator--()
{
	this->num_value--;

	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = Fixed(*this);

	this->num_value--;

	return tmp;
}