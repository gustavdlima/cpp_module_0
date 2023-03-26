#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <stack>
#include <iterator>

template <class T>
class MutantStack : public std::stack<T>
{
public:
	// Constructors
		MutantStack();
		MutantStack(const MutantStack &copy);

	// Operators
		MutantStack<T> &operator=(const MutantStack &copy);

	// Iterators typedefs
		typedef typename std::stack<T>::container_type::iterator
		iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;


	// Iterators
		iterator begin();
		iterator end();
		reverse_iterator rbegin();
		reverse_iterator rend();

		const_iterator begin() const;
		const_iterator end() const;
		const_reverse_iterator rbegin() const;
		const_reverse_iterator rend() const;

};

// Stream operators

#include "MutantStack.tpp"

#endif
