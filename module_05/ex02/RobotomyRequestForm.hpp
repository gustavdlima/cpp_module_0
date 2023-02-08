#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
#include <cstdlib>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm
{
	public:
		// Constructors
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &copy);

		// Destructor
		~RobotomyRequestForm();

		// Operators
		RobotomyRequestForm & operator=(const RobotomyRequestForm &assign);

		// Getters
		std::string getTarget();
		void execute();

	private:
		std::string	target;
};

// Stream operators
std::ostream & operator<<(std::ostream &stream, const RobotomyRequestForm &object);

#endif
