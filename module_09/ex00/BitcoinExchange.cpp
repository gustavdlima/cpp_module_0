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
	return "Error: could not open file";
}

// Member functions
void BitcoinExchange::printDatabase(void)
{
	std::multimap<std::string, std::string>::iterator it;

	for (it = this->_database.begin(); it != this->_database.end(); it++)
	{
		std::cout << it->first << ", " << it->second << std::endl;
	}
}

void BitcoinExchange::printInputFile(void)
{
	std::multimap<std::string, std::string>::iterator it;

	for (it = this->_inputFile.begin(); it != this->_inputFile.end(); it++)
	{
		std::cout << it->first << ", " << it->second << std::endl;
	}
}

// bool BitcoinExchange::is_double(std::string &s)
// {
// 	char *endPtr = 0;
// 	strtod(s.c_str(), &endPtr);
// 	return (*endPtr == '\0');
// }

void BitcoinExchange::closeFile(std::ifstream &file)
{
	file.close();
}

void BitcoinExchange::openFile(std::ifstream &file, std::string filename)
{
	std::cout << "Opening file..." << filename << std::endl;
	file.open(filename.c_str());
	if (!file.is_open())
		throw BitcoinExchange::couldNotOpenFileException();
}

void BitcoinExchange::deleteSpaces(std::string &s)
{
	std::string::size_type pos = s.find(' ');

	if (pos != std::string::npos)
	{
		s.erase(pos, 1);
		deleteSpaces(s);
	}
}

void BitcoinExchange::readFile(std::ifstream &file,
							std::multimap<std::string, std::string> &container, char charDelimiter)
{
	std::string line;
	std::string date;
	std::string value;

	if (file.is_open())
	{
		while (getline(file, line))
		{
			std::stringstream ss(line);
			getline(ss, date, charDelimiter);
			getline(ss, value, charDelimiter);
			deleteSpaces(date);
			populateContainer(container, date, value);
		}
	}
	else
		throw BitcoinExchange::couldNotOpenFileException();
}

void BitcoinExchange::populateContainer(std::multimap<std::string, std::string>
							&container, std::string date, std::string value)
{
	container.insert(std::pair<std::string, std::string>(date, value));
}

void BitcoinExchange::databaseContainerSeeding(void)
{
	std::ifstream inputFile;

	openFile(inputFile, "./db/data.csv");
	readFile(inputFile, this->_database, ',');
	closeFile(inputFile);
}

void BitcoinExchange::inputFileContainerSeeding(std::string filename)
{
	std::ifstream inputFile;

	openFile(inputFile, filename);
	readFile(inputFile, this->_inputFile, '|');
	closeFile(inputFile);
}

bool BitcoinExchange::isDouble(std::string &s)
{
	char *endPtr = 0;
	strtod(s.c_str(), &endPtr);
	return (*endPtr == '\0');
}

bool BitcoinExchange::isDateValid(std::string &s)
{
	int year = std::atoi(s.substr(0, 4).c_str());
	int month = std::atoi(s.substr(5, 2).c_str());
	int day = std::atoi(s.substr(8, 2).c_str());

	if (year < 2009 || year > 2022 || month < 1
		|| month > 12 || day < 1 || day > 31)
		return false;
	return true;
}

bool BitcoinExchange::isValueValid(std::string &s)
{
	if (std::atof(s.c_str()) > 1000 || std::atof(s.c_str()) < 0)
		return false;
	return true;
}

void BitcoinExchange::compareToPrint(std::multimap<std::string,
		std::string>::iterator &fileIterator, std::multimap<std::string,
		std::string>::const_reverse_iterator &dbIterator)
{
	int dbYear = std::atoi(dbIterator->first.substr(0, 4).c_str());
	int dbMonth = std::atoi(dbIterator->first.substr(5, 2).c_str());
	int dbDay = std::atoi(dbIterator->first.substr(8, 2).c_str());
	int fileYear = std::atoi(fileIterator->first.substr(0, 4).c_str());
	int fileMonth = std::atoi(fileIterator->first.substr(5, 2).c_str());
	int fileDay = std::atoi(fileIterator->first.substr(8, 2).c_str());

	double fileValueDouble = std::atof(fileIterator->second.c_str());
	double dbValueDouble = std::atof(dbIterator->second.c_str());

	if (dbYear == fileYear && dbMonth == fileMonth && dbDay == fileDay)
	{
		std::cout << fileIterator->first << " => " << fileIterator->second
			<< " = " << (fileValueDouble * dbValueDouble) << std::endl;
		return ;
	}
	else if (dbYear == fileYear && dbMonth == fileMonth
				&& fileDay == (dbDay - 1))
	{
		dbIterator++;
		std::cout << fileIterator->first << " => " << fileIterator->second
			<< " = " << (fileValueDouble * dbValueDouble) << std::endl;
		return ;
	}
}

bool BitcoinExchange::validateContent(std::string fileDate,
									std::string fileValue)
{
	if (!BitcoinExchange::isDouble(fileValue))
	{
		std::cout << "Error: not a double or int value." << std::endl;
		return false;
	}
	else if (!BitcoinExchange::isDateValid(fileDate))
	{
		std::cout << "Error: bad input => " << fileDate << std::endl;
		return false;
	}
	else if (!BitcoinExchange::isValueValid(fileValue))
	{
		std::cout << "Error: value must be either a float or a positive integer between 0 and 1000." << std::endl;
		return false;
	}
	return true;
}

void BitcoinExchange::execute(void)
{
	std::multimap<std::string, std::string>::iterator it;
	std::multimap<std::string, std::string>::const_reverse_iterator it2;

	for (it = this->_inputFile.begin(); it != this->_inputFile.end(); it++)
	{
		if (validateContent(it->first, it->second))
		{
			std::cout << "Reading line: *******************" << std::endl;
			for (it2 = this->_database.rbegin(); it2 != this->_database.rend();
					it2++)
			{
				compareToPrint(it, it2);
			}
		}
	}
}
