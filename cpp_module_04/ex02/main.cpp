/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrinkine <mrinkine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 18:22:33 by mrinkine          #+#    #+#             */
/*   Updated: 2024/12/20 13:19:38 by mrinkine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	const int numAnimals = 10;
	AAnimal *animals[numAnimals];
	int testAnimalIndex = 9;
	int testIdeaIndex = 98;

	for (int i = 0; i < numAnimals / 2; ++i)
	{
		animals[i] = new Dog();
	}
	for (int i = numAnimals / 2; i < numAnimals; ++i)
	{
		animals[i] = new Cat();
	}

	animals[0]->getBrain()->setIdea(5, "Chase the ball");
	animals[0]->getBrain()->setIdea(2, "Eat fish");
	animals[9]->getBrain()->setIdea(99, "Eat fish");
	animals[9]->getBrain()->setIdea(98, "Eat fish");

	std::cout << animals[testAnimalIndex]->getType() << " " << testAnimalIndex << " idea " << animals[testAnimalIndex]->getBrain()->getIdea(testIdeaIndex) << std::endl;
	std::cout << animals[testAnimalIndex]->getType() << " " << testAnimalIndex << " idea " << animals[testAnimalIndex]->getBrain()->getIdea(testIdeaIndex + 1) << std::endl;

	Dog basic;
	{
		basic.getBrain()->setIdea(5, "Chase the ball");
		Dog tmp = basic;
		std::cout << tmp.getType() << " idea " << tmp.getBrain()->getIdea(5) << std::endl;
		Dog tmp2(tmp);
		std::cout << tmp2.getType() << " idea " << tmp2.getBrain()->getIdea(5) << std::endl;
		std::cout << basic.getType() << " idea " << basic.getBrain()->getIdea(5) << std::endl;
	}

	for (int i = 0; i < numAnimals; ++i)
	{
		delete animals[i];
	}

	return 0;
}
