/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:21:42 by mrinkine          #+#    #+#             */
/*   Updated: 2024/11/13 15:30:33 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
private:
	int fixedpoint_value;
	static const int fraction = 8;

public:
	// Default constructor
	Fixed(void);
	// Copy constructor
	Fixed(const Fixed &other);
	// Copy assignment operator
	Fixed &operator=(const Fixed &other);
	// Destructor
	~Fixed(void);

	int getRawBits(void) const;
	void setRawBits(int const raw);
};
