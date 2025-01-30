/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:50:41 by mrinkine          #+#    #+#             */
/*   Updated: 2024/12/20 13:15:05 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
private:
	Brain *brain;

public:
	Cat();
	Cat(const Cat &other);
	~Cat();

	Cat &operator=(const Cat &other);
	void makeSound() const;
	Brain *getBrain() const;
};
