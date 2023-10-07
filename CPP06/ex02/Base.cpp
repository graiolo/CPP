#include "Base.hpp"

Base::~Base(void) { };

Base*	generate(void) {
	int	rnd = rand( ) % 3;
	switch (rnd)
	{
		case (0):
			return (std::cout << "Il puntatore generato est classe A " << std::endl, new A);
		case (1):
			return (std::cout << "Il puntatore generato est classe B " << std::endl, new B);
		case(2):
			return (std::cout << "Il puntatore generato est classe C " << std::endl, new C);
		default:
			std::cout << "The impossibile is appening" << std::endl;
	}
	return (NULL);
}

void	identify(Base* p) {
	if (dynamic_cast<A*>(p)) {
		std::cout << "Puntatore appartenente alla classe A" << std::endl;
		return ;
	}
	if (dynamic_cast<B*>(p)) {
		std::cout << "Puntatore appartenente alla classe B" << std::endl;
		return ;
	}
	if (dynamic_cast<C*>(p)){
		std::cout << "Puntatore appartenente alla classe C" << std::endl;
		return ;
	}
	std::cout << "Impossbile identifiace il puntore in ingresso in quanto nullo" << std::endl;
}

void	identify(Base& p) {
	try {
		A	&ptr = dynamic_cast<A&>(p);
		(void)ptr;
		std::cout << "Riferimento all classe A" << std::endl;
	} catch (std::exception &e) { };
	try {
		B	&ptr = dynamic_cast<B&>(p);
		(void)ptr;
		std::cout << "Riferimento all classe B" << std::endl;
	} catch (std::exception &e) { };
	try {
		C	&ptr = dynamic_cast<C&>(p);
		(void)ptr;
		std::cout << "Riferimento all classe C" << std::endl;
	} catch (std::exception &e) { };
}