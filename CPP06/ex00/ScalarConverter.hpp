/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:49:13 by graiolo           #+#    #+#             */
/*   Updated: 2023/10/06 19:13:55 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCLARCONVERT_HPP
# define SCLARCONVERT_HPP

# include "iostream"
# include "iomanip"
# include "cstdlib"
# include "climits"
# include "cfloat"
# include "string"
# include "sstream"
# include "string"
# include "cmath"

class ScalarConverter {
	private:
		static char				_c;
		static int				_i;
		static float			_f;
		static double			_d;
		static long long int	_o;
		static int				_p;

		ScalarConverter(void);
		~ScalarConverter(void);
		ScalarConverter(ScalarConverter&);
		ScalarConverter operator=(ScalarConverter&);
	public:

		static void precision(std::string);
		
		static void convert(std::string);

		static void	validTypo(std::string);
		static void	detectTypo(std::string);
		static bool detectOverfloa(size_t);

		static void detectInf(std::string);

		static void	charTypo(char* num);
		static void	intTypo(char* num);
		static void	floatTypo(char* num);
		static void	doubleTypo(char* num);
};

#endif