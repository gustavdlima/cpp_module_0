#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
# include <sstream>
# include <string>

class Converter
{
	public:
		// Constructors
		Converter();
		Converter(char *value);
		Converter(const Converter &copy);

		// Destructor
		~Converter();

		// Operators
		Converter & operator=(const Converter &assign);

		// Getters
		std::string	getValue() const;

		// Methods
		void	convertAndPrint();
		bool	isCharPrintable(int c);
		void	convertChar();



	private:
		std::string value;
};

std::ostream &operator<<(std::ostream& out, Converter& object);

#endif
