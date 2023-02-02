/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:45:01 by gusalves          #+#    #+#             */
/*   Updated: 2023/02/01 21:32:23 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"



int	main() {
	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const WrongAnimal* i = new WrongCat();

	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound();
	// j->makeSound();
	// meta->makeSound();

	// Cat	testCat;
	// std::cout << testCat.getType() << std::endl;
	// testCat.makeSound();

	// Dog testDog;
	// std::cout << testDog.getType() << std::endl;
	// testDog.makeSound();

	// delete meta;
	// delete j;
	// delete i;

	Animal**	arrayOfAnimals = new Animal*[6];

	for(int	i = 0; i < 6; i++)
	{
		if (i < 3)
			arrayOfAnimals[i] = new Cat();
		else
			arrayOfAnimals[i] = new Dog();
	}
	for (int i = 0; i < 6; i++)
	{
		delete arrayOfAnimals[i];
	}
	delete [] arrayOfAnimals;

	return 0;
}
