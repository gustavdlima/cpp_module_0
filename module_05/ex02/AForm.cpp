#include "AForm.hpp"

// Constructors
AForm::AForm(std::string name, int gradeSignValue, int gradeExecuteValue) : name(name), gradeExecute(gradeExecuteValue), gradeSign(gradeSignValue), isSigned(false)
{
	std::cout << "\e[0;33mDefault Constructor called of AForm\e[0m" << std::endl;
	if (gradeExecuteValue < 1)
		throw AForm::GradeTooHighException();
	if (gradeSignValue > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &copy) : name(copy.name), gradeExecute(copy.gradeExecute), gradeSign(copy.gradeSign)
{
	std::cout << "\e[0;33mCopy Constructor called of AForm\e[0m" << std::endl;
	*this = copy;
}

// Destructor
AForm::~AForm()
{
	std::cout << "\e[0;31mDestructor called of AForm\e[0m" << std::endl;
}


// Operators
AForm & AForm::operator=(const AForm &assign)
{
	(void) assign;
	return *this;
}

std::ostream &operator<<(std::ostream& out, AForm& object)
{
	std::cout << "Form name: " << object.getName() << std::endl;
	std::cout << "Grade to execute: " << object.getGradeExecute() << std::endl;
	std::cout << "Grade to sign: " << object.getGradeSign() << std::endl;
	std::cout << "Signed: "<< object.getisSigned() << std::endl;
	return out;
}

// Getters
const std::string&	AForm::getName(void) const
{
	return this->name;
}

bool	AForm::getisSigned(void) const
{
	return this->isSigned;
}


int	AForm::getGradeExecute(void)
{
	return this->gradeExecute;
}

int	AForm::getGradeSign(void)
{
	return this->gradeSign;
}


// Setters
void	AForm::setIsSigned(bool newValue)
{
	this->isSigned = newValue;
}

// Custom Exceptions
const char* AForm::GradeTooHighException::what() const throw()
{
	return "grade too High, try 1-150.";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "grade too low, try 1-150.";
}

const char* AForm::FormNotSigned::what() const throw()
{
	return "form not signed";
}

// Member Functions
void	AForm::beSigned(Bureaucrat& norm)
{
	if (norm.getGrade() > this->getGradeSign())
		AForm::GradeTooLowException();
	this->isSigned = true;
}

bool	AForm::execute(const Bureaucrat &executor) const
{
	if (!this->isSigned)
		throw AForm::FormNotSigned();
	if (executor.getGrade() < this->gradeExecute)
		throw AForm::GradeTooLowException();
	return true;
}
