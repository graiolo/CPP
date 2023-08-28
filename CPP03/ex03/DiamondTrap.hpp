/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 16:08:26 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/18 19:07:08 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

class DiamondTrap : public FragTrap, public ScavTrap {
        private:
            std::string _name;
        public:
            DiamondTrap( const std::string &);
            DiamondTrap( DiamondTrap &);
            ~DiamondTrap ( );

            DiamondTrap& operator=(DiamondTrap &);

            void whoAmI( void );
            using ScavTrap::attack;
};

#endif