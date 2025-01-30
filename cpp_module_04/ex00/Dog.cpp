/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:50:45 by mrinkine          #+#    #+#             */
/*   Updated: 2024/12/11 17:52:42 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << this->getType() << " constructor called" << std::endl;
}
Dog::Dog(const Dog &other) : Animal("Dog")
{
	std::cout << this->getType() << " copy constructor called" << std::endl;
	*this = other;
}
Dog::~Dog()
{
	std::cout << this->getType() << " destroyer called" << std::endl;
}
void Dog::makeSound() const
{
	std::cout << "Dog sound: Wuf! Wuf!!" << std::endl;
}
