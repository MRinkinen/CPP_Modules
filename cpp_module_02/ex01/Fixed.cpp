/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:21:56 by mrinkine          #+#    #+#             */
/*   Updated: 2024/11/20 11:10:57 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Default constructor
Fixed::Fixed(void) : fixedpoint_value(0)
{
	std::cout << "Default constructor called\n";
}

// Int constructor
Fixed::Fixed(const int value) : fixedpoint_value(value << Fixed::fraction)
{
	std::cout << "Int constructor called\n";
}

// Float constructor
Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called\n";
	this->fixedpoint_value = static_cast<int>(roundf(value * (1 << Fixed::fraction)));
}

// Copy constructor
Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called\n";
	*this = other;
}

// Copy assignment operator
Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called\n";
	this->setRawBits(other.getRawBits());

	return (*this);
}

// Destructor
Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->fixedpoint_value);
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
	return static_cast<float>(this->fixedpoint_value) / static_cast<float>(1 << Fixed::fraction);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}
