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

	exchange.databaseContainerSeeding();
	exchange.inputFileContainerSeeding(argv[1]);
	exchange.execute();
	return (0);
}
