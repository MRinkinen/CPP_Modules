/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:15:45 by mrinkine          #+#    #+#             */
/*   Updated: 2024/08/28 12:41:15 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon *humanB_weapon;
    bool weaponSet;

public:
    void attack(void);
    void setWeapon(Weapon &wep);
    HumanB(std::string humanB_name);
    ~HumanB(void);
};
#endif
