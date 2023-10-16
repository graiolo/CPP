#ifndef BITCOINEXCHANGER_HPP
# define BITCOINEXCHANGER_HPP

# include "stdexcept"
# include "iostream"
# include "stdlib.h"
# include "sstream"
# include "string"
# include "fstream"
# include "ctime"
# include "map"

class BitcoinExchange {
	private:
		static std::map<std::string, double> _csv;
		BitcoinExchange(void);
		~BitcoinExchange(void);
		BitcoinExchange(const BitcoinExchange&);
		BitcoinExchange& operator=(const BitcoinExchange&);
	public:
		static void		GenerateCvs(void);
		static void		ScapInput(const char*);
		static bool		CheckErrorDate(const std::string&);
		static bool		CheckErrorValue(const std::string&);
		static void		FindStamp(const std::string&, const double&);
		static void		PrintMap(void);
};

#endif 