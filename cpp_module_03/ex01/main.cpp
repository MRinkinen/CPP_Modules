/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:14:36 by mrinkine          #+#    #+#             */
/*   Updated: 2024/12/05 14:47:58 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap clapTrap_1("ClapTrap_One");
	ScavTrap scavtrap("ScavTrap_one");

	scavtrap.guardGate();
	scavtrap.guardGate();
	scavtrap.guardGate();

	scavtrap.takeDamage(34);
	scavtrap.takeDamage(34);
	scavtrap.takeDamage(34);
	scavtrap.takeDamage(34);
	scavtrap.takeDamage(34);
	scavtrap.takeDamage(34);
	scavtrap.takeDamage(34);
	scavtrap.takeDamage(34);
	scavtrap.takeDamage(34);
	clapTrap_1.attack("Test target");
	clapTrap_1.beRepaired(2);
	scavtrap.guardGate();
	return 0;
}
