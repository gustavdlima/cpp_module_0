#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template<class T>
class Array
{
	public:
		// Constructors
		Array();
		Array(const Array &copy);

		// Destructor
		~Array();

		// Operators
		Array & operator=(const Array &assign);

	private:
	T	*_array;
};

#endif
