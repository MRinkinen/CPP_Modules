/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:14:43 by mrinkine          #+#    #+#             */
/*   Updated: 2024/08/28 15:18:58 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *zombie_horde;
    zombie_horde = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        zombie_horde[i].SetName(name);
    }
    return (zombie_horde);
}
