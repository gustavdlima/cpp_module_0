#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <map>

class BitcoinExchange
{
public:
	// Constructors
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &copy);

	// Destructor
	~BitcoinExchange();

	// Operators
	BitcoinExchange &operator=(const BitcoinExchange &assign);

	// Member functions
	void databaseSeeding(void);
	void addCurrency(std::string date, std::string valueString);
	void printDatabase(void);

private:
	std::map<std::string, float> _database;

};

#endif
