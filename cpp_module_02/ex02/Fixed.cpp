/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:22:14 by mrinkine          #+#    #+#             */
/*   Updated: 2024/11/20 14:04:07 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Default constructor
Fixed::Fixed(void) : fixedpoint_value(0)
{
	// std::cout << "Default constructor called\n";
}

// Int constructor
Fixed::Fixed(const int value) : fixedpoint_value(value << Fixed::fraction)
{
	// std::cout << "Int constructor called\n";
}

// Float constructor
Fixed::Fixed(const float value)
{
	// std::cout << "Float constructor called\n";
	this->fixedpoint_value = (int)roundf(value * (1 << Fixed::fraction));
}

// Copy constructor
Fixed::Fixed(const Fixed &other)
{
	// std::cout << "Copy constructor called\n";
	*this = other;
}

// Copy assignment operator
Fixed &Fixed::operator=(const Fixed &other)
{
	// std::cout << "Copy assignment operator called\n";
	this->setRawBits(other.getRawBits());
	return (*this);
}

// Destructor
Fixed::~Fixed(void)
{
	// std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called\n";
	return this->fixedpoint_value;
}

void Fixed::setRawBits(int const raw)
{
	this->fixedpoint_value = raw;
}

float Fixed::toFloat(void) const
{
	return static_cast<float>(fixedpoint_value) / (1 << fraction);
}

int Fixed::toInt(void) const
{
	return (static_cast<float>(this->fixedpoint_value) / static_cast<float>(1 << Fixed::fraction));
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}

bool Fixed::operator==(const Fixed &fixed) const { return (fixedpoint_value == fixed.fixedpoint_value); }
bool Fixed::operator!=(const Fixed &fixed) const { return (fixedpoint_value != fixed.fixedpoint_value); }
bool Fixed::operator<(const Fixed &fixed) const { return (fixedpoint_value < fixed.fixedpoint_value); }
bool Fixed::operator>(const Fixed &fixed) const { return (fixedpoint_value > fixed.fixedpoint_value); }
bool Fixed::operator<=(const Fixed &fixed) const { return (fixedpoint_value <= fixed.fixedpoint_value); }
bool Fixed::operator>=(const Fixed &fixed) const { return (fixedpoint_value >= fixed.fixedpoint_value); }

Fixed Fixed::operator+(const Fixed &fixed)
{
	Fixed return_value;

	return_value.setRawBits((this->getRawBits() + fixed.getRawBits()) >> Fixed::fraction);
	return return_value;
}

Fixed Fixed::operator-(const Fixed &fixed)
{
	Fixed return_value;

	return_value.setRawBits((this->getRawBits() - fixed.getRawBits()) >> Fixed::fraction);
	return return_value;
}

Fixed Fixed::operator*(const Fixed &fixed)
{
	Fixed return_value;

	return_value.setRawBits((this->getRawBits() * fixed.getRawBits()) >> Fixed::fraction);
	return return_value;
}

Fixed Fixed::operator/(const Fixed &fixed)
{
	Fixed return_value;

	if (fixed.getRawBits() == 0)
	{
		std::cout << "Error: Division by zero!";
		exit(1);
	}
	return_value.setRawBits((this->getRawBits() / fixed.getRawBits()) >> Fixed::fraction);
	return return_value;
}

// prefix increment
Fixed &Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return *this;
}

// postfix increment
Fixed Fixed::operator++(int)
{
	Fixed old = *this;
	Fixed::operator++();
	return old;
}

// prefix decrement
Fixed &Fixed::operator--(void)
{
	this->setRawBits(this->getRawBits() - 1);
	return *this;
}

// postfix decrement
Fixed Fixed::operator--(int)
{
	Fixed old = *this;
	Fixed::operator--();
	return old;
}

// Static function to find the smallest, takes non - const references, returns a reference to the smallest static
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	return b;
}

// Static function to find the smallest, takes const references, returns a const reference to the smallest
const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return a;
	return b;
}

// Static function to find the largest, takes non-const references, returns a reference to the greatest
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	return b;
}

// Static function to find the largest, takes const references, returns a const reference to the greatest
const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return a;
	return b;
}
