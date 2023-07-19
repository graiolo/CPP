/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 18:03:36 by graiolo           #+#    #+#             */
/*   Updated: 2023/07/18 18:30:40 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& club) : _weapon(club)
{
	this->_name = name;
}

HumanA::~HumanA ( void ) {	};
	
void	HumanA::attack ( void ) const
{
	std::cout << this->_name << " attacks with their " << _weapon.getType(	) << std::endl;
}
