#include "BitcoinExchange.hpp"

std::map<std::string, double> BitcoinExchange::_csv;

void BitcoinExchange::PrintMap( ) {
	std::map<std::string, double>::iterator it = _csv.begin( );
	for ( ; it != _csv.end( ); ++it)
		std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
}

void BitcoinExchange::GenerateCvs(void) {
	std::string		date;
	std::string		val;
	std::ifstream   fname("./data.csv");

	if (!fname.good( ))
		throw std::invalid_argument("data.csv not exist in the current dir");
	do {
		std::getline(fname, date, ',');
		std::getline(fname, val);
		_csv[date] = std::atof(val.c_str( ));
	} while (fname.is_open( ) && !fname.eof( ));
	fname.close( );
}

void BitcoinExchange::ScapInput(const char* infile) {
	std::ifstream		fname(infile);
	std::string			in_line;
	std::string			date;
	std::string			val;
	std::istringstream	ss;

	if (!fname.good( ))
		throw std::invalid_argument("input file not found");
	do {
		std::getline(fname, in_line);
		if (in_line.empty( ))
			goto bb;
		ss.str(in_line);
		std::getline(ss, date, '|');
    	std::getline(ss, val);
		if (BitcoinExchange::CheckErrorDate(date) && BitcoinExchange::CheckErrorValue(val))
			BitcoinExchange::FindStamp(date, std::atof(val.c_str( )));
		bb:
			;
		in_line.clear( );
		date.clear( );
		val.clear( );
		ss.clear( );
	} while (fname.is_open( ) && !fname.eof( ));
	fname.close( );
}

void BitcoinExchange::FindStamp(const std::string& dateString, const double& val) {

	std::map<std::string, double>::const_reverse_iterator it = _csv.rbegin( );
	for ( ; it != _csv.rend( ); ++it) {
		if (it->first.compare(dateString) <= 0) {
			std::cout << dateString << " => " << val << " = " << it->second * val << std::endl;
			return ;
		}
	}
}

bool BitcoinExchange::CheckErrorDate(const std::string& dateString) {
	int year, month, day;
	sscanf(dateString.c_str(), "%d-%d-%d", &year, &month, &day);

	if (!(year >= 2009 && year <= 2100 && month >= 1 && month <= 12 && day >= 1 && day <= 31)){
			std::cout << "Error: bad input => " << dateString << std::endl;
			return false;
	}
	bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

	if (month == 2) {
		if ((isLeapYear && day > 29) || (!isLeapYear && day > 28)) {
			std::cout << "Error: bad input => " << dateString << std::endl;
			return false;
		}
	}
	else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
		std::cout << "Error: bad input => " << dateString << std::endl;
		return false;
	}
	return true;
}

bool BitcoinExchange::CheckErrorValue(const std::string&  s_val) {
	double	value;
	std::istringstream ss(s_val);

	if (!(ss >> value)) {
		std::cout << "Error: not a number." << std::endl;
		return false;
	}
	if (value < 0 || value > 1000) {
		std::cout << "Error: ";
		if (value < 0) {
			std::cout << "not a positive number." << std::endl;
		} else {
			std::cout << "too large number." << std::endl;
		}
		return false;
	}
	return true;
}