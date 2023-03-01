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

bool	Converter::isPrintable(char c)
{
    return (c >= 32 && c <= 126); // printable characters have ASCII codes between 32 and 126
}

bool	Converter::isLiteral()
{
	if ((this->value.size() == 3) && (this->value[0] == '\'')
		&& (this->value[2] == '\''))
		return true;
	return false;
}

void	Converter::convertAndPrint()
{
	if (this->isLiteral())
	{

		const	char	*str = this->getValue().c_str();
		const char	literal = static_cast<char>(str[0]);

		if (this->isPrintable(literal))
			std::cout << "char: " << literal << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	} else {
		std::cout << "int: " << static_cast<int>(this->getValue()[1]) << std::endl;
		std::cout << "float: " << static_cast<float>(this->getValue()[1]) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(this->getValue()[1]) << ".0" << std::endl;
	}
}
