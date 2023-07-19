/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:51:42 by graiolo           #+#    #+#             */
/*   Updated: 2023/07/18 18:55:16 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon ( std::string weapon )
{
	this->_weapon = weapon;
};

Weapon::~Weapon ( void ) {	};

const std::string&	Weapon::getType ( void ) const { return (this->_weapon); };

void				Weapon::setType (std::string weapon) { this->_weapon = weapon; };