#include "Base.hpp"

int main(void) {
	Base* ptr;

	for (int i = 0; i < 100; i++) {
			ptr = generate( );
			identify(ptr);
			identify(*ptr);
			std::cout << std::endl;
	}
	return (0);
}