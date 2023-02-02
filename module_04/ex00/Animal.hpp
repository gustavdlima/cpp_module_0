#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include "colors.hpp"


class Animal
{
	public:
		// Constructors
		Animal();
		Animal(std::string animalType);
		Animal(const Animal &obj);

		// Operators
		Animal& operator=(const Animal &obj);
		// Destructor
		virtual ~Animal();

		std::string	getType() const;
		virtual void	makeSound() const;


	protected:
		std::string	type;

};

#endif
