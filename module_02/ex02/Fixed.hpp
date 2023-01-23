#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

/*
	- the copy constructor initializes new objects
		If a new object has to be created before the copying can occur, the copy constructor is used (note: this includes passing or returning objects by value).
*/

/*
	- the assignment operator replaces the contents of existing objects.
		If a new object does not have to be created before the copying can occur, the assignment operator is used.
*/

class Fixed
{
	public:
		// Constructors
		Fixed();
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed &copy);

		// Destructor
		~Fixed();

		// Operators
		Fixed &operator=(Fixed const& assign);
		Fixed operator+(const Fixed& object) const;
		Fixed operator-(const Fixed& object) const;
		Fixed operator*(const Fixed& object) const;
		Fixed operator/(const Fixed& object) const;

		// Getters
		int		getRawBits(void) const;

		// Setters
		void	setRawBits(const int value);

		// Member Functions
		float toFloat( void ) const;
		int toInt( void ) const;

	private:
		int					value;
		static const int	numberOfFractionalBits = 8;
};

std::ostream &operator<<(std::ostream& out,Fixed const &object);

#endif
