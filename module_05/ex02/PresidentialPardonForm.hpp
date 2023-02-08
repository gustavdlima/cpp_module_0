#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>

class PresidentialPardonForm
{
	public:
		// Constructors
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &copy);

		// Destructor
		~PresidentialPardonForm();

		// Operators
		PresidentialPardonForm & operator=(const PresidentialPardonForm &assign);

	private:

};

// Stream operators
std::ostream & operator<<(std::ostream &stream, const PresidentialPardonForm &object);

#endif
