#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

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
