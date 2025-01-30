/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 10:53:16 by mrinkine          #+#    #+#             */
/*   Updated: 2024/12/20 15:04:59 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("Default Character")
{
	for (int i = 0; i < 4; i++)
		this->materias[i] = NULL;
}

Character::Character(std::string name) : name(name){}

Character::~Character()
{
	for (int i = 0; i < this->materia_index; i++)
	{
		if (this->materias[i])
			delete this->materias[i];
	}
}
Character &Character::operator=(const Character &other)
{
	this->name = other.name;
	this->materia_index = other.materia_index;
	for (int i = 0; i < this->materia_index; i++)
	{
		if (other.materias[i])
			this->materias[i] = other.materias[i]->clone();
	}
	return (*this);
}
Character::Character(const Character &other)
{
	*this = other;
}
std::string const &Character::getName() const
{
	return (this->name);
}
void Character::equip(AMateria *mat)
{
	if (this->materia_index < 4)
	{
		this->materias[this->materia_index] = mat;
		this->materia_index++;
	}
}
void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		this->materias[idx] = 0;
		this->materia_index--;
	}
}
void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && this->materias[idx])
	{
		this->materias[idx]->use(target);
	}
}
