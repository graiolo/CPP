/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 12:14:22 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/28 17:00:30 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( const std::string name) : ClapTrap(name) {
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap constructor " << _name << " is spawn!" << std::endl;
};

ScavTrap::ScavTrap( ScavTrap &raw) : ClapTrap(raw._name) {
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap copy constructor " << _name << " is spawn!" << std::endl;
} ;

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << _name << " is despawn!" << std::endl;
};

ScavTrap& ScavTrap::operator=(const ScavTrap &raw) {
    std::cout << "ScavTrap constructor assignment " << _name << " is spawn!" << std::endl;
    if (this == &raw)
        return (*this);
    this->_name = raw._name;
    this->_hitPoints =raw._hitPoints;
    this->_energyPoints =  raw._energyPoints;
    this->_attackDamage = raw._attackDamage;
    return (*this);
}

void ScavTrap::attack(const std::string& target) {
    if (_hitPoints == 0)
    {
        std::cout << "ScavTrap " << _name << " is dead! " << _name <<" cant attacks"<< std::endl;
        return;   
    }
    if (_energyPoints <= 0)
    {
        std::cout << "ScavTrap " << _name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    _energyPoints -= 1;
}

void ScavTrap::guardGate( ) {
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}