/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:45:01 by gusalves          #+#    #+#             */
/*   Updated: 2023/02/15 22:12:27 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"



int	main()
{
	const Animal* meta = new Animal();
	const Animal* caramel = new Dog();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << caramel->getType() << " " << std::endl;
	std::cout << wrongCat->getType() << " " << std::endl;
	wrongCat->makeSound();
	caramel->makeSound();
	meta->makeSound();

	Cat	testCat;
	std::cout << testCat.getType() << std::endl;
	testCat.makeSound();

	Dog testDog;
	std::cout << testDog.getType() << std::endl;
	testDog.makeSound();

	const WrongAnimal* test = new WrongAnimal();
	test = wrongCat;
	std::cout << test->getType() << std::endl;

	delete meta;
	delete wrongCat;
	delete caramel;
	delete test;
	return 0;

	// // PDF TEST
	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound!
	// j->makeSound();
	// meta->makeSound();
	// return 0;

}
