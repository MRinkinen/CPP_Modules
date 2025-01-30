/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:50:45 by mrinkine          #+#    #+#             */
/*   Updated: 2024/12/20 12:19:09 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	this->brain = new Brain;
}
Dog::Dog(const Dog &other) : Animal(other), brain(new Brain(*other.brain))
{
	*this = other;
}
Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		delete brain;
		brain = new Brain(*other.brain);
	}
	return *this;
}
Dog::~Dog()
{
	delete this->brain;
}
void Dog::makeSound() const
{
	std::cout << "Dog sound: Wuf! Wuf!!" << std::endl;
}

Brain *Dog::getBrain() const
{
	return this->brain;
}
