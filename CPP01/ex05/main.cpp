/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:24:48 by graiolo           #+#    #+#             */
/*   Updated: 2023/07/19 18:55:26 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

std::string toUpper(const std::string& input) {
    std::string result;

    for (size_t i = 0; i < input.size(); i++)
        result += std::toupper(input.at(i));

    return (result);
}

int	main ( void )
{
	Harl		zoom;
	std::string	level;

	while (1)
	{
		std::cout << "Enter a level: ";
		getline(std::cin, level);
		level = toUpper(level);
		if ((std::cin.eof() || !level.compare("EXIT")))
			break ;
		zoom.complain(level);
	}

	std::cout << "quit .exe launch" << std::endl;
}