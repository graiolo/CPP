/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:26:06 by graiolo           #+#    #+#             */
/*   Updated: 2023/07/19 20:41:51 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl ( void ) {	};

Harl::~Harl ( void ) {	};

void Harl::debug( void )
{
	std::cout << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger. " << std::endl;
	std::cout << "I really do!" << std::endl;
}

void Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn't put enough bacon in my burger!" << std::endl;
	std::cout << "If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl:: warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I've been coming for years whereas you started working here since last month" << std::endl;
}

void Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{

	void (Harl::*fun[ ])( ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string elem[ ] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i = 0;

	while (level.compare(elem[i]) && i < 4)
		i++;

	switch (i)
	{
		case 0:
		{
			std::cout << "[ DEBUG ]" << std::endl;
			(this->*fun[0])();
			std::cout << std::endl;
		}
		case 1:
		{
			std::cout << "[ INFO ]" << std::endl;
			(this->*fun[1])();
			std::cout << std::endl;
		}
		case 2:
		{
			std::cout << "[ WARNING ]" << std::endl;
			(this->*fun[2])();
			std::cout << std::endl;
		}
		case 3:
		{
			std::cout << "[ ERROR ]" << std::endl;
			(this->*fun[3])();
			std::cout << std::endl;
			break ;
		}
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}