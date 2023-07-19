/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:29:37 by graiolo           #+#    #+#             */
/*   Updated: 2023/07/17 15:24:28 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
		std::string     _name;

    public:
		Zombie ( std::string name );
		~Zombie ( void );
		void announce( void );					// <--- Zombies announce themselves
};

Zombie  *newZombie( std::string name );
void	randomChump( std::string name );

#endif