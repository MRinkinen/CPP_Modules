/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:50:15 by mrinkine          #+#    #+#             */
/*   Updated: 2024/12/11 17:06:10 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Default constructor
FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	SetName("DefautFragTrap");
	SetHitPoints(100);
	SetEnergyPoints(100);
	SetAttackDamage(30);
}
// Constructor
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap " << name << " created" << std::endl;
	SetHitPoints(100);
	SetEnergyPoints(100);
	SetAttackDamage(30);
}

// Copy constructor
FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap " << GetName() << "Copy constructor called" << std::endl;
	*this = other;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << GetName() << ": Destructor called" << std::endl;
}

void FragTrap::highFivesGuys()
{
	if (GetHitPoints() > 0)
	{
		std::cout << "FragTrap " << GetName() << " \"Highfives Guys! :D\"" << std::endl;
	}
	else
		std::cout << "FragTrap: " << GetName() << " cannot Highfive, no hit points left" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
	if (GetHitPoints() > 0)
	{
		if (GetEnergypoints() > 0)
		{
			SetEnergyPoints(GetEnergypoints() - 1);
			std::cout << "FragTrap " << GetName();
			std::cout << " attacks " << target;
			std::cout << " causing " << GetAttackDamage();
			std::cout << " points of damage !" << std::endl;
		}
		else
			std::cout << "FragTrap " << GetName() << "Cannot attack. Not enough energy points" << std::endl;
	}
	else
		std::cout << "FragTrap: " << GetName() << " cannot attack, no hit points left" << std::endl;
}
