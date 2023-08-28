/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 16:08:31 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/18 19:21:48 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( const std::string &name) : ClapTrap(name + "_clap_name"), FragTrap ( name ), ScavTrap( name ) {
    this->_name = name;
    std::cout << "DiamondTrap " << _name << " is spawn!" << std::endl;
    FragTrap::_hitPoints = 100;
    ScavTrap::_energyPoints = 50;
    FragTrap::_attackDamage = 30;
}

DiamondTrap::DiamondTrap( DiamondTrap &raw) : ClapTrap(raw._name + "_clap_name"), FragTrap ( raw._name ), ScavTrap( raw._name ) {
    this->_name = raw._name;
    std::cout << "DiamondTrap " << _name << " is spawn!" << std::endl;
    FragTrap::_hitPoints = 100;
    ScavTrap::_energyPoints = 50;
    FragTrap::_attackDamage = 30;
}

DiamondTrap::~DiamondTrap ( ) {
    std::cout << "DiamondTrap " << _name << " is despawn!" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap &raw) {
    if (this == &raw)
        return (*this);
    this->_name = raw._name;
    this->FragTrap::_hitPoints = raw.FragTrap::_hitPoints;
    this->ScavTrap::_energyPoints =  raw.ScavTrap::_energyPoints;
    this->FragTrap::_attackDamage = raw.FragTrap::_attackDamage;
    return (*this);
}

void DiamondTrap::whoAmI( void ) {
    std::cout << "I am a DiamondTrap named " << this->_name << ", ClapTrap name: " << this->ClapTrap::_name << std::endl;
}