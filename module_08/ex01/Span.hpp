#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <list>

class Span
{
	public:
		// Iterator
		class iterator
		{
			public:
				iterator(std::list<int>::iterator iter);

			private:
				std::list<int>::iterator iter;
		};

		// Exceptions
		class FullException : public std::exception
		{
			virtual const char *what() const throw();
		};

		// Constructors
		Span();
		Span(unsigned int parameter);
		Span(const Span &copy);

		// Destructor
		~Span();

		// Operators
		Span &operator=(const Span &assign);

		// Getters
		unsigned int getListSize() const;

		// Setters
		void setListSize(unsigned int parameter);

		// Iterators
		iterator begin();
		iterator end();

		// Methods
		void addNumber(unsigned int number);

	private:
		unsigned int listSize;
		std::list<int> list;
};

// Stream operators
std::ostream &operator<<(std::ostream &stream, const Span &object);

#endif
