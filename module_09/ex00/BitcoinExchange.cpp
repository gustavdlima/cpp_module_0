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
	int year;
	int month;
	int day;
	float value;

	year = std::atoi(date.substr(0, 4).c_str());
	month = std::atoi(date.substr(5, 2).c_str());
	day = std::atoi(date.substr(8, 2).c_str());
	value = std::atof(valueString.c_str());

	if (year < 2009 || year > 2022 || month < 1 || month > 12 || day < 1 || day > 31)
		std::cout << "Error: bad input => " << date << std::endl;
	if (value > INT_MAX)
		std::cout << "Error: too large a number" << std::endl;
	if (value < 0)
		std::cout << "Error: not a positive number" << std::endl;
	else {
		container.insert(std::pair<std::string, float>(date, value));
	}
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
			addCurrency(this->_inputFile, date, value);
		}
		file.close();
	}
	else
	{
		throw BitcoinExchange::couldNotOpenFileException();
	}
}

int BitcoinExchange::checkDate(std::string dbDate, std::string fileDate)
{

	int dbYear = std::atoi(dbDate.substr(0, 4).c_str());
	int dbMonth = std::atoi(dbDate.substr(5, 2).c_str());
	int dbDay = std::atoi(dbDate.substr(8, 2).c_str());

	int fileYear = std::atoi(fileDate.substr(0, 4).c_str());
	int fileMonth = std::atoi(fileDate.substr(5, 2).c_str());
	int fileDay = std::atoi(fileDate.substr(8, 2).c_str());

	if (dbYear  == fileYear && dbMonth == fileMonth && dbDay == fileDay )
	{
		return 1;
	}
	if (dbYear == fileYear && dbMonth == fileMonth && dbDay < fileDay )
	{
		return 2;
	}
	// else if (year == year2 && month < month2)
	// {
	// 	std::cout << "Date: " << date << std::endl;
	// }
	// else if (year < year2)
	// {
	// 	std::cout << "Date: " << date << std::endl;
	// }

	return 0;
}

void BitcoinExchange::execute(void)
{
	std::multimap<std::string, float>::iterator it;
	std::multimap<std::string, float>::iterator it2;

	for (it = this->_inputFile.begin(); it != this->_inputFile.end(); it++)
	{
		float exchangeRate = it->second;
		for (it2 = this->_database.begin(); it2 != this->_database.end(); it2++)
		{
			float value = it2->second;

			switch (checkDate(it->first, it2->first))
			{
				case 1:
					std::cout << it->first << " => " << it->second << " = " << value * exchangeRate << std::endl;
					break ;
				case 2:
					std::cout << it->first << " => " << it->second << " = " << value * exchangeRate << std::endl;
					break ;
				default:
					break ;
			}

			// Break out of the inner loop when a match is found
			if (checkDate(it->first, it2->first) != 0)
				break;
		}
	}
}
