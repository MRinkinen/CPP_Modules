/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 10:50:56 by mrinkine          #+#    #+#             */
/*   Updated: 2024/12/20 14:31:05 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){}

Ice::~Ice(){}

Ice &Ice::operator=(const Ice &other)
{
	this->type = other.type;
	return (*this);
}

Ice::Ice(const Ice &other) : AMateria("ice")
{
	*this = other;
}

AMateria *Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter &character)
{
	std::cout << "* shoots an ice bolt at " << character.getName() << " *" << std::endl;
}
