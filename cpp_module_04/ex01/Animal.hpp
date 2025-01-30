/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:50:34 by mrinkine          #+#    #+#             */
/*   Updated: 2024/12/20 12:58:12 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Brain.hpp"
class Animal
{
protected:
	std::string type;

public:
	Animal();
	Animal(const std::string &type);
	Animal(const Animal &other);
	Animal &operator=(const Animal &other);
	virtual ~Animal();

	std::string getType() const;
	void setType(std::string type);
	virtual void makeSound() const;
	virtual Brain *getBrain() const = 0;
};
