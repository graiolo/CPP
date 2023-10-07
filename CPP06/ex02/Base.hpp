#ifndef BASE_HPP
# define BASE_HPP

# include "stdlib.h"
# include "iostream"
# include "unistd.h"


class Base {
	public:
		virtual ~Base(void);
};

class A : public Base { };
class B : public Base { };
class C : public Base { };

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif