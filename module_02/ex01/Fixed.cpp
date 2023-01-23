#include "Fixed.hpp"

// Constructors
Fixed::Fixed() : value(0)
{
	std::cout << "\e[0;33mDefault Constructor called\e[0m" <<
	std::endl;
}

Fixed::Fixed(const int num)
{
	std::cout << "\e[0;33mInteger Constructor called\e[0m" <<
	std::endl;
	this->value = num << this->numberOfFractionalBits;
}

Fixed::Fixed(const float num)
{
	std::cout << "\e[0;33mFloat Constructor called\e[0m" <<
	std::endl;
	this->value = roundf(num * (1 << this->numberOfFractionalBits));
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

std::ostream &operator<<(std::ostream& out,Fixed const& object)
{
	std::cout << object.toFloat();
	return out;
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

// Member Functions
float Fixed::toFloat( void ) const {
	return (this->value / (double)(1 << this->numberOfFractionalBits));
}

int Fixed::toInt( void ) const {
	return (this->value >> this->numberOfFractionalBits);
}
