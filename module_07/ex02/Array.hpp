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
		Array(unsigned int i);
		Array(const Array &copy);

		// Destructor
		~Array();

		// Operators
		Array &operator=(const Array &assign);
		T &operator[](unsigned int index);

		// Methods
		int size() const;

	private:
		T				*_array;
		unsigned int	_size;
};

template <typename T>
std::ostream &operator<<(std::ostream& out, const Array<T> &array);

#include "array.tpp"

#endif
