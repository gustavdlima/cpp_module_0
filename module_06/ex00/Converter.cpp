#include "Converter.hpp"

// Constructors
Converter::Converter()
{
	std::cout << "\e[0;33mDefault Constructor called of Converter\e[0m" << std::endl;
}

Converter::Converter(char *value)
{
	this->value = value;
	std::cout << "\e[0;33mDefault Constructor called of Converter\e[0m" << std::endl;
}

Converter::Converter(const Converter &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of Converter\e[0m" << std::endl;
}


// Destructor
Converter::~Converter()
{
	std::cout << "\e[0;31mDestructor called of Converter\e[0m" << std::endl;
}


// Operators
Converter & Converter::operator=(const Converter &assign)
{
	(void) assign;
	return *this;
}

std::ostream &operator<<(std::ostream& out, Converter& object)
{
	std::cout << "Value: " << object.getValue() << std::endl;
	return out;
}

std::string Converter::getValue() const
{
	return this->value;
}

void	Converter::convertChar()
{
	std::stringstream ss(this->getValue());
	int	c;
	ss >> c;
	if (c < 0 || c > 255 || this->getValue() == "nan" || this->getValue() == "inf" || this->getValue() == "-inf")
	{
		std::cout << "char: impossible" << std::endl;
		return;
	}
	if (isCharPrintable(c))
		std::cout << "char: '" << static_cast<char>(c)
			<< "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
}

// Check if the character is a printable ASCII characer
bool	Converter::isCharPrintable(int c)
{
	if (c >= 32 && c <= 126)
		return true;
	else
		return false;
}

void	Converter::convertAndPrint()
{
	void		(Converter::*charPtr) (void) = 	&Converter::convertChar;
	void		(Converter::*complainPtr[1]) (void) = {charPtr};

	for (int i = 0; i < 1; i++)
	{
		(this->*complainPtr[i])();
	}

	// std::istringstream ss(this->getValue());

	// char c;
	// if (ss.clear(), ss.seekg(0), ss >> c && ss.eof())
	// {
	// 	std::cout << "char: "
	// 		<< static_cast<unsigned char>(this->getValue()[1]) << std::endl;
	// }
	// else
	// {
	// 	std::cout << "char: Non displayable" << std::endl;
	// }
	// double d;
	// if (ss >> d && ss.eof())
	// {
	// 	std::cout << "double: "
	// 		<< static_cast<double>(this->getValue()[1]) << std::endl;
	// }
	// int i;
	// if (ss.clear(), ss.seekg(0), ss >> i && ss.eof())
	// {
	// 	std::cout << "int: "
	// 		<< static_cast<int>(this->getValue()[1]) << std::endl;
	// }
	// float f;
	// if (ss.clear(), ss.seekg(0), ss >> f && ss.eof())
	// {
	// 	std::cout << "float: "
	// 		<< static_cast<float>(this->getValue()[1]) << ".0f" << std::endl;
	// }
}
