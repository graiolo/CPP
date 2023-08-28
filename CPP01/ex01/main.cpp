/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 17:30:02 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/27 14:33:44 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <cstdlib>

int main( void )
{
	Zombie 		*horde;
	std::string name;
	std::string	nbr;

	std::cout << "Creating zombie horder." << std::endl;

	std::cout << "Zombie name: " << std::flush;
	getline(std::cin, name, '\n');

	std::cout << "Zombie number: " << std::flush;
	getline(std::cin, nbr, '\n');

	horde = zombieHorde(std::atoi(nbr.c_str()), name);
	for (int i = 0; i < std::atoi(nbr.c_str()); i++)
		horde[i].announce(	);

	delete[	] horde;

	return 0;
}