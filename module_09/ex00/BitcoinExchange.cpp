#include "BitcoinExchange.hpp"

// Constructors
BitcoinExchange::BitcoinExchange()
{
	this->databaseSeeding();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
	(void)copy;
	std::cout << "\e[0;33mCopy Constructor called of BitcoinExchange\e[0m" << std::endl;
}

// Destructor
BitcoinExchange::~BitcoinExchange()
{
	std::cout << "\e[0;31mDestructor called of BitcoinExchange\e[0m" << std::endl;
}

// Operators
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &assign)
{
	(void)assign;
	return *this;
}

// Member functions

void BitcoinExchange::databaseSeeding(void)
{
	std::ifstream file;
	std::string line;
	std::string date;
	std::string	value;

	file.open("./db/data.csv");
	if (file.is_open())
	{
		while (getline(file, line))
		{
			std::stringstream ss(line);
			getline(ss, date, ',');
			getline(ss, value, ',');
			addCurrency(date, value);
		}
		file.close();
	}
	else
	{
		std::cout << "Unable to open file" << std::endl;
	}
}

void BitcoinExchange::addCurrency(std::string date, std::string valueString)
{
	float value;

	value = std::atof(valueString.c_str());
	this->_database[date] = value;
}

void BitcoinExchange::printDatabase(void)
{
	std::map<std::string, float>::iterator it;

	for (it = this->_database.begin(); it != this->_database.end(); it++)
	{
		std::cout << it->first << " => " << it->second << std::endl;
	}
}
