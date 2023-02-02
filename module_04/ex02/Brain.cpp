#include "Brain.hpp"

// Constructors
Brain::Brain()
{
	std::cout << "\e[0;33mDefault Constructor called of Brain\e[0m" << std::endl;
	this->index = 0;
}

Brain::Brain(const Brain &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Brain\e[0m" << std::endl;
}


// Destructor
Brain::~Brain()
{
	std::cout << "\e[0;31mDestructor called of Brain\e[0m" << std::endl;
}


// Operators
Brain& Brain::operator=(const Brain &obj)
{
	(void) obj;
	std::cout << "\e[0;31mBrain Copy assignment operator called \e[0m" << std::endl;
	return *this;
}

std::string Brain::getIdeas(int	index)
{
	if (this->index > 99 || this->index < 0) {
		std::cout << "try 0 - 100" << std::endl;
		return 0;
	}
	return this->ideas[index];
}

void	Brain::setIdeias(std::string ideia)
{
	if (this->index == 99) {
		std::cout << "full of ideias" << std::endl;
		return ;
	}
	this->ideas[this->index] = ideia;
	this->index++;
}

