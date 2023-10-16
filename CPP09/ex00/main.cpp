#include "BitcoinExchange.hpp"

int main(int argc, char* argv[]) {
	try {
		if (argc != 2)
			throw std::invalid_argument("Error: could not open file.");
		BitcoinExchange::GenerateCvs( );
		BitcoinExchange::ScapInput(argv[1]);
	} catch (std::exception &e) {
		std::cout << e.what( ) << std::endl;
		return (1);
	}
	return (0);
}