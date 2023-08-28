/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 16:17:48 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/25 23:30:49 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie( std::string name )
{
	Zombie	*zb;

	try {
		zb = new Zombie(name);
	} catch (const std::bad_alloc& e) {
		std::cerr << "Caught bad_alloc exception: " << e.what() << std::endl;
		zb = NULL;
	}
	return (zb);
}