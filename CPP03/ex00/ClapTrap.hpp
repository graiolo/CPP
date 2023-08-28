/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:55:02 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/17 16:07:22 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
    private:
        std::string _name;
        unsigned int    _hitPoints;
        unsigned int    _energyPoints;
        unsigned int    _attackDamage;
    public:
        ClapTrap( const std::string );
        ClapTrap( ClapTrap &);
        ~ClapTrap();

        ClapTrap& operator=(const ClapTrap &);

        void setName (const std::string &);
        std::string getName ( void ) const ;
        void setHitPoints (const int &);
        unsigned int getHitPoints ( void ) const ;
        void setEnergyPoints (const int &);
        unsigned int getEnergyPoints ( void ) const ;
        void setAttackDamage (const int &);
        unsigned int getAttackDamage ( void ) const ;

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

};

#endif //claptrap_hhp