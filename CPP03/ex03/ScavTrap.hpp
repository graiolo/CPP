/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 12:10:54 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/18 18:52:10 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

class ScavTrap : virtual public ClapTrap {
    public:
        ScavTrap( const std::string &);
        ScavTrap( ScavTrap &);
        ~ScavTrap();

        ScavTrap& operator=(const ScavTrap &);

        void attack(const std::string& target);
        void guardGate( void );
};

#endif