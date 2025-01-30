/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:14:36 by mrinkine          #+#    #+#             */
/*   Updated: 2024/12/05 14:55:17 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
int main(void)
{
	ClapTrap clapTrap_1("ClapTrap_One");
	ScavTrap scavtrap("ScavTrap_one");
	FragTrap fragTrap;
	FragTrap ft("Frag");

	fragTrap.attack("Target_1");
	std::cout << fragTrap.GetName() << " Energy points: " << fragTrap.GetEnergypoints() << std::endl;
	ft.beRepaired(20);
	ft.takeDamage(50);
	ft.attack("Test target");

	clapTrap_1.attack("Test target");
	clapTrap_1.beRepaired(2);
	scavtrap.guardGate();
	fragTrap.highFivesGuys();
	return 0;
}
