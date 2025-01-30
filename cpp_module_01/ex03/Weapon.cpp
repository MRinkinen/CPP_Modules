/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:18:19 by mrinkine          #+#    #+#             */
/*   Updated: 2024/08/28 12:41:04 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string &Weapon::getType(void)
{
    if (this->type.empty())
    {
        static const std::string defaultType = "Unknown";
        return defaultType;
    }
    return (this->type);
}

void Weapon::setType(std::string typeset)
{
    this->type = typeset;
}

Weapon::Weapon(std::string weapon_type) : type(weapon_type)
{
    return;
}
Weapon::~Weapon(void)
{
    return;
}
