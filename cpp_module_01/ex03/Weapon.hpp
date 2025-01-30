/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:19:57 by mrinkine          #+#    #+#             */
/*   Updated: 2024/08/28 12:40:56 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon
{
private:
    std::string type;

public:
    const std::string &getType(void);
    void setType(std::string typeset);
    Weapon(std::string weapon_type);
    ~Weapon(void);
};
#endif
