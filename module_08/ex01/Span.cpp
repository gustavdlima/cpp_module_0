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

const char *Span::NoSpanException::what() const throw()
{
	return "Span has no numbers";
}

const char *Span::LessThanTwoNumbersException::what() const throw()
{
	return "Span has less than two numbers";
}

// Iterators
Span::iterator::iterator(std::list<int>::iterator iter) : iter(iter) {}

Span::iterator Span::begin() { return this->list.begin(); }

Span::iterator Span::end() { return this->list.end(); }

// Methods
void Span::addNumber(int number)
{
	if (this->getListSize() == 0)
		throw Span::NoSpanException();
	if (this->getListSize() == this->list.size())
		throw Span::FullException();
	else
	{
		this->list.push_back(number);
		std::cout << "Number added: " << number << std::endl;
	}
}

int Span::shortestSpan()
{
	if (this->getListSize() == 0)
		throw Span::NoSpanException();
	if (this->list.size() < 2)
		throw Span::LessThanTwoNumbersException();
	else
	{
		std::list<int> sortedList = this->list;
		sortedList.sort();
		std::list<int>::iterator it = sortedList.begin();
		std::list<int>::iterator it2 = sortedList.begin();
		it2++;
		int shortestSpan = *it2 - *it;
		while (it2 != sortedList.end())
		{
			// the shortest span will always be between adjacent numbers
			if (*it2 - *it < shortestSpan)
				shortestSpan = *it2 - *it;
			it++;
			it2++;
		}
		return shortestSpan;
	}
}

int Span::longestSpan()
{
	if (this->getListSize() == 0)
		throw Span::NoSpanException();
	if (this->list.size() < 2)
		throw Span::LessThanTwoNumbersException();
	else
	{
		std::list<int> sortedList = this->list;
		sortedList.sort();

		int min = *std::min_element(sortedList.begin(), sortedList.end());
		int max = *std::max_element(sortedList.begin(), sortedList.end());

		// subtract the minimum from the maximum to get the longest span
		return (min - max) * -1;
	}
}
