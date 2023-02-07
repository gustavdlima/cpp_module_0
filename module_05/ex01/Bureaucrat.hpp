#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <Form.hpp>

class Bureaucrat
{
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

	public:
		// Constructors
			Bureaucrat(std::string newName, int gradeValue);
			Bureaucrat(const Bureaucrat &copy);

		// Destructor
			~Bureaucrat();

		// Operators
		Bureaucrat & operator=(const Bureaucrat &assign);

		// Getters
		std::string getName();
		int			getGrade();

		// Setters
		void		setGrade(int value);

		// Member functions
		void		incrementGrade();
		void		decrementGrade();
		void		signForm(void);

	private:
		const std::string name;
		int grade;

};

std::ostream &operator<<(std::ostream& out,Bureaucrat& object);

#endif
