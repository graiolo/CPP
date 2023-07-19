/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 18:01:47 by graiolo           #+#    #+#             */
/*   Updated: 2023/07/18 23:27:02 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	private:

		std::string	_name;
		Weapon		*_weapon;
	
	public:

		HumanB ( std::string, Weapon );
		HumanB ( std::string );
		~HumanB ( void );
	
		void	setWeapon ( Weapon& );
		void	attack ( void ) const;
};

#endif