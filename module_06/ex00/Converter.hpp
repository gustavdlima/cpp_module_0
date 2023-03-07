#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
# include <sstream>
# include <string>
# include <bits/stdc++.h>


class Converter
{
	public:
		// Constructors
		Converter(std::string value);
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
		void	convertDouble();


	private:
		std::string value;
};


#endif
