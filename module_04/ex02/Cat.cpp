#include "Cat.hpp"


// Constructors
Cat::Cat() : Animal()
{
	std::cout << "\e[0;33mDefault Constructor called of Cat\e[0m" << std::endl;
	this->type = "Cat";
	Animal::type = this->type;
	this->brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "\e[0;31mDestructor called of Cat\e[0m" << std::endl;
	delete this->brain;
}

void	Cat::makeSound() const
{
	std::cout << "meow meow" << std::endl;
}

// Operators
Cat &Cat::operator=(Cat const& obj)
{
	std::cout << "\e[0;31mCat Copy assignment operator called \e[0m" << std::endl;
	if (this != &obj) {
		this->type = obj.getType();
	}
	return *this;
}

Brain	*Cat::getBrain()
{
	return this->brain;
}

void	Cat::setBrain(Brain *newBrain)
{
	this->brain = newBrain;
}
