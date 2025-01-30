/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:50:37 by mrinkine          #+#    #+#             */
/*   Updated: 2024/12/20 13:18:28 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat")
{
	this->brain = new Brain;
}
Cat::Cat(const Cat &other) : AAnimal("Cat")
{
	*this = other;
}
Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		AAnimal::operator=(other);
		delete brain;
		brain = new Brain(*other.brain);
	}
	return *this;
}
Cat::~Cat()
{
	delete this->brain;
}
void Cat::makeSound() const
{
	std::cout << "Cat sound: MEOWWWWWWWW!!" << std::endl;
}

Brain *Cat::getBrain() const
{
	return this->brain;
}
