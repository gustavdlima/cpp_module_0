#include "Animal.hpp"

// Constructors
Animal::Animal()
{
	std::cout << "\e[0;33mDefault Constructor called of Animal\e[0m" << std::endl;
}

// CopyConstructor
Animal::Animal(const Animal &obj) {
	*this = obj;
}

// Operators
Animal& Animal::operator=(const Animal &obj)
{
	(void) obj;
	std::cout << "\e[0;31mBrain Copy assignment operator called \e[0m" << std::endl;
	return *this;
}

// Destructor
Animal::~Animal()
{
	std::cout << "\e[0;31mDestructor called of Animal\e[0m" << std::endl;
}

std::string	Animal::getType() const
{
	return this->type;
}


void	Animal::makeSound() const
{
	std::cout << "animals sounds" << std::endl;
}
