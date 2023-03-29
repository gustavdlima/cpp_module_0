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

	// Member functions
	void printDatabase(void);
	void printInputFile(void);
	void databaseSeeding(void);
	void addCurrency(std::multimap<std::string, double> &container, std::string date, std::string valueString);
	void readInputFile(std::string filename);
	bool is_double(std::string &s);
	void execute(void);
	int validateContent(std::string dbDate, std::string fileDate,
						double fileValue);

private:
	std::multimap<std::string, double> _database;
	std::multimap<std::string, double> _inputFile;
};

std::ostream &operator<<(std::ostream &out, const BitcoinExchange &exchange);

#endif
