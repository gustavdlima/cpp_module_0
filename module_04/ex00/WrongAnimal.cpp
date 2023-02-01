#include "WrongAnimal.hpp"

// Constructors
WrongAnimal::WrongAnimal()
{
	std::cout << "\e[0;33mDefault Constructor called of WrongAnimal\e[0m" << std::endl;
}

// Destructor
WrongAnimal::~WrongAnimal()
{
	std::cout << "\e[0;31mDestructor called of WrongAnimal\e[0m" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return this->type;
}


void	WrongAnimal::makeSound() const
{
	std::cout << "wrong animals sounds" << std::endl;
}
