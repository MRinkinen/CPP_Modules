/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:10:26 by mrinkine          #+#    #+#             */
/*   Updated: 2024/12/11 17:07:30 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#pragma region Constructors and Destructors

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	this->_name = "DefautTrap";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << "ClapTrap constructor called. Created ClapTrap: " << name << std::endl;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	this->SetName(other.GetName());
	this->SetHitPoints(other.GetHitPoints());
	this->SetEnergyPoints(other.GetEnergypoints());
	this->SetAttackDamage(other.GetAttackDamage());
	std::cout << "Copying ClapTrap ";
	std::cout << "Name: " << this->GetName();
	std::cout << " Hit points " << this->GetHitPoints();
	std::cout << " Energy points " << this->GetEnergypoints();
	std::cout << " Damage " << this->GetAttackDamage() << std::endl;
	return *this;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->_name << ": Destructor called" << std::endl;
}
#pragma endregion
#pragma region Member functions

void ClapTrap::attack(const std::string &target)
{
	if (_hitPoints > 0)
	{
		if (_energyPoints > 0)
		{
			std::cout << "ClapTrap " << _name;
			std::cout << " attacks " << target;
			std::cout << " causing " << _attackDamage;
			std::cout << " points of damage !" << std::endl;
			_energyPoints--;
		}
		else
			std::cout << "Cannot attack. Not enough energy points" << std::endl;
	}
	else
	{
		std::cout << this->_name << " Cannot attack, no hit points left" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > this->_hitPoints)
	{
		this->_hitPoints = 0;
		std::cout << this->_name << " Taking damage: " << amount << ". No hit points left!!!" << std::endl;
	}
	else
	{
		_hitPoints -= amount;
		std::cout << this->_name << " Taking damage: " << amount << " Hitpoints left: " << _hitPoints << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints > 0)
	{
		if (_energyPoints > 0)
		{
			_energyPoints--;
			_hitPoints += amount;
			std::cout << this->_name << " repairing " << amount;
			std::cout << " Hitpoints: " << _hitPoints;
			std::cout << " Energy points left: " << _energyPoints << std::endl;
		}
		else
		{
			std::cout << this->_name << " Cannot repair, no energy points left" << std::endl;
		}
	}
	else
	{
		std::cout << this->_name << " Cannot repair, no hit points left" << std::endl;
	}
}
#pragma endregion
#pragma region Getters and Setters

std::string ClapTrap::GetName(void) const
{
	return this->_name;
}

int ClapTrap::GetHitPoints(void) const
{
	return this->_hitPoints;
}
int ClapTrap::GetEnergypoints(void) const
{
	return this->_energyPoints;
}

int ClapTrap::GetAttackDamage(void) const
{
	return this->_attackDamage;
}

void ClapTrap::SetName(const std::string name)
{
	this->_name = name;
}

void ClapTrap::SetHitPoints(const unsigned int amount)
{
	this->_hitPoints = amount;
}

void ClapTrap::SetEnergyPoints(const unsigned int amount)
{
	this->_energyPoints = amount;
}

void ClapTrap::SetAttackDamage(const unsigned int amount)
{
	this->_attackDamage = amount;
}
#pragma endregion
