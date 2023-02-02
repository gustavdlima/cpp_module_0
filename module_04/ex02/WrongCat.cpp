#include "WrongCat.hpp"

// Constructors
WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "\e[0;33mDefault Constructor called of WrongCat\e[0m" << std::endl;
	setType("WrongCat");
	WrongAnimal::type = this->type;
}

WrongCat::~WrongCat()
{
	std::cout << "\e[0;31mDestructor called of WrongCat\e[0m" << std::endl;
}

void	WrongCat::setType(std::string type)
{
	this->type = type;
}

void	WrongCat::makeSound() const
{
	std::cout << "piuiiii" << std::endl;
}
