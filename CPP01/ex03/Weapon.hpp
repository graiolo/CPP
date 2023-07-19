/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:43:09 by graiolo           #+#    #+#             */
/*   Updated: 2023/07/18 19:13:18 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
	private:

		std::string	_weapon;
	
	public:

		Weapon ( std::string );
		~Weapon ( void );

		const std::string&	getType ( void ) const;
		void				setType (std::string );
};

#endif