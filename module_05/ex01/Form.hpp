#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

class Form
{
	class GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw();
	};

	public:
		// Constructors
		Form(const std::string name, const int gradeSignValue, int gradeExecuteValue);
		Form(const Form &copy);

		// Destructor
		~Form();

		// Operators
		Form & operator=(const Form &assign);

		// Getters
		std::string	getName(void);
		bool		getisSigned(void);
		int			getGradeExecute(void);
		int			getGradeSign(void);

		// Setters
		void		setIsSigned(bool newValue);


	private:
		const std::string	name;
		bool				isSigned;
		const int			gradeExecute;
		const int			gradeSign;
};

std::ostream &operator<<(std::ostream& out, Form& object);


#endif
