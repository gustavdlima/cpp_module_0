#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <map>
#include <limits.h>

class BitcoinExchange
{
public:
	// Exceptions
	class couldNotOpenFileException : public std::exception
	{
		virtual const char *what() const throw();
	};

	// Constructors
	BitcoinExchange();
	BitcoinExchange(std::string filename);
	BitcoinExchange(const BitcoinExchange &copy);

	// Destructor
	~BitcoinExchange();

	// Operators
	BitcoinExchange &operator=(const BitcoinExchange &assign);

	// // Member functions
	void	openFile(std::ifstream &file, std::string filename);
	void	readFile(std::ifstream &file, std::multimap<std::string,
							std::string> &container, char charDelimiter);
	void	closeFile(std::ifstream &file);
	void	populateContainer(std::multimap<std::string, std::string>
							&container, std::string date, std::string value);
	void	databaseContainerSeeding(void);
	void	inputFileContainerSeeding(std::string filename);
	bool	isDateValid(std::string &s);
	bool	isValueValid(std::string &s);
	void printDatabase(void);
	void printInputFile(void);
	bool validateContent(std::string fileDate,
								std::string fileValue);
	void deleteSpaces(std::string &s);
	void compareToPrint(
		std::multimap<std::string, std::string>::iterator &fileIterator,
		std::multimap<std::string, std::string>::const_reverse_iterator &dbIterator);
	// void addCurrency(std::multimap<std::string, double> &container, std::string date, std::string valueString);
	// void readInputFile(std::string filename);
	bool isDouble(std::string &s);
	void execute(void);
	// int validateContent(std::string dbDate, std::string fileDate,
	// 					double fileValue);

private:
	std::multimap<std::string, std::string> _database;
	std::multimap<std::string, std::string> _inputFile;
};

std::ostream &operator<<(std::ostream &out, const BitcoinExchange &exchange);

#endif
