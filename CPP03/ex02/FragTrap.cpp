/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:50:40 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/28 17:01:54 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( const std::string &name) : ClapTrap(name) {
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap constructor " << _name << " is spawn!" << std::endl;
} ;

FragTrap::FragTrap( FragTrap &raw) : ClapTrap(raw._name) {
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap copy constructor " << _name << " is spawn!" << std::endl;
} ;

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << _name << " is despawn!" << std::endl;
};

FragTrap& FragTrap::operator=(const FragTrap &raw) {
    std::cout << "FragTrap constructor assignment " << _name << " is spawn!" << std::endl;
    if (this == &raw)
        return (*this);
    this->_name = raw._name;
    this->_hitPoints =raw._hitPoints;
    this->_energyPoints =  raw._energyPoints;
    this->_attackDamage = raw._attackDamage;
    return (*this);
}

 void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << this->_name << " how about some high fives?" << std::endl;
 }