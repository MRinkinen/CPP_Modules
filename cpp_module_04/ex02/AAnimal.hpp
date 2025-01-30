/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:50:34 by mrinkine          #+#    #+#             */
/*   Updated: 2024/12/20 13:11:41 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Brain.hpp"
class AAnimal
{
protected:
	std::string type;

public:
	AAnimal();
	AAnimal(const std::string &type);
	AAnimal(const AAnimal &other);
	AAnimal &operator=(const AAnimal &other);
	virtual ~AAnimal();

	std::string getType() const;
	void setType(std::string type);
	virtual void makeSound() const = 0;
	virtual Brain *getBrain() const = 0;
};
