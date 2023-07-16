/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 18:26:04 by graiolo           #+#    #+#             */
/*   Updated: 2023/07/08 21:13:23 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include "include.h"

class Contact
{
	private:
		int			_index;
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;
    public:
		Contact ( void );
		~Contact ( void );
		
		void		displayInfo ( Contact ) const;
		void		displayTab ( Contact ) const ;
		void		elemDisplayTab ( std::string ) const ;
		void		addInfo ( const std::string, std::string& );
		void		addContact ( Contact&, int );
		bool		onlyNumber ( const std::string );
		bool		onlyLetter ( const std::string );
};

#endif