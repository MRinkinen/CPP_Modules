/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:50:52 by mrinkine          #+#    #+#             */
/*   Updated: 2024/12/11 18:12:35 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	const WrongCat *wrongCat = new WrongCat;
	const WrongAnimal *wrongAnimal = new WrongCat;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << wrongCat->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	wrongCat->makeSound();
	wrongAnimal->makeSound();

	delete (meta);
	delete (j);
	delete (i);
	delete (wrongCat);
	delete (wrongAnimal);
}
