/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:50:31 by mrinkine          #+#    #+#             */
/*   Updated: 2024/12/11 17:49:32 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(const std::string &type) : type(type)
{
	std::cout << "Parameterized Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "Default Animal Copy constructor called" << std::endl;
	*this = other;
}

Animal &Animal::operator=(const Animal &other)
{
	this->type = other.getType();
	return *this;
}

Animal::~Animal()
{
	std::cout << "Default Animal destuctor called" << std::endl;
}

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
