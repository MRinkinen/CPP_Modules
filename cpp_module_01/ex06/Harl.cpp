/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:49:16 by mrinkine          #+#    #+#             */
/*   Updated: 2024/08/28 12:49:19 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
    std::cout << std::endl;
}
void Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
    std::cout << std::endl;
}
void Harl::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
    std::cout << std::endl;
}
void Harl::error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    std::cout << std::endl;
}

void Harl::PrintComplains(void)
{
    switch (errorLevel)
    {
    case 0:
        (this->*(pointers[errorLevel]))();
        errorLevel++;
    case 1:
        (this->*(pointers[errorLevel]))();
        errorLevel++;
    case 2:
        (this->*(pointers[errorLevel]))();
        errorLevel++;
    case 3:
        (this->*(pointers[errorLevel]))();
        break;
    default:
        std::cout << "[Probably complaining about insignificant problems]" << std::endl;
        break;
    }
}

void Harl::InitLevels(void)
{
    this->levels[0] = "DEBUG";
    this->levels[1] = "INFO";
    this->levels[2] = "WARNING";
    this->levels[3] = "ERROR";

    this->pointers[0] = &Harl::debug;
    this->pointers[1] = &Harl::info;
    this->pointers[2] = &Harl::warning;
    this->pointers[3] = &Harl::error;
}

void Harl::SetErrorLevel(std::string level)
{
    for (errorLevel = 0; errorLevel < 5; errorLevel++)
    {
        if (levels[errorLevel] == level)
            break;
    }
}

Harl::Harl(std::string level)
{
    InitLevels();
    SetErrorLevel(level);
    PrintComplains();
    return;
}

Harl::~Harl(void)
{
    return;
}
