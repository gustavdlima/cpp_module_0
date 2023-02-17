#include "Bureaucrat.hpp"

// Constructors
Bureaucrat::Bureaucrat(std::string newName, int gradeValue) : name(newName), grade(gradeValue)
{
	std::cout << "\e[0;33mConstructor called of Bureaucrat\e[0m" << std::endl;
	if (gradeValue < 1)
		throw Bureaucrat::GradeTooHighException();
	if (gradeValue > 150)
		throw Bureaucrat::GradeTooLowException();
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
	if (this != &assign)
		this->grade = assign.grade;
	return *this;
}

std::ostream &operator<<(std::ostream& out, Bureaucrat& object)
{
	std::cout << object.getGrade();
	return out;
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
	if (value < 1)
		throw Bureaucrat::GradeTooHighException();
	if (value > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = value;
}

void	Bureaucrat::incrementGrade()
{
	if (this->grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (this->grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade++;
}

// Exceptions
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "grade too High, try 1-150.";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "grade too low, try 1-150.";
}
