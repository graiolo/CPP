/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 18:06:35 by graiolo           #+#    #+#             */
/*   Updated: 2023/07/18 23:26:16 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB ( std::string name, Weapon club)
{
	this->_name = name;
	this->_weapon = const_cast< Weapon* >(&club);
}

HumanB::HumanB ( std::string name)
{
	this->_name = name;
	this->_weapon = NULL;
}

HumanB::~HumanB ( void ) {	};

void	HumanB::setWeapon (  Weapon &club )
{
	this->_weapon = &club;
}

void	HumanB::attack ( void ) const
{
	if (!_weapon)
		std::cout << _name << " no have a weapon so... RUN AWAY " << std::endl;
	else
		std::cout << _name << " attacks with their " << this->_weapon->getType(	) << std::endl;
}