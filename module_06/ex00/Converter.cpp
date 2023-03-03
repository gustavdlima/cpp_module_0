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
	if (this != &assign)
		this->value = assign.getValue();
	return *this;
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

void	Converter::convertInt()
{
	long long	i = 0;

	i = std::atoi(this->getValue().c_str());
	if (i > std::numeric_limits<int>::max() || i < -(std::numeric_limits<int>::max() + 1) || this->getValue() == "nan" || this->getValue() == "inf" || this->getValue() == "-inf")
	{
		std::cout << "int: impossible" << std::endl;
		return;
	}
	else
		std::cout << "int: " << static_cast<int>(i) << std::endl;
}

void	Converter::convertFloat()
{
	float	f;

	f = std::atof(this->getValue().c_str());
	if (f > std::numeric_limits<float>::max()
		|| f < -(std::numeric_limits<float>::max()))
	{
		std::cout << "float: impossible" << std::endl;
		return;
	}
	else
	{
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(f) << "f"<< std::endl;
	}
}

void	Converter::convertDouble()
{
	double	d;

	d = std::atof(this->getValue().c_str());
	if (d > std::numeric_limits<double>::max()
		|| d < -(std::numeric_limits<double>::max()))
	{
		std::cout << "double: impossible" << std::endl;
		return;
	}
	else
	{
		std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(d) << "f"<< std::endl;
	}
}

void	Converter::convertAndPrint()
{
	void		(Converter::*charPtr) (void) = 	&Converter::convertChar;
	void		(Converter::*intPtr) (void) = 	&Converter::convertInt;
	void		(Converter::*floatPtr) (void) = 	&Converter::convertFloat;
	void		(Converter::*doublePtr) (void) = 	&Converter::convertDouble;
	void		(Converter::*complainPtr[4]) (void) = {charPtr, intPtr, floatPtr, doublePtr};

	for (int i = 0; i < 3; i++)
	{
		(this->*complainPtr[i])();
	}
}
