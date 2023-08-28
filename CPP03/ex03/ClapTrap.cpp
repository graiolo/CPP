/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:15:38 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/28 16:14:12 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( const std::string &name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap " << _name << " is spawn!" << std::endl;
 };

ClapTrap::ClapTrap( ClapTrap &raw) : _name(raw._name), _hitPoints(10), _energyPoints(10), _attackDamage(0) { 
    std::cout << "ClapTrap " << _name << " is spawn!" << std::endl;
} ;
        
ClapTrap::~ClapTrap( ) {
    std::cout << "ClapTrap " << _name << " is despawn!" << std::endl;
 };

ClapTrap& ClapTrap::operator=(const ClapTrap &raw) {
    if (this == &raw)
        return (*this);
    this->_name = raw._name;
    this->_hitPoints =raw._hitPoints;
    this->_energyPoints =  raw._energyPoints;
    this->_attackDamage = raw._attackDamage;
    return (*this);
}

void    ClapTrap::attack( std::string const& target )
{
    if (_hitPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " is dead! " << _name <<" cant attacks"<< std::endl;
        return;   
    }
    if (_energyPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    _energyPoints -= 1;
}

void    ClapTrap::takeDamage( unsigned int amount )
{
    if (_hitPoints <= amount)
    {
        std::cout << "ClapTrap " << _name << " takes " << amount << " damage! ";
        std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
        _hitPoints = 0;
        return;
    }
    if (_hitPoints <= amount)
    {
        std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " takes " << amount << " damage!" << std::endl;
    _hitPoints -= amount;
}

void    ClapTrap::beRepaired( unsigned int amount )
{
    if (_hitPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " is dead! " << _name <<" cant repairs itself"<< std::endl;
        return;   
    }
    if (_energyPoints <= amount)
    {
        std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " repairs itself for " << amount << " hit points!" << std::endl;
    _energyPoints -= 1;
    _hitPoints += amount;
}