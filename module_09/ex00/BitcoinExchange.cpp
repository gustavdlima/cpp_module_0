#include "BitcoinExchange.hpp"

// Constructors
BitcoinExchange::BitcoinExchange()
{
	// this->databaseSeeding();
}

BitcoinExchange::BitcoinExchange(std::string filename)
{
	(void)filename;
	// this->databaseSeeding();
	// this->readInputFile(filename);
	// this->validadeInputFile();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
	if (this == &copy)
		return;
	this->_database = copy._database;
	this->_inputFile = copy._inputFile;
}

// Destructor
BitcoinExchange::~BitcoinExchange()
{
}

// Operators
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &assign)
{
	(void)assign;
	return *this;
}

std::ostream &operator<<(std::ostream &out, const BitcoinExchange &exchange)
{
	(void)exchange;
	return out;
}

// Exceptions
const char *BitcoinExchange::couldNotOpenFileException::what() const throw()
{
	return "Error: could not open file.";
}

const char *BitcoinExchange::invalidInputFileException::what() const throw()
{
	return "Error: bad input.";
}

const char *BitcoinExchange::invalidDateException::what() const throw()
{
	return "Error: invalid date.";
}

const char *BitcoinExchange::invalidNumberException::what() const throw()
{
	return "Error: not a positive number.";
}

// Member functions
void BitcoinExchange::printDatabase(void)
{
	std::multimap<std::string, float>::iterator it;

	for (it = this->_database.begin(); it != this->_database.end(); it++)
	{
		std::cout << it->first << ", " << it->second << std::endl;
	}
}

void BitcoinExchange::printInputFile(void)
{
	std::multimap<std::string, float>::iterator it;

	for (it = this->_inputFile.begin(); it != this->_inputFile.end(); it++)
	{
		std::cout << it->first << ", " << it->second << std::endl;
	}
}

void BitcoinExchange::addCurrency(std::multimap<std::string, float> &container, std::string date, std::string valueString)
{
	float value;

	value = std::atof(valueString.c_str());
	// std::cout << date << " => " << value << std::endl;
	container.insert(std::pair<std::string, float>(date, value));
}

void BitcoinExchange::databaseSeeding(void)
{
	std::ifstream file;
	std::string line;
	std::string date;
	std::string value;

	file.open("./db/data.csv");
	if (file.is_open())
	{
		while (getline(file, line))
		{
			std::stringstream ss(line);
			getline(ss, date, ',');
			getline(ss, value, ',');
			addCurrency(this->_database, date, value);
		}
		file.close();
	}
	else
	{
		throw BitcoinExchange::couldNotOpenFileException();
	}
}

void BitcoinExchange::readInputFile(std::string filename)
{
	std::ifstream file;
	std::string line;
	std::string date;
	std::string value;

	file.open(filename.c_str());
	if (file.is_open())
	{
		while (getline(file, line))
		{
			std::stringstream ss(line);
			getline(ss, date, '|');
			getline(ss, value, '|');
			value.erase(0, value.find_first_not_of(" \t\n\r"));
        	date.erase(date.find_last_not_of(" \t\n\r") + 1);
			std::cout << date << "=>" << value << std::endl;
			addCurrency(this->_inputFile, date, value);
		}
		file.close();
	}
	else
	{
		throw BitcoinExchange::couldNotOpenFileException();
	}
}

void BitcoinExchange::execute(void)
{
	std::multimap<std::string, float>::iterator it;
	std::multimap<std::string, float>::iterator it2;

	for (it = this->_inputFile.begin(); it != this->_inputFile.end(); it++)
	{
		// std::cout << it->second << std::endl;
		for (it2 = this->_database.begin(); it2 != this->_database.end(); it2++)
		{
			if (it->first == it2->first)
			{
				std::cout << it->first << std::endl;
				// std::cout << it2->first << std::endl;
			}
		}
	}
}
