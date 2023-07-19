/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:24:48 by graiolo           #+#    #+#             */
/*   Updated: 2023/07/19 20:53:16 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main ( int argc, char **argv )
{

	if (argc != 2)
	{
		std::cout << "[ Probably probably nothing important ]" << std::endl;
		return (1);
	}

	Harl		zoom;
	std::string	level(argv[1]);

	zoom.complain(level);

}