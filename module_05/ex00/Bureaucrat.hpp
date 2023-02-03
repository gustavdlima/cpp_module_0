#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{
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
		void		gradeTooHighException(void);
		void		gradeTooLowException(void);
		void		incrementGrade(int value);
		void		decrementGrade(int value);

	private:
		const std::string name;
		int grade;

};

#endif
