#include <iostream>
#include <string>
#include "BitcoinExchange.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Error: could not open file" << std::endl;
		return (1);
	}
	BitcoinExchange exchange;
	exchange.databaseSeeding();
	// exchange.printDatabase();
	exchange.readInputFile(argv[1]);
	std::cout << std::endl;
	// exchange.printInputFile();
	std::cout << std::endl;
	exchange.execute();
	return (0);
}
