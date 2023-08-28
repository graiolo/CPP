/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:15:38 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/28 16:06:09 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( const std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap " << _name << " is spawn!" << std::endl;
 };

ClapTrap::ClapTrap( ClapTrap &raw) : _name(raw.getName( )), _hitPoints(10), _energyPoints(10), _attackDamage(0) { 
    std::cout << "ClapTrap " << _name << " is spawn!" << std::endl;
} ;
        
ClapTrap::~ClapTrap( ) {
    std::cout << "ClapTrap " << _name << " is despawn!" << std::endl;
 };

ClapTrap& ClapTrap::operator=(const ClapTrap &raw) {
    if (this == &raw)
        return (*this);
    this->setName(raw.getName( ));
    this->setHitPoints(raw.getHitPoints( ));
    this->setEnergyPoints(raw.getEnergyPoints( ));
    this->setAttackDamage(raw.getAttackDamage( ));
    return (*this);
}

void ClapTrap::setName (const std::string &name) { this->_name = name; };
std::string ClapTrap::getName ( void ) const { return _name; };

void ClapTrap::setHitPoints (const int &raw) { this->_hitPoints = raw; };
unsigned int ClapTrap::getHitPoints ( void ) const { return this->_hitPoints; };
    
void ClapTrap::setEnergyPoints (const int &raw) { this->_energyPoints = raw; };
unsigned int ClapTrap::getEnergyPoints ( void ) const { return this->_energyPoints; };
    
void ClapTrap::setAttackDamage (const int &raw) {this->_attackDamage = raw; };
unsigned int ClapTrap::getAttackDamage ( void ) const { return this->_attackDamage; };

void    ClapTrap::attack( std::string const& target )
{
    if (getHitPoints() == 0)
    {
        std::cout << "ClapTrap " << getName( ) << " is dead! " << getName( ) <<" cant attacks"<< std::endl;
        return;   
    }
    if (getEnergyPoints( ) <= 0)
    {
        std::cout << "ClapTrap " << getName( ) << " is out of energy!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << getName( ) << " attacks " << target << ", causing " << getAttackDamage( ) << " points of damage!" << std::endl;
    setEnergyPoints(getEnergyPoints( ) - 1);
}

void    ClapTrap::takeDamage( unsigned int amount )
{
    if (getHitPoints( ) <= amount)
    {
        std::cout << "ClapTrap " << getName( ) << " takes " << amount << " damage! ";
        std::cout << getName( ) << " is dead!" << std::endl;
        setHitPoints(0);
        return;
    }
    std::cout << "ClapTrap " << getName( ) << " takes " << amount << " damage!" << std::endl;
    setHitPoints(getHitPoints( ) - amount);
}

void    ClapTrap::beRepaired( unsigned int amount )
{
    if (getHitPoints() == 0)
    {
        std::cout << "ClapTrap " << getName( ) << " is dead! " << getName( ) <<" cant repairs itself"<< std::endl;
        return;   
    }
    if (getEnergyPoints( ) <= amount)
    {
        std::cout << "ClapTrap " << getName( ) << " is out of energy!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << getName( ) << " repairs itself for " << amount << " hit points!" << std::endl;
    setEnergyPoints(getEnergyPoints( ) - 1);
    setHitPoints(getHitPoints( ) + amount);
}