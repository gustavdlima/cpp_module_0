#include "Fixed.hpp"

// Constructors
Fixed::Fixed() : value(0)
{
}

Fixed::Fixed(const int num)
{
	this->value = num << this->numberOfFractionalBits;
}

Fixed::Fixed(const float num)
{
	this->value = roundf(num * (1 << this->numberOfFractionalBits));
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

// Destructor
Fixed::~Fixed()
{

}

// Operators
Fixed &Fixed::operator=(Fixed const& assign)
{
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

Fixed Fixed::operator+(const Fixed& object) const
{
	return Fixed(this->toFloat() + object.toFloat());
}

Fixed Fixed::operator-(const Fixed& object) const
{
	return Fixed(this->toFloat() - object.toFloat());
}

Fixed Fixed::operator*(const Fixed& object) const
{
	return Fixed(this->toFloat() * object.toFloat());
}

Fixed Fixed::operator/(const Fixed& object) const
{
	return Fixed(this->toFloat() / object.toFloat());
}

bool Fixed::operator==(const Fixed& object) const
{
	if ((this->toFloat()) == (object.toFloat()))
		return 1;
	else
		return 0;
}

bool Fixed::operator>(const Fixed& object) const
{
	if ((this->toFloat()) > (object.toFloat()))
		return 1;
	else
		return 0;
}

bool Fixed::operator<(const Fixed& object) const
{
	if ((this->toFloat()) < (object.toFloat()))
		return 1;
	else
		return 0;
}

bool Fixed::operator>=(const Fixed& object) const
{
	if ((this->toFloat()) >= (object.toFloat()))
		return 1;
	else
		return 0;
}

bool Fixed::operator<=(const Fixed& object) const
{
	if ((this->toFloat()) <= (object.toFloat()))
		return 1;
	else
		return 0;
}

bool Fixed::operator!=(const Fixed& object) const
{
	if ((this->toFloat()) != (object.toFloat()))
		return 1;
	else
		return 0;
}

Fixed &Fixed::operator++(void)
{
	this->value++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed	tmp = *this;
	this->value++;
	return tmp;
}

// Getters
int	Fixed::getRawBits(void) const {
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
