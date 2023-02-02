#include "Dog.hpp"

// Constructors
Dog::Dog() : Animal()
{
	std::cout << "\e[0;33mDefault Constructor called of Dog\e[0m" << std::endl;
	this->type = "Dog";
	Animal::type = this->type;
}

// Destructor
Dog::~Dog()
{
	std::cout << "\e[0;31mDestructor called of Dog\e[0m" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "au au" << std::endl;
}
