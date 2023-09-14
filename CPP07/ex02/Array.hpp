#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <stdlib.h>

template <typename T>
class Array {
	private:
		T*				_array;
		unsigned int	_size;

	public:
		Array(void);
		Array(unsigned int);
		Array(Array const&);

		Array<T>& operator=(Array<T> const&);
		T& operator[](int);
		unsigned int	size(void) const;

		class OutOfRange : public std::exception {
			public:
				const char* what( ) const throw ( ) {
					return ("Idenx out of bound");
				};
		};

		~Array(void);

};

# include "Array.tpp"

#endif