#ifndef ARRAY_TPP
# define ARRAY_TPP

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _array(new T[0]), _size(0){}

template <typename T>
Array<T>::Array(unsigned int size) : _array(new T[size]), _size(size) {}

template <typename T>
Array<T>::Array(const Array &copy) { *this = copy; }

template <typename T>
Array<T>::~Array() {
	delete [] _array;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &assign)
{
	if (this != &assign)
	{
		delete [] _array;
		_size = assign._size;
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = assign._array[i];
	}
	return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index >= this->_size || index < 0)
		throw std::exception();
	return _array[index];
}

template <typename T>
std::ostream &operator<<(std::ostream& out, const Array<T> &array)
{
	for (int i = 0; i < array.size(); i++)
		out << array[i] << std::endl;
	return out;
}

template <typename T>
int Array<T>::size() const { return (this->_size); }

#endif
