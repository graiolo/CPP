/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:18:23 by graiolo           #+#    #+#             */
/*   Updated: 2023/07/17 17:39:37 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main ( void )
{
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout << "-------------------------------" << std::endl;
	std::cout << "|        POINTER LIST         |" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	std::cout << "|string     --> " << &string << "|" << std::endl;
	std::cout << "|stringPTR  --> " << stringPTR << "|"  << std::endl;
	std::cout << "|sstringREF --> " << &stringREF << "|"  << std::endl;
	std::cout << "-------------------------------" << std::endl;
	
	std::cout << std::endl;

	std::cout << "---------------------------------" << std::endl;
	std::cout << "|          VALUE LIST           |" << std::endl;
	std::cout << "---------------------------------" << std::endl;
	std::cout << "|string     --> " << string << "|" << std::endl;
	std::cout << "|stringPTR  --> " << *stringPTR << "|"  << std::endl;
	std::cout << "|sstringREF --> " << stringREF << "|"  << std::endl;
	std::cout << "-------------------------------" << std::endl;
}