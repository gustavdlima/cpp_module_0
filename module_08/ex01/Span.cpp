#include "Span.hpp"

// Constructors
Span::Span() {}

Span::Span(unsigned int parameter) : n(parameter)
{
}

Span::Span(const Span &copy) : n(copy.n)
{
}

// Destructor
Span::~Span() {}

// Operators
Span &Span::operator=(const Span &assign)
{

	if (this != &assign)
		this->n = assign.n;
	return *this;
}

// Stream operators
std::ostream &operator<<(std::ostream &stream, const Span &object)
{
	stream << "" << std::endl;
	return stream;
}

// Getters
unsigned int Span::getN() const { return this->n; }

// Setters
void Span::setN(unsigned int parameter) { this->n = parameter; }

// Exceptions

const char *Span::FullException::what() const throw()
{
	return "Span is full";
}

// Methods
void Span::addNumber(int number)
{
	if (number)
		throw Span::FullException();
	else
		this->n = number;
}
