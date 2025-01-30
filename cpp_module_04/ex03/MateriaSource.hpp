/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 10:54:35 by mrinkine          #+#    #+#             */
/*   Updated: 2024/12/18 17:08:34 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *materias[4];
	int size;

public:
	MateriaSource();
	~MateriaSource();
	MateriaSource &operator=(const MateriaSource &other);
	MateriaSource(const MateriaSource &other);

	void learnMateria(AMateria *mat);
	virtual AMateria *createMateria(std::string const &type);
};
