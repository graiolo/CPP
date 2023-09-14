/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:53:09 by graiolo           #+#    #+#             */
/*   Updated: 2023/09/11 17:03:35 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main (int argc, char** argv) {
	if (argc != 2)
		return (std::cout << "Invalid number of argument" << std::endl, 1);
	std::string		s_num(argv[1]);
    ScalarConverter::convert(s_num);
    return (0);
}