#include <iostream>
#include <string>
#include "BitcoinExchange.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Usage: ./ex00 [exchange name]" << std::endl;
		return (1);
	}
	(void)argv;
	BitcoinExchange exchange;
	exchange.databaseSeeding();
	exchange.printDatabase();
	return (0);
}
