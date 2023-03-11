#include "easyFind.hpp"

template<typename T>
void easyFind(T &container, int valueToFind) {
	typename T::iterator it = std::find(container.begin()
		, container.end(), valueToFind);
	if (it == container.end())
		throw typename MyException<T>::ValueNotFoundException();
	std::cout << "Value " << valueToFind << " is found!" << std::endl;
}

template <typename T>
const char* MyException<T>::ValueNotFoundException::what() const throw()
{
	return "index is out of bounds";
};
