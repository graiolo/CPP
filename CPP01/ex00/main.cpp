/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 17:30:02 by graiolo           #+#    #+#             */
/*   Updated: 2023/07/16 20:02:09 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
	std::string name;

	std::cout << "Creating zombie on the stack." << std::endl;
	std::cout << "Zombie name: " << std::flush;
	getline(std::cin, name, '\n');

	Zombie zombi(name);
    
	std::cout << "Creating zombie on the heap." << std::endl;
	std::cout << "Zombie name: " << std::flush;
	getline(std::cin, name, '\n');

	Zombie *alloc_zombie = newZombie(name);
	alloc_zombie->announce();
	delete alloc_zombie;

	std::cout << "Calling randomChump()." << std::endl;
	randomChump("il Berlusca");
	return 0;
}