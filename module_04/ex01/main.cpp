/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:45:01 by gusalves          #+#    #+#             */
/*   Updated: 2023/02/15 23:06:05 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int	main()
{
	Animal**	arrayOfAnimals = new Animal*[6];

	for(int	i = 0; i < 6; i++)
	{
		if (i < 3) {
			arrayOfAnimals[i] = new Cat();
		}
		else {
			arrayOfAnimals[i] = new Dog();
		}
	}

	arrayOfAnimals[0]->makeSound();
	arrayOfAnimals[3]->makeSound();
	Animal* temp = arrayOfAnimals[0];
	arrayOfAnimals[0] = arrayOfAnimals[3];
	arrayOfAnimals[3] = temp;
	arrayOfAnimals[0]->makeSound();
	arrayOfAnimals[3]->makeSound();

	Animal* catTemp = arrayOfAnimals[0];
	((Cat *)catTemp)->getBrain()->setIdeias("Fly with Mosby");
	((Cat *)catTemp)->getBrain()->setIdeias("Try catch all Pokemons");
	std::cout << ((Cat *)catTemp)->getBrain()->getIdeas(0) << std::endl;
	std::cout << ((Cat *)catTemp)->getBrain()->getIdeas(1) << std::endl;
	((Cat *)catTemp)->getBrain()->setIdeias("invest in bitcoins");
	std::cout << ((Cat *)catTemp)->getBrain()->getIdeas(2) << std::endl;
	std::cout << ((Cat *)arrayOfAnimals[0])->getBrain()->getIdeas(2) << std::endl;

	for (int i = 0; i < 6; i++)
		delete arrayOfAnimals[i];
	delete [] arrayOfAnimals;
	return 0;
}
