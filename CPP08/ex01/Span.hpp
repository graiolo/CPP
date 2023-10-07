#ifndef SPAN_HPP
# define SPAN_HPP

# include "algorithm"
# include "iostream"
# include "iterator"
# include "numeric" 
# include "vector"

class Span {
	private:
		unsigned int		_n;
		unsigned int		_size;
		std::vector<int>	*_elem;
	public:
		Span(unsigned int);
		~Span(void);

		Span& operator=(const Span&);
		Span(const Span&);

		void getSpan(void) const;
		void addNumber(int);
		void fillSpan(void);
		int shortestSpan(void);
		int longestSpan(void);

		class DuplicateValue : public std::exception {
			const char* what( ) const throw( ); 
		};
		class SpaceExpired : public std::exception {
			const char* what( ) const throw( ); 
		};
		class FewElements : public std::exception {
			const char* what( ) const throw ( );
		};
};

#endif