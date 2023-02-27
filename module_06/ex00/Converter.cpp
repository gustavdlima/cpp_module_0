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
