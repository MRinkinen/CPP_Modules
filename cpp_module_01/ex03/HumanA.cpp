/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:15:30 by mrinkine          #+#    #+#             */
/*   Updated: 2024/08/14 15:15:31 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

void HumanA::attack(void)
{
    std::cout << name;
    std::cout << " attacks with their ";
    std::cout << this->humanA_weapon.getType();
    std::cout << std::endl;
}

HumanA::HumanA(std::string humanA_name, Weapon &wep) : name(humanA_name), humanA_weapon(wep)
{
    return;
}
HumanA::~HumanA(void)
{
    return;
}
