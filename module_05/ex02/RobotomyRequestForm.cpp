#include "RobotomyRequestForm.hpp"

// Constructors
RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
	std::cout << "\e[0;33mDefault Constructor called of RobotomyRequestForm\e[0m" << std::endl;
	std::cout << "-- some drilling noises --" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	std::cout << "\e[0;33mDefault Constructor called of RobotomyRequestForm\e[0m" << std::endl;
	this->target = target;
	std::cout << "-- some drilling noises --" << std::endl;
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
std::string RobotomyRequestForm::getTarget()
{
	return (this->target);
}

// Stream operators
std::ostream & operator<<(std::ostream &stream, const RobotomyRequestForm &object)
{
	(void) object;
	return stream;
}

// Member Functions
void RobotomyRequestForm::execute()
{
	if (this->getisSigned() != false)
	{
		if (std::rand() % 2)
			std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
		else
			std::cout << "robotomy failed." << std::endl;
	} else {
		throw AForm::FormNotSigned();
	}
}
