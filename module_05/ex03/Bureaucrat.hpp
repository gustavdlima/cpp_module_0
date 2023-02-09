#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

class AForm;
class Bureaucrat
{

	public:
		// Custom Exceptions
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		// Constructors
			Bureaucrat(std::string newName, int gradeValue);
			Bureaucrat(const Bureaucrat &copy);

		// Destructor
		virtual	~Bureaucrat();

		// Operators
		Bureaucrat & operator=(const Bureaucrat &assign);

		// Getters
		const std::string& getName() const;
		int			getGrade() const;

		// Setters
		void		setGrade(int value);

		// Member functions
		void		incrementGrade();
		void		decrementGrade();
		void		signForm(AForm &form);
		void		executeForm(AForm const &form);

	private:
		const std::string name;
		int grade;

};

std::ostream &operator<<(std::ostream& out,Bureaucrat& object);

#endif
