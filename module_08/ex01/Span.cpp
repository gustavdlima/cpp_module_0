#include "Span.hpp"

// Constructors
Span::Span() {}

Span::Span(unsigned int size) : listSize(size) {}

Span::Span(const Span &copy) : listSize(copy.listSize), list(copy.list)
{
}

// Destructor
Span::~Span() {}

// Operators
Span &Span::operator=(const Span &assign)
{

	if (this != &assign)
	{
		this->listSize = assign.listSize;
		this->list = assign.list;
	}
	return *this;
}

// Stream operators
std::ostream &operator<<(std::ostream &stream, const Span &object)
{
	stream << "Span: " << object.getListSize();
	return stream;
}

// Getters
unsigned int Span::getListSize() const { return this->listSize; }

// Setters
void Span::setListSize(unsigned int parameter) { this->listSize = parameter; }

// Exceptions
const char *Span::FullException::what() const throw() { return "Span is full"; }

// Iterators
Span::iterator::iterator(std::list<int>::iterator iter) : iter(iter) {}

Span::iterator Span::begin() { return this->list.begin(); }

Span::iterator Span::end() { return this->list.end(); }

// Methods
void Span::addNumber(int number)
{
	if (this->listSize == this->list.size())
		throw Span::FullException();
	else
	{
		this->list.push_back(number);
		std::cout << "Number added: " << number << std::endl;
	}
}

// Span &Span::shortestSpan(Span &span, Span &span2)
// {
// }
