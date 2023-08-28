/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 16:17:48 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/27 14:32:12 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *brr;

	try {
	brr = new Zombie [N];
	} catch (const std::bad_alloc& e) {
		std::cerr << "Caught bad_alloc exception: " << e.what() << std::endl;
	}
	for (int i = 0; i < N; i++)
		brr[i].setName ( name );
	return (brr);
}