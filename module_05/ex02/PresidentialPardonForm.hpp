#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		// Constructors
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);

		PresidentialPardonForm(const PresidentialPardonForm &copy);

		// Destructor
		virtual ~PresidentialPardonForm();

		// Getters
		std::string getTarget() const;


		// Operators
		PresidentialPardonForm & operator=(const PresidentialPardonForm &assign);

		virtual bool	execute(Bureaucrat const &executor) const;


	private:
		std::string target;

};

#endif
