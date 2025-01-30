/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:13:40 by mrinkine          #+#    #+#             */
/*   Updated: 2024/08/28 14:58:08 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string zombieName) : name(zombieName)
{
    Zombie::announce();
    return;
}

Zombie::~Zombie(void)
{
    std::cout << this->name << " deconstructor called" << std::endl;
    return;
}

void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ.." << std::endl;
}
