/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 18:03:54 by mrinkine          #+#    #+#             */
/*   Updated: 2024/12/11 18:05:25 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type)
{
	std::cout << "Default WrongAnimal constructor called" << std::endl;
	this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "Default WrongAnimal Copy constructor called" << std::endl;
	*this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	this->type = other.getType();
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Default WrongAnimal destuctor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Default WrongAnimal sound!!" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}

void WrongAnimal::setType(std::string type)
{
	this->type = type;
}
