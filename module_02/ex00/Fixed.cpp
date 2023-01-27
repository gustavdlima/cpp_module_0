#include "Fixed.hpp"

// Constructors
Fixed::Fixed()
{
	std::cout << "\e[0;33mDefault Constructor called\e[0m" <<
	std::endl;
	this->value = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "\e[0;33mCopy Constructor called\e[0m" << std::endl;
	*this = copy;
}

// Destructor
Fixed::~Fixed()
{
	std::cout << "\e[0;31mDestructor called\e[0m" << std::endl;
}

// Operators
Fixed &Fixed::operator=(Fixed const& assign)
{
	std::cout << "\e[0;31mCopy assignment operator called \e[0m" << std::endl;
	if (this != &assign) {
		this->value = (assign.getRawBits());
	}
	return *this;
}

// Getters
int	Fixed::getRawBits(void) const {
	std::cout << "\e[0;31mgetRawBits member function called\e[0m" << std::endl;
	return (this->value);
}

// Setters
void Fixed::setRawBits(const int value) {
	this->value = value;
}
