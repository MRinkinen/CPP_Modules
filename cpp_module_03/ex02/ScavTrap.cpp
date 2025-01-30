/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:26:16 by mrinkine          #+#    #+#             */
/*   Updated: 2024/12/11 17:07:52 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Default constructor
ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	SetName("DefautScavTrap");
	this->isGateKeeper = false;
	SetHitPoints(100);
	SetEnergyPoints(50);
	SetAttackDamage(20);
}
// Constructor
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap: " << name << " created" << std::endl;
	this->isGateKeeper = false;
	SetHitPoints(100);
	SetEnergyPoints(50);
	SetAttackDamage(20);
}

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap: " << GetName() << "Copy constructor called" << std::endl;
	*this = other;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: " << GetName() << ": Destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
	if (GetHitPoints() > 0)
	{
		if (!isGateKeeper)
		{
			std::cout << "ScavTrap: " << GetName() << " is now in Gate keeper mode" << std::endl;
			this->isGateKeeper = true;
		}
		else
		{
			std::cout << "ScavTrap: " << GetName() << " is not in Gate keeper mode anymore" << std::endl;
			this->isGateKeeper = false;
		}
	}
	else
		std::cout << "ScavTrap: " << GetName() << " cannot gatekeep. No hitpoints left" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (GetHitPoints() > 0)
	{
		if (GetEnergypoints() > 0)
		{
			SetEnergyPoints(GetEnergypoints() - 1);
			std::cout << "ScavTrap: " << GetName();
			std::cout << " attacks " << target;
			std::cout << " causing " << GetAttackDamage();
			std::cout << " points of damage !" << std::endl;
		}
		else
			std::cout << "ScavTrap; " << GetName() << " cannot attack. Not enough energy points" << std::endl;
	}
	else
		std::cout << "ScavTrap: " << GetName() << " cannot attack, no hit points left" << std::endl;
}
