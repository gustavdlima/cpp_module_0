#include "Data.hpp"

// Constructors
Data::Data()
{
	std::cout << "\e[0;33mDefault Constructor called of Data\e[0m" << std::endl;
}

Data::Data(int value) : value(value)
{
	std::cout << "\e[0;33mDefault Constructor called of Data\e[0m" << std::endl;
}

Data::Data(const Data &copy)
{
	std::cout << "\e[0;33mCopy Constructor called of Data\e[0m" << std::endl;
	if (this != &copy)
		*this = copy;
}

// Destructor
Data::~Data()
{
	std::cout << "\e[0;31mDestructor called of Data\e[0m" << std::endl;
}

// Operators
Data & Data::operator=(const Data &assign)
{
	std::cout << "\e[0;33mAssignation operator called of Data\e[0m" << std::endl;
	if (this != &assign)
		this->value = assign.value;
	return *this;
}

std::ostream &operator<<(std::ostream& out, Data& object)
{
	out << "Value: " << object.getValue();
	return out;
}

// Getter
int	Data::getValue(void)
{
	return this->value;
}

// Methods
uintptr_t Data::serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Data::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

