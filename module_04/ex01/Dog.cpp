#include "Dog.hpp"

// Constructors
Dog::Dog() : Animal()
{
	std::cout << "\e[0;33mDefault Constructor called of Dog\e[0m" << std::endl;
	this->type = "Dog";
	Animal::type = this->type;
	this->brain = new Brain();
}

// Destructor
Dog::~Dog()
{
	std::cout << "\e[0;31mDestructor called of Dog\e[0m" << std::endl;
	delete this->brain;
}

void	Dog::makeSound() const
{
	std::cout << "au au" << std::endl;

}

Brain	*Dog::getBrain()
{
	return this->brain;
}

void	Dog::setBrain(Brain *newBrain)
{
	this->brain = newBrain;
}
