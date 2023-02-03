#include "Bureaucrat.hpp"

// Constructors
Bureaucrat::Bureaucrat()
{
	std::cout << "\e[0;33mDefault Constructor called of Bureaucrat\e[0m" << std::endl;
}

Bureaucrat::Bureaucrat(std::string newName) : name(newName)
{
	std::cout << "\e[0;33mConstructor called of Bureaucrat\e[0m" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Bureaucrat\e[0m" << std::endl;
}


// Destructor
Bureaucrat::~Bureaucrat()
{
	std::cout << "\e[0;31mDestructor called of Bureaucrat\e[0m" << std::endl;
}


// Operators
Bureaucrat & Bureaucrat::operator=(const Bureaucrat &assign)
{
	(void) assign;
	return *this;
}

// Getters

std::string Bureaucrat::getName()
{
	return this->name;
}

int	Bureaucrat::getGrade()
{
		return this->grade;
}

// Setters


void Bureaucrat::setGrade(int value)
{
	this->grade = value;
}


// Member Functions
void	Bureaucrat::gradeTooHighException(void)
{
	std::cout << "grade too high, try 1-150." << std::endl;
}

void	Bureaucrat::gradeTooLowException(void)
{
	std::cout << "grade too low, try 1-150." << std::endl;
}
