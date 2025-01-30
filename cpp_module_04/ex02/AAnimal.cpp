/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:50:31 by mrinkine          #+#    #+#             */
/*   Updated: 2024/12/20 13:00:38 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() {}

AAnimal::AAnimal(const std::string &type) : type(type) {}

AAnimal::AAnimal(const AAnimal &other)
{
	*this = other;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
	this->type = other.getType();
	return *this;
}

AAnimal::~AAnimal() {}

void AAnimal::makeSound() const
{
	std::cout << "Default Animal sound!!" << std::endl;
}

std::string AAnimal::getType() const
{
	return this->type;
}

void AAnimal::setType(std::string type)
{
	this->type = type;
}
