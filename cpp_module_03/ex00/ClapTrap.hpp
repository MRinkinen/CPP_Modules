/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:02:47 by mrinkine          #+#    #+#             */
/*   Updated: 2024/12/05 14:28:25 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
private:
	std::string _name;
	unsigned int _hitPoints;
	unsigned int _energyPoints;
	unsigned int _attackDamage;

public:
	// Default constructor
	ClapTrap(void);
	ClapTrap(std::string name);
	// Copy constructor
	ClapTrap(const ClapTrap &other);
	// Copy assignment operator
	ClapTrap &operator=(const ClapTrap &other);
	// Destructor
	~ClapTrap(void);

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	std::string GetName(void) const;
	int GetHitPoints(void) const;
	int GetEnergypoints(void) const;
	int GetAttackDamage(void) const;

	void SetName(const std::string name);
	void SetHitPoints(const unsigned int amount);
	void SetEnergyPoints(const unsigned int amount);
	void SetAttackDamage(const unsigned int amount);
};
