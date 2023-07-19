/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:29:37 by graiolo           #+#    #+#             */
/*   Updated: 2023/07/17 15:43:22 by graiolo          ###   ########.fr       */
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
		Zombie ( void );
		~Zombie ( void );
		void	setName (std::string name);
		void	announce( void );
};

Zombie* zombieHorde( int N, std::string name );

#endif