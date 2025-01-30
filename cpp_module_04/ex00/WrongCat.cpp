/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 18:04:36 by mrinkine          #+#    #+#             */
/*   Updated: 2024/12/11 18:06:30 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << this->getType() << " constructor called" << std::endl;
}
WrongCat::WrongCat(const WrongCat &other) : WrongAnimal("WrongCat")
{
	std::cout << this->getType() << " copy constructor called" << std::endl;
	*this = other;
}
WrongCat::~WrongCat()
{
	std::cout << this->getType() << " destroyer called" << std::endl;
}
void WrongCat::makeSound() const
{
	std::cout << "WrongCat sound: MioWWWWWsssssssshh!!" << std::endl;
}
