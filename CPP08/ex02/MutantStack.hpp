#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include "deque"
# include "stack"
# include "iostream"

template<typename T, typename Container = std::deque<T> >
class MutantStack: public std::stack<T, Container> {
    public:
        MutantStack(void);
        ~MutantStack(void) { };

        MutantStack<T, Container>(MutantStack<T, Container> const&);
        MutantStack<T, Container> & operator=(MutantStack<T, Container> const&);

        typedef typename Container::iterator iterator;
        iterator begin(void) {return this->c.begin();}
        iterator end(void) {return this->c.end();}

        typedef typename Container::const_iterator const_iterator;
        const_iterator begin(void) const {return this->c.begin();}
        const_iterator end(void) const {return this->c.end();}
    
        typedef typename Container::reverse_iterator reverse_iterator;
        typename Container::reverse_iterator rbegin(void) {return this->c.rbegin();}
        typename Container::reverse_iterator rend(void) {return this->c.rend();}

         typedef typename Container::const_reverse_iterator const_reverse_iterator;
        typename Container::const_reverse_iterator rbegin(void) const {return this->c.rbegin();}
        typename Container::const_reverse_iterator rend(void) const {return this->c.rend();}
};

# include "MutantStack.tpp"

#endif