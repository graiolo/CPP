/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:42:02 by graiolo           #+#    #+#             */
/*   Updated: 2023/07/08 15:55:59 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_CLASS_HPP
# define PHONE_BOOK_CLASS_HPP

# include "Contact.class.hpp"

class PhoneBook
{
    private:
        Contact _contact[8];
        int		_max;
    public:
        PhoneBook( void );
        ~PhoneBook( void );

        PhoneBook& add( void );
		void search ( void );
		void welcome ( void );
};

#endif
