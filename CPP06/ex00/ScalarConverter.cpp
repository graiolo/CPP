/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:54:54 by graiolo           #+#    #+#             */
/*   Updated: 2023/10/06 19:16:17 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

char			ScalarConverter::_c;
int				ScalarConverter::_i;
float			ScalarConverter::_f;
double			ScalarConverter::_d;
long long int	ScalarConverter::_o;
int				ScalarConverter::_p;

ScalarConverter::ScalarConverter(void) { };

ScalarConverter::ScalarConverter(ScalarConverter& raw) {
	(void)raw;
}

ScalarConverter::~ScalarConverter(void) { };

ScalarConverter ScalarConverter::operator=(ScalarConverter& raw) {
	(void)raw;
	return (*this);
}

void ScalarConverter::convert (std::string num) {
    std::stringstream oss;
    std::string str;

	precision(num);
	detectInf(num); 
	validTypo(num);
	detectTypo(num);

	if (detectOverfloa(0) != true) {
		if (_c < 32 && _c != 127)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << _c << "'" << std::endl;
	}

	if (detectOverfloa(1) != true)
		std::cout << "int: " << _i << std::endl;

	oss << _f;
	str = oss.str( );
	if (detectOverfloa(2) != true) {
		if (!std::abs(_f - round(_f)) && str.find("+") == std::string::npos)
			std::cout << "float: " << _f << ".0f" << std::endl;
		else
			std::cout << "float: " << std::setprecision(_p) << _f << "f" << std::endl;
	}

	oss << _d;
	str = oss.str( );
	if (detectOverfloa(3) != true)
	{
		if (!std::abs(_d - round(_d)) && str.find("+") == std::string::npos)
			std::cout << "double: " << _d << ".0" << std::endl;
		else
			std::cout << "double: " << std::setprecision(_p) << _d << std::endl;
	}
}

void ScalarConverter::precision(std::string num) {
	if (num.find('.') != std::string::npos && num.find('f') != std::string::npos)
			_p = num.size() - num.find('.') - 2;
	else if (num.find('.') != std::string::npos)
			_p = num.size() - num.find('.') - 1;
	if (_p < 1)
		_p = 1;
}

bool ScalarConverter::detectOverfloa(size_t i) {
	switch (i)
	{
		case 0:
			if (_o != _c)
				return (std::cout << "char: overflow"<< std::endl, true);
			break ;
		case 1:
			if (_o != _i)
				return (std::cout << "int: overflow" << std::endl, true);
			break ;
		case 2:
			if (std::isinf(_f))
				return (std::cout << "float: overflow" << std::endl, true);
			break ;
		case 3:
			if (std::isinf(_d))
				return (std::cout << "double: overflow" << std::endl, true);
			break ;
	}
	return(false);
}

void ScalarConverter::detectInf(std::string num) {
	if (num == "-inff" || num == "-inf")
	{
		std::cout << "char: impossible"<< std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		exit(EXIT_SUCCESS);
	}
	if (num == "+inff" || num == "+inf")
	{
		std::cout << "char: impossible"<< std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
		exit(EXIT_SUCCESS);
	}
	if (num == "nanf" || num == "nan")
	{
		std::cout << "char: impossible"<< std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		exit(EXIT_SUCCESS);
	}
	return ;
}

void	 ScalarConverter::validTypo(std::string num) {
	size_t	n_char;
	size_t	shift;
	size_t	n_dot;

	shift = 0;
	n_dot = 0;
	if (num.length( ) == 1)
		return ;
	if (num.find("f") != std::string::npos && num.at(num.length( ) - 1) == 'f')
		shift++;
	n_char = 0;
	for (unsigned long i = 0; i != num.length( ) - shift; i++) {
		if (i ==0 && (num.at(i) == '+' || num.at(i) == '-'))
			;
		else if (num.at(i) == '.')
			n_dot++;
		else if (!isdigit(num.at(i)))
			n_char++;
	}
	if (n_char == 0 && n_dot < 2)
		return ;
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: nanf" << std::endl;
	std::cout << "double: nan" << std::endl;
	exit(EXIT_FAILURE);
}

void ScalarConverter::detectTypo(std::string num) {
	if (num.length( ) == 1 && !std::isdigit(num.at(0)))
		return (charTypo(const_cast<char*>(num.c_str( ))));
	if (num.find("f") != std::string::npos && num.at(num.length( ) - 1) == 'f')
		return (floatTypo(const_cast<char*>(num.c_str( ))));
	if (num.find(".") != std::string::npos)
		return (doubleTypo(const_cast<char*>(num.c_str( ))));
	return (intTypo(const_cast<char*>(num.c_str( ))));
}


void ScalarConverter::floatTypo(char* num) {
	_o = strtoll(num, NULL, 10);

	_f = atof(num);
	_c = static_cast<char>(_f);
	_i = static_cast<int>(_f);
	_d = static_cast<double>(_f);

	if(_o != _f)
		ScalarConverter::doubleTypo(num);
}

void ScalarConverter::doubleTypo(char* num) {
	_o = strtoll(num, NULL, 10);

	_d = atof(num);
	_c = static_cast<char>(_d);
	_i = static_cast<int>(_d);
	_f = static_cast<float>(_d);

}

void ScalarConverter::charTypo(char* num) {

	_c = num[0];
	_i = static_cast<int>(_c);
	_f = static_cast<float>(_c);
	_d = static_cast<double>(_c);

	_o = _i;
}

void ScalarConverter::intTypo(char* num) {
	_o = strtoll(num, NULL, 10);

	_i = atoi(num);
	_c = static_cast<char>(_i);
	_f = static_cast<float>(_i);
	_d = static_cast<double>(_i);

	if(_o != _i)
		ScalarConverter::floatTypo(num);
}
