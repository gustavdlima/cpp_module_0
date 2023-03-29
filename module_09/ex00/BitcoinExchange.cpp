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


// Member functions
void BitcoinExchange::printDatabase(void)
{
	std::multimap<std::string, double>::iterator it;

	for (it = this->_database.begin(); it != this->_database.end(); it++)
	{
		std::cout << it->first << ", " << it->second << std::endl;
	}
}

void BitcoinExchange::printInputFile(void)
{
	std::multimap<std::string, double>::iterator it;

	for (it = this->_inputFile.begin(); it != this->_inputFile.end(); it++)
	{
		std::cout << it->first << ", " << it->second << std::endl;
	}
}

bool BitcoinExchange::is_double(std::string &s)
{
	char *endPtr = 0;
	strtod(s.c_str(), &endPtr);
	return (*endPtr == '\0');
}

void BitcoinExchange::databaseSeeding(void)
{
	std::ifstream inputFile;
	std::string line;
	std::string date;
	std::string value;

	inputFile.open("./db/data.csv");
	if (inputFile.is_open())
	{
		getline(inputFile, line);
		while (getline(inputFile, line))
		{
			std::stringstream ss(line);
			getline(ss, date, ',');
			getline(ss, value, ',');
			this->_database.insert(std::pair<std::string, double>(date, std::atof(value.c_str())));
		}
		inputFile.close();
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
			// std::cout << value << std::endl;
			// std::cout << date << std::endl;
			this->_inputFile.insert(std::pair<std::string, double>(date, std::atof(value.c_str())));
		}
		file.close();
	}
	else
	{
		throw BitcoinExchange::couldNotOpenFileException();
	}
}

int BitcoinExchange::validateContent(std::string dbDate, std::string fileDate,
									double fileValue)
{
	int dbYear = std::atoi(dbDate.substr(0, 4).c_str());
	int dbMonth = std::atoi(dbDate.substr(5, 2).c_str());
	int dbDay = std::atoi(dbDate.substr(8, 2).c_str());

	int fileYear = std::atoi(fileDate.substr(0, 4).c_str());
	int fileMonth = std::atoi(fileDate.substr(5, 2).c_str());
	int fileDay = std::atoi(fileDate.substr(8, 2).c_str());

	if (fileYear < 2009 || fileYear > 2022 || fileMonth < 1
		|| fileMonth > 12 || fileDay < 1 || fileDay > 31)
		return 1;
	if (fileValue > 1000)
		return 2;
	if (fileValue < 0)
		return 3;
	if (dbYear  == fileYear && dbMonth == fileMonth && dbDay == fileDay )
		return 4;
	if (dbYear == fileYear && dbMonth == fileMonth && dbDay < fileDay )
		return 5;
	return 0;
}

void BitcoinExchange::execute(void)
{
	std::multimap<std::string, double>::iterator it;
	std::multimap<std::string, double>::reverse_iterator it2;

	for (it = this->_inputFile.begin(); it != this->_inputFile.end(); it++)
	{
		for (it2 = this->_database.rbegin(); it2 != this->_database.rend(); it2++)
		{
			switch (validateContent(it2->first, it->first,
					it->second))
			{
				case 1:
					std::cout << "Error: bad input => " << it->first
						<< std::endl;
					break ;
				case 2:
					std::cout << "Error: too large a number" << std::endl;
					break ;
				case 3:
					std::cout << "Error: not a positive number" << std::endl;
					break ;
				case 4:
					std::cout << it->first << " => " << it->second
						<< " = " << (it->second * it2->second) << std::endl;
					break ;
				case 5:
					std::cout << it->first << " => "<< it->second
						<< " = " << (it->second * it2->second) << std::endl;
					break ;
				default:
					break ;
			}

			// Break out of the inner loop when a match is found
			if (validateContent(it2->first, it->first,
								it->second) != 0)
				break;
		}
	}
}
