/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:33:45 by graiolo           #+#    #+#             */
/*   Updated: 2023/07/16 19:58:00 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie ( std::string name )
{
	this->_name = name; 
}

Zombie::~Zombie ( void )
{
    std::cout << "R.I.P. Zombie " << this->_name;
	std::cout << ". May your appetite for brains rest in peace too!" << std::endl;
}

void    Zombie::announce ( void )
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}