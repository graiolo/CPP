/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 18:12:54 by graiolo           #+#    #+#             */
/*   Updated: 2023/07/16 03:30:55 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

int	main(void)
{
    PhoneBook book;
    std::string input;
    book.welcome();
    while (input.compare("EXIT"))
    {
        if (input.compare("ADD") == 0)
            book.add();
        else if (input.compare("SEARCH") == 0)
            book.search();
        std::cout << std::endl << "\033[38;5;207mWAITING FOR COMMAND: \033[0m";
        std::getline(std::cin, input, '\n');
        if (std::cin.eof())
            return 0;
        if ((input.compare("ADD") && input.compare("SEARCH") && input.compare("EXIT")))
        {
            if (!input.compare(""))
                std::cout << "\033[91mEMPTY FILL NOT ALLOW\033[0m" << std::endl;
            else
                std::cout << "\033[91mCOMMAND NOT FOUND\033[0m" << std::endl;
        }
    }
    return 0;
}