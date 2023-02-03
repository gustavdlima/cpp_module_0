#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{
	public:
		// Constructors
		Bureaucrat();
		Bureaucrat(std::string newName);
		Bureaucrat(const Bureaucrat &copy);

		// Destructor
		~Bureaucrat();

		// Operators
		Bureaucrat & operator=(const Bureaucrat &assign);

		// Getters
		std::string getName();
		int			getGrade();

		// Setters
		void setGrade(int value);

		void	gradeTooHighException(void);
		void	gradeTooLowException(void);

	private:
		const std::string name;
		int grade;

};

#endif
