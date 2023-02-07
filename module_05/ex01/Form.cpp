#include "Form.hpp"

		// bool				isSigned;
		// const int			gradeSign;
		// const int			gradeExecute;
		// const std::string	name;

// Constructors
Form::Form(std::string name, int gradeSignValue, int gradeExecuteValue) : name(name), gradeExecute(gradeExecuteValue), gradeSign(gradeSignValue), isSigned(false)
{
	std::cout << "\e[0;33mDefault Constructor called of Form\e[0m" << std::endl;
	if (gradeExecuteValue < 1)
		throw Form::GradeTooHighException();
	if (gradeSignValue > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &copy) : name(copy.name), gradeExecute(copy.gradeExecute), gradeSign(copy.gradeSign)
{
	std::cout << "\e[0;33mCopy Constructor called of Form\e[0m" << std::endl;

}

// Destructor
Form::~Form()
{
	std::cout << "\e[0;31mDestructor called of Form\e[0m" << std::endl;
}


// Operators
Form & Form::operator=(const Form &assign)
{
	(void) assign;
	return *this;
}

std::ostream &operator<<(std::ostream& out, Form& object)
{
	std::cout << "Form name: " <<object.getName() << std::endl;
	std::cout << "Execute it: " << object.getGradeExecute() << std::endl;
	std::cout << "Sign it: " << object.getGradeSign() << std::endl;
	std::cout << "Signed: "<< object.getisSigned() << std::endl;
	return out;
}

// Getters
std::string	Form::getName(void)
{
	return this->name;
}

bool	Form::getisSigned(void)
{
	return this->isSigned;
}


int	Form::getGradeExecute(void)
{
	return this->gradeExecute;
}

int	Form::getGradeSign(void)
{
	return this->gradeSign;
}


// Setters


void	Form::setIsSigned(bool newValue)
{
	this->isSigned = newValue;
}

// Custom Exceptions
const char* Form::GradeTooHighException::what() const throw()
{
	return "grade too High, try 1-150.";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "grade too low, try 1-150.";
}


// Member Functions
void	Form::beSigned(Bureaucrat& norm)
{
	if (norm.getGrade() <= 150)
		this->isSigned = 1;
	else
		Form::GradeTooLowException();
}
