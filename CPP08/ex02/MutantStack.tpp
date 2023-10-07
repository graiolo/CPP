#include "MutantStack.hpp"

template<typename T, typename Container>
MutantStack<T, Container>::MutantStack(void) : std::stack<T, Container>( ) { }

template<typename T, typename Container>
MutantStack<T, Container>::MutantStack(MutantStack<T, Container> const & src) {
    *this = src;
}

template<typename T, typename Container>
MutantStack<T, Container>& MutantStack<T, Container>::operator=(MutantStack<T, Container> const & raw) {
    if (this != &raw)
        this->c = raw.c;
    return *this;
}