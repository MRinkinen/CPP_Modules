/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:49:33 by mrinkine          #+#    #+#             */
/*   Updated: 2024/08/28 12:49:34 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        Harl harl(argv[1]);
    }
    else
    {
        std::cout << "Give harl level as argument: DEBUG, INFO, WARNING or ERROR" << std::endl;
    }
}
