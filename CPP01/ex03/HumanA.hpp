/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:56:10 by graiolo           #+#    #+#             */
/*   Updated: 2023/07/18 18:25:54 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Now, create two classes: HumanA and HumanB. They both have a Weapon and a
name. They also have a member function attack() that displays (of course, without the
angle brackets):
<name> attacks with their <weapon type> */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	private:

		std::string	_name;
		Weapon		&_weapon;
	
	public:

		HumanA ( std::string, Weapon &);
		~HumanA ( void );
	
		void	attack ( void ) const;
};

#endif