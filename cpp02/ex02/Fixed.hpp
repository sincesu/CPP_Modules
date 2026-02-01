#ifndef FIXED_HPP

#define FIXED_HPP

#include <iostream>

class Fixed{
	
	private:
		int num_value;
		static const int bit_value = 8;
	
	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &other);
		Fixed &operator=(const Fixed &other);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		bool operator>(Fixed const &other) const;
		bool operator<(Fixed const &other) const;
		bool operator>=(Fixed const &other) const;
		bool operator<=(Fixed const &other) const;
		bool operator==(Fixed const &other) const;
		bool operator!=(Fixed const &other) const;
		Fixed operator+(Fixed const &other) const;
		Fixed operator-(Fixed const &other) const;
		Fixed operator*(Fixed const &other) const;
		Fixed operator/(Fixed const &other) const;

		Fixed &operator++();
		Fixed operator++(int);
		Fixed &operator--();
		Fixed operator--(int);
		static const Fixed &min(Fixed const &fixed1, Fixed const &fixed2);
		static const Fixed &max(Fixed const &fixed1, Fixed const &fixed2);

		static Fixed &min(Fixed &fixed1, Fixed &fixed2);
		static Fixed &max(Fixed &fixed1, Fixed &fixed2);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif