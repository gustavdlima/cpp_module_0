#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
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
		bool	isLiteral();
		void	convertAndPrint();
		bool	isPrintable(char c);


	private:
		std::string value;

};

std::ostream &operator<<(std::ostream& out, Converter& object);

#endif
