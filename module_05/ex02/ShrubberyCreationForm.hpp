#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"
# include <fstream>

class ShrubberyCreationForm : public AForm
{
	public:
		// Constructors
		ShrubberyCreationForm();
		explicit ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);

		// Destructor
		virtual ~ShrubberyCreationForm();

		// Operators
		ShrubberyCreationForm & operator=(const ShrubberyCreationForm &assign);

		// Getters
		std::string getTarget();

		bool	checkIfFileExist(std::string filename);
		void	execute(void);

	private:
		std::string	target;

};

// Stream operators
std::ostream & operator<<(std::ostream &stream, const ShrubberyCreationForm &object);

#endif
