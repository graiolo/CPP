/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:55:02 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/18 19:09:50 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
    protected:
    public:
        std::string     _name;
        unsigned int    _hitPoints;
        unsigned int    _energyPoints;
        unsigned int    _attackDamage;
        ClapTrap( const std::string &);
        ClapTrap( ClapTrap &);
        ~ClapTrap();

        ClapTrap& operator=(const ClapTrap &);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

};

#endif