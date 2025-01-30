/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:50:37 by mrinkine          #+#    #+#             */
/*   Updated: 2024/12/11 17:47:54 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << this->getType() << " constructor called" << std::endl;
}
Cat::Cat(const Cat &other) : Animal("Cat")
{
	std::cout << this->getType() << " copy constructor called" << std::endl;
	*this = other;
}
Cat::~Cat()
{
	std::cout << this->getType() << " destroyer called" << std::endl;
}
void Cat::makeSound() const
{
	std::cout << "Cat sound: MEOWWWWWWWW!!" << std::endl;
}
