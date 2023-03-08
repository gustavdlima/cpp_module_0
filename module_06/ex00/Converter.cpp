#include "Converter.hpp"

// Constructors
Converter::Converter(std::string value) : value(value)
{
}

Converter::Converter(const Converter &copy)
{
	*this = copy;
}

// Destructor
Converter::~Converter()
{
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
	if (this->getValue() == "nan" || this->getValue() == "inf" || this->getValue() == "-inf")
	{
		std::cout << "char: impossible" << std::endl;
		return ;
	}
	if (this->getValue().length() == 1)
	{
		if (isCharPrintable(this->getValue()[0]) && !isdigit(this->getValue()[0]))
			std::cout << "char: '" << static_cast<char>(this->getValue()[0])
				<< "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		return ;
	} else {
		int i = atoi(this->getValue().c_str());

		if (isCharPrintable(i))
			std::cout << "char: '" << static_cast<char>(i)
				<< "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		return ;
	}
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

	if (this->getValue() == "nan" || this->getValue() == "inf" || this->getValue() == "-inf")
	{
		std::cout << "int: impossible" << std::endl;
		return;
	}
	if (this->getValue().length() == 1)
	{
		long long	i;
		i = this->getValue()[0];
		std::cout << "int: " << static_cast<int>(i) << std::endl;
	} else {
		long long	i;
		i = std::atol(this->getValue().c_str());
		if (i > INT_MAX || i < INT_MIN)
		{
			std::cout << "int: impossible" << std::endl;
			return;
		}
		else
			std::cout << "int: " << static_cast<int>(i) << std::endl;
	}
}

void	Converter::convertFloat()
{
	if (this->getValue().length() == 1)
	{
		float	f;
		f = this->getValue()[0];
		if (f > std::numeric_limits<float>::max()
			|| f < -(std::numeric_limits<float>::max()))
		{
			std::cout << "float: impossible" << std::endl;
			return;
		}
		else
			std::cout << "float: " << std::fixed << std::setprecision(1)
				<< static_cast<float>(f) << "f"<< std::endl;
		return;
	} else {
		float	f;
		f = std::atof(this->getValue().c_str());
		if (f > std::numeric_limits<float>::max()
			|| f < -(std::numeric_limits<float>::max()))
		{
			std::cout << "float: impossible" << std::endl;
			return;
		}
		else
			std::cout << "float: " << std::fixed << std::setprecision(1)
				<< static_cast<float>(f) << "f"<< std::endl;
	}
}

void	Converter::convertDouble()
{
	if (this->getValue().length() == 1)
	{
		double	d;
		d = this->getValue()[0];
		if (d > std::numeric_limits<double>::max()
			|| d < -(std::numeric_limits<double>::max()))
		{
			std::cout << "double: impossible" << std::endl;
			return;
		}
		else
			std::cout << "double: " << std::fixed << std::setprecision(1)
				<< 	static_cast<double>(d) << std::endl;
		return;
	} else {
		double	d;
		d = std::atof(this->getValue().c_str());
		if (d > std::numeric_limits<double>::max()
			|| d < -(std::numeric_limits<double>::max()))
		{
			std::cout << "double: impossible" << std::endl;
			return;
		}
		else
			std::cout << "double: " << std::fixed << std::setprecision(1)
				<< 	static_cast<double>(d) << std::endl;
	}
}

void	Converter::convertAndPrint()
{
	void		(Converter::*charPtr) (void) = 	&Converter::convertChar;
	void		(Converter::*intPtr) (void) = 	&Converter::convertInt;
	void		(Converter::*floatPtr) (void) = 	&Converter::convertFloat;
	void		(Converter::*doublePtr) (void) = 	&Converter::convertDouble;
	void		(Converter::*complainPtr[4]) (void) = {charPtr, intPtr, floatPtr, doublePtr};

	for (int i = 0; i < 4; i++)
	{
		(this->*complainPtr[i])();
	}
}
