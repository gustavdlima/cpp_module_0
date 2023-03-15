#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>

class Span
{
public:
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
	unsigned int getN() const;
	// Setters
	void setN(unsigned int parameter);

	// Methods
	void addNumber(int number);

private:
	unsigned int n;
};

// Stream operators
std::ostream &operator<<(std::ostream &stream, const Span &object);

#endif
