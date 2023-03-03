#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
# include <sstream>
# include <string>
# include <limits>
# include <cstdlib>
# include <iomanip>
# include <cfloat>

#include <cmath>



# define INT_MAX 2147483647
# define INT_MIN -2147483648

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
		void	convertInt();
		void	convertFloat();


	private:
		std::string value;
};


#endif
