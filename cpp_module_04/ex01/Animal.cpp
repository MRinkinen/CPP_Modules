/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:50:31 by mrinkine          #+#    #+#             */
/*   Updated: 2024/12/20 13:03:26 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {}

Animal::Animal(const std::string &type) : type(type) {}

Animal::Animal(const Animal &other)
{
	*this = other;
}

Animal &Animal::operator=(const Animal &other)
{
	this->type = other.getType();
	return *this;
}

Animal::~Animal() {}

void Animal::makeSound() const
{
	std::cout << "Default Animal sound!!" << std::endl;
}

std::string Animal::getType() const
{
	return this->type;
}

void Animal::setType(std::string type)
{
	this->type = type;
}
