#include "MutantStack.hpp"

// Constructors
template <typename T>
MutantStack<T>::MutantStack() {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &copy) : std::stack<T>()
{
	*this = copy;
}

// Operators
template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &copy)
{
	if (this != &copy)
	{
		std::stack<T>::operator=(copy);
	}
	return *this;
}

// Iterators
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return std::stack<T>::c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return std::stack<T>::c.end();
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin()
{
	return std::stack<T>::c.rbegin();
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend()
{
	return std::stack<T>::c.rend();
}
