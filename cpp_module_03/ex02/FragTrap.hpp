/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:50:19 by mrinkine          #+#    #+#             */
/*   Updated: 2024/12/11 17:05:20 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	// Constructors
	FragTrap();
	FragTrap(std::string name);
	// Copy constructor
	FragTrap(const FragTrap &other);
	// Copy assignment operator
	using ClapTrap::operator=;
	// Destructor
	~FragTrap();

	void highFivesGuys();
	void attack(const std::string &target);
};
