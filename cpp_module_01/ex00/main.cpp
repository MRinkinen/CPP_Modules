/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:12:46 by mrinkine          #+#    #+#             */
/*   Updated: 2024/08/14 15:13:24 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name);
void randomChump(std::string name);

int main(void)
{
    Zombie zombie_1("masa");
    Zombie *zombie_2 = new Zombie("Matti");
    zombie_1.announce();
    zombie_2->announce();
    delete zombie_2;
    Zombie *zombie_3 = newZombie("new_Masa");
    delete zombie_3;
    randomChump("Random Zombie");
    // randomChump("Random Masa");
    return 1;
}
