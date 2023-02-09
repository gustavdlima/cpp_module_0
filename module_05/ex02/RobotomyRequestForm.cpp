#include "RobotomyRequestForm.hpp"

// Constructors
RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
	std::cout << "\e[0;33mDefault Constructor called of RobotomyRequestForm\e[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	std::cout << "\e[0;33mDefault Constructor called of RobotomyRequestForm\e[0m" << std::endl;
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm ("RobotomyRequestForm", 72, 45)
{
	this->target = copy.target;
	std::cout << "\e[0;33mCopy Constructor called of RobotomyRequestForm\e[0m" << std::endl;
}


// Destructor
RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "\e[0;31mDestructor called of RobotomyRequestForm\e[0m" << std::endl;
}


// Operators
RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &assign)
{
	(void) assign;
	return *this;
}

// Getters
std::string RobotomyRequestForm::getTarget() const
{
	return (this->target);
}

// Member Functions
bool	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (AForm::execute(executor))
	{
		if (std::rand() % 2)
			std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
		else
			std::cout << "robotomy failed." << std::endl;
	} else {
		throw AForm::FormNotSigned();
	}
	return true;
}
