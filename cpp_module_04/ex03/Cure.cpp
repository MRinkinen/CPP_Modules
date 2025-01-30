/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 10:50:48 by mrinkine          #+#    #+#             */
/*   Updated: 2024/12/20 14:30:55 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){}

Cure::~Cure(){}

Cure &Cure::operator=(const Cure &other)
{
	this->type = other.type;
	return (*this);
}

Cure::Cure(const Cure &other) : AMateria("cure")
{
	*this = other;
}

AMateria *Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter &character)
{
	std::cout << "* heals " << character.getName() << "’s wounds *" << std::endl;
}
