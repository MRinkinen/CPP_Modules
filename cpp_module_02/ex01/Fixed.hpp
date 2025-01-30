/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:22:01 by mrinkine          #+#    #+#             */
/*   Updated: 2024/11/11 16:22:02 by mrinkine         ###   ########.fr       */
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
	// Constructors
	Fixed(void);
	Fixed(const int value);
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
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
