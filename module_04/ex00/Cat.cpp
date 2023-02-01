#include "Cat.hpp"


// Constructors
Cat::Cat() : Animal()
{
	std::cout << "\e[0;33mDefault Constructor called of Cat\e[0m" << std::endl;
	Animal::type = this->type;
}

Cat::~Cat()
{
	std::cout << "\e[0;31mDestructor called of Cat\e[0m" << std::endl;
}


void	Cat::makeSound() const
{
	std::cout << "meow meow" << std::endl;
}
