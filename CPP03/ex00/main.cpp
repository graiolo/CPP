/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 16:15:33 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/28 16:00:31 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
    ClapTrap clap("Blu");
    clap.attack("Rosso");
    clap.takeDamage(15);
    clap.attack("Rosso");
    clap.beRepaired(1);
    return 0;
}