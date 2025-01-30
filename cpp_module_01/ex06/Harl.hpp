/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:49:28 by mrinkine          #+#    #+#             */
/*   Updated: 2024/08/28 12:49:29 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    void InitLevels(void);
    void SetErrorLevel(std::string level);
    std::string levels[4];
    void (Harl::*pointers[4])(void);
    int errorLevel;
    void PrintComplains(void);

public:
    Harl(std::string level);
    ~Harl();
};
#endif
