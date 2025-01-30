/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:14:36 by mrinkine          #+#    #+#             */
/*   Updated: 2024/12/05 13:01:56 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clapTrap_1("One");
	ClapTrap clapTrap_2("Two");
	ClapTrap clapTrap_3("three");
	clapTrap_1.takeDamage(9);
	clapTrap_1.attack("Test Target");
	clapTrap_1.attack("Test target");
	clapTrap_1.beRepaired(5);
	clapTrap_1.beRepaired(5);
	clapTrap_1.beRepaired(5);
	clapTrap_1.attack("Test Target");

	clapTrap_1 = clapTrap_2;
	clapTrap_1.takeDamage(2);
	clapTrap_1.attack("Test Target");
	ClapTrap test(clapTrap_1);
	clapTrap_1.beRepaired(9);
	clapTrap_1.takeDamage(19);
	clapTrap_1.beRepaired(3);
	clapTrap_1 = clapTrap_3;
	clapTrap_2.attack("Test target");
	clapTrap_2.beRepaired(2);
	test.takeDamage(2);
	test.attack("Test target");
	test.takeDamage(1000);

	return 0;
}
