#ifndef RPN_HPP
# define RPN_HPP

# include "stdexcept"
# include "stack"
# include "sstream"
# include "iostream"
# include "cstdlib"

extern const std::string n_set;
extern const std::string s_set;
extern const std::string set;

class RPN {
	private:
		static std::stack<int>			_vStack;
		RPN(void);
		~RPN(void);
		RPN(const RPN&);
		RPN& operator=(const RPN&);
	public:
		static void	ParsArgs(const char *);
		static void Fill(const char *);
		static void Operations(std::string&);
};

#endif