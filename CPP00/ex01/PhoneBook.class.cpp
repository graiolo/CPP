/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:42:02 by graiolo           #+#    #+#             */
/*   Updated: 2023/07/14 18:47:15 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook ( void ) { this->_max = 0; }

PhoneBook::~PhoneBook( void ) { };

PhoneBook& PhoneBook::add ( void )
{
	Contact		contact;
	static int	i;

	contact.addContact( this->_contact[i], i );
	_max = _max > (i + 1) ? _max : i + 1;
	if (++i == 8)
		i = 0;
	return ( *this );
}

void PhoneBook::search ( void )
{
	Contact		contact;
	std::string	str;
	int			i;

	if (!this->_max)
	{
		std::cout << "\033[91mNO CONTACT LISTED\033[0m" << std::endl;
		return ;
	}
	std::cout << "\033[1;37m";
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|  INDEX.  |FIRST NAME|LAST NAME | NICKNAME |" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
	std::cout << "\033[0m";
	for (int i = 0; i < this->_max; i++)
		contact.displayTab(this->_contact[i]);
	std::cout << "\033[1;92mINSERT THE VALUE: \033[0m";
	getline(std::cin, str, '\n');
	if (contact.onlyNumber(str))
	{
		i = std::atoi( str.c_str( ) );
		if ( i > 0 && i < this->_max + 1&& i < 9 )
			contact.displayInfo ( this->_contact[i - 1] );
		else
			std::cout << "\033[91mINVALID INPUNT: OUT OF RANGE\033[0m" << std::endl;
		return ;
	}
	if (!str.compare(""))
		std::cout << "\033[91mEMPTY FILL NOT ALLOW\033[0m" << std::endl;
	else
		std::cout << "\033[91mINVALID INPUNT: NOT A NUMERIC VALUE\033[0m" << std::endl;
}

void PhoneBook::welcome ( void )
{
	std::cout << "\033[96m";
	std::cout << "COMMAND LIST: " << std::endl;
	std::cout << "ADD: SAVE A NEW CONTACT" << std::endl;
	std::cout << "SEARCH: DISPLAY A SPECIFIC CONTACT" << std::endl;
	std::cout << "EXIT: THE PROGRAM QUITS AND THE CONTACTS ARE LOST FOREVER!(:SAD:)" << std::endl;
	std::cout << "\033[0m";
}
