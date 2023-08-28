/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 16:15:33 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/18 19:19:50 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main( void )
{
    DiamondTrap rosso( "Rosso" );
    DiamondTrap blu( "Blu" );

    rosso.whoAmI();
    blu.whoAmI();

    rosso.attack( "the air" );
    rosso.takeDamage( 10 );
    rosso.beRepaired( 10 );

    return 0;
}