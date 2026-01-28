#pragma once
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
		float toFloat(void);
		int toInt(void);
};