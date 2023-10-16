// valori compresi tra 0 e 9
// stampa su standard output.
// error message should be displayed on the standard output.
// operazione findamentali
// nb divisione per 0.

// container: stack.
// You don’t need to manage the brackets or decimal numbers.

#include "RPN.hpp"

int main(int argc, char* argv[]) {
	try {
		if (argc != 2)
			throw std::invalid_argument("Error.");
		RPN::ParsArgs(argv[1]);
		RPN::Fill(argv[1]);
	} catch (std::exception &e) {
		std::cout << e.what( ) << std::endl;
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}