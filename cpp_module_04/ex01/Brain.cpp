/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 18:22:27 by mrinkine          #+#    #+#             */
/*   Updated: 2024/12/20 12:36:15 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain created" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = "Empty thoughts...";
	}
}

Brain::Brain(const Brain &other)
{
	*this = other;
	std::cout << "Brain copied" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destroyed" << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100; ++i)
		{
			this->ideas[i] = other.ideas[i];
		}
	}
	return *this;
}

std::string Brain::getIdea(int index) const
{
	if (index >= 0 && index < 100)
	{
		return ideas[index];
	}
	return "";
}

void Brain::setIdea(int index, const std::string &idea)
{
	if (index >= 0 && index < 100)
	{
		ideas[index] = idea;
	}
}
