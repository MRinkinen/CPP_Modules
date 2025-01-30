/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 10:53:19 by mrinkine          #+#    #+#             */
/*   Updated: 2024/12/20 13:38:10 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string name;
	int materia_index;
	AMateria *materias[4];

public:
	Character();
	Character(std::string name);
	~Character();
	Character &operator=(const Character &other);
	Character(const Character &other);

	std::string const &getName() const;
	void equip(AMateria *mat);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};
