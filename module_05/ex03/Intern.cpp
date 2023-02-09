#include "Intern.hpp"

// Constructors
Intern::Intern()
{
	std::cout << "\e[0;33mDefault Constructor called of Intern\e[0m" << std::endl;
}

Intern::Intern(const Intern &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Intern\e[0m" << std::endl;
}


// Destructor
Intern::~Intern()
{
	std::cout << "\e[0;31mDestructor called of Intern\e[0m" << std::endl;
}


// Operators
Intern & Intern::operator=(const Intern &assign)
{
	(void) assign;
	return *this;
}

AForm *Intern::makeForm(std::string formName, std::string formTarget)
{
	std::string	options[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	AForm *result = 0;
	AForm *forms[] = {
		new ShrubberyCreationForm(formTarget),
		new RobotomyRequestForm(formTarget),
		new PresidentialPardonForm(formTarget)
	};
	for (int i = 0; i < 3; i++) {
		if (formName == options[i]) {
			std::cout << "intern creates " << formName << std::endl;
			result = forms[i];
		} else {
			delete forms[i];
		}
	}
	if (!result)
		std::cout << "the intern did not create the " << formName << std::endl;
	return result;
}
