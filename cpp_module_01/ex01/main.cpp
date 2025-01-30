/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:14:25 by mrinkine          #+#    #+#             */
/*   Updated: 2024/08/28 15:32:23 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name);

int main(void)
{
   int zombieAmount = 6;
   Zombie *horde = zombieHorde(zombieAmount, "TEst");
   for (int i = 0; i < zombieAmount; i++)
   {
      horde[i].announce();
   }
   delete[] horde;
}
