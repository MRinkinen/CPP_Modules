/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:15:41 by mrinkine          #+#    #+#             */
/*   Updated: 2024/08/28 12:43:47 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

void HumanB::attack(void)
{
    std::cout << name;
    std::cout << " attacks with their ";
    if (!weaponSet)
        std::cout << "fists";
    else
        std::cout << humanB_weapon->getType();
    std::cout << std::endl;
}
void HumanB::setWeapon(Weapon &wep)
{
    weaponSet = true;
    humanB_weapon = &wep;
}

HumanB::HumanB(std::string humanA_name) : name(humanA_name)
{
    weaponSet = false;
    return;
}
HumanB::~HumanB(void)
{
    return;
}
