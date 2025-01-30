/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:22:17 by mrinkine          #+#    #+#             */
/*   Updated: 2024/11/20 14:04:01 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int fixedpoint_value;
	static const int fraction = 8;

public:
	// Default constructor
	Fixed(void);
	// Int constructor
	Fixed(const int value);
	// Float constructor
	Fixed(const float value);
	// Copy constructor
	Fixed(const Fixed &other);
	// Copy assignment operator
	Fixed &operator=(const Fixed &other);
	// Destructor
	~Fixed(void);

	int getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;

	// The 6 comparison operators: >, <, >=, <=, == and !=.

	bool operator==(const Fixed &fixed) const;
	bool operator!=(const Fixed &fixed) const;
	bool operator<(const Fixed &fixed) const;
	bool operator>(const Fixed &fixed) const;
	bool operator<=(const Fixed &fixed) const;
	bool operator>=(const Fixed &fixed) const;

	// The 4 arithmetic operators: +, -, *, and /.

	Fixed operator+(const Fixed &fixed);
	Fixed operator-(const Fixed &fixed);
	Fixed operator*(const Fixed &fixed);
	Fixed operator/(const Fixed &fixed);

	// The 4 increment/decrement (pre-increment and post-increment, pre-decrement and post-decrement) operators, that will increase or decrease the fixed-point value from the smallest representable ϵ such as 1 + ϵ > 1.

	Fixed &operator++(void);
	Fixed operator++(int);
	Fixed &operator--(void);
	Fixed operator--(int);

	static Fixed &min(Fixed &a, Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static const Fixed &min(const Fixed &a, const Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
