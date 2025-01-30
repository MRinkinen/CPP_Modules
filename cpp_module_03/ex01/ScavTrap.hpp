/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:26:23 by mrinkine          #+#    #+#             */
/*   Updated: 2024/12/11 17:05:40 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	bool isGateKeeper;

public:
	// Constructors
	ScavTrap();
	ScavTrap(std::string name);
	// Copy constructor
	ScavTrap(const ScavTrap &other);
	// Copy assignment operator
	using ClapTrap::operator=;
	// Destructor
	~ScavTrap();

	void guardGate();
	void attack(const std::string &target);
};
