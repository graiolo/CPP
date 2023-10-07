#include "Span.hpp"

int	main(void) {
	Span unique(10);

	unique.fillSpan( );
	try {
		unique.addNumber(15);
	} catch (std::exception &e) {
		std::cout << e.what( ) << std::endl;
	}

	try {
		std::cout << "longestSpam: " << unique.longestSpan( ) << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what( ) << std::endl;
	}
	try {
		std::cout << "shortestSpan: " << unique.shortestSpan( ) << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what( ) << std::endl;
	}
	unique.getSpan( );
	return 0;
}