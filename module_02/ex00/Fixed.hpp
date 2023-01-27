#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

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
		Fixed(const Fixed &copy);

		// Destructor
		~Fixed();

		// Operators
		Fixed &operator=(Fixed const& assign);

		// Getters
		int		getRawBits(void) const;

		// Setters
		void	setRawBits(const int value);

	private:
		int					value;
		static const int	numberOfFractionalBits = 8;
};

#endif
