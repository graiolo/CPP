/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:09:49 by graiolo           #+#    #+#             */
/*   Updated: 2023/07/10 23:31:28 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact ( void ) { };

Contact::~Contact ( void ) { };

void	Contact::displayInfo ( Contact id ) const
{
    std::cout << "\033[1;92mFIRSH NAME: \033[0m" << id._first_name << std::endl;
    std::cout << "\033[1;92mLAST NAME: \033[0m" << id._last_name << std::endl;
    std::cout << "\033[1;92mNICKNAME: \033[0m" << id._nickname << std::endl;
    std::cout << "\033[1;92mPHONE NUMBER: \033[0m" << id._phone_number << std::endl;
    std::cout << "\033[1;92mDARKEST SECRET: \033[0m" << id._darkest_secret << std::endl;
}

void    Contact::displayTab ( Contact id ) const
{
    std::stringstream s_index;

    std::cout << "\033[1;37m";
    std::cout << "|";
    s_index << id._index + 1;
    elemDisplayTab( s_index.str() );
    elemDisplayTab( id._first_name );
    elemDisplayTab( id._last_name );
    elemDisplayTab( id._nickname );
    std::cout << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "\033[0m";
}

void    Contact::elemDisplayTab ( std::string str) const
{
    std::cout.width(10);
    std::cout.setf(std::ios::right);
    if (str.length() > 10)
        std::cout << str.substr(0, 9) + ".";
    else
         std::cout << str;
    std::cout << "|";
}

void    Contact::addInfo ( const std::string msg, std::string &_param )
{
    std::cout << "\033[1;92m" << msg << "\033[0m";
    _param.clear();
    while ( _param.empty() )
    {
        std::getline(std::cin, _param, '\n');
        if ((!msg.compare("ADD PHONE NUMBER: ") && !Contact::onlyNumber(_param)) 
            || ((!msg.compare("ADD FIRST NAME: ") || !msg.compare("ADD LAST NAME: "))
            && !Contact::onlyLetter(_param))
            || (!msg.compare("ADD NICKNAME: ") && !_param.compare(""))
            || (!msg.compare("ADD DARKEST SECRET: ") && !_param.compare("")))
        {
            if (!_param.compare(""))
                std::cout << "\033[91mEMPTY FILL NOT ALLOW\033[0m" << std::endl;
            else
                std::cout << "\033[91mINVALID INPUT\033[0m" << std::endl;
            _param.clear();
            std::cout << "\033[1;92m" << msg << "\033[0m";
        }
    }
}

void    Contact::addContact ( Contact& id, int index )
{
    addInfo("ADD FIRST NAME: ", id._first_name);
    addInfo("ADD LAST NAME: ", id._last_name);
    addInfo("ADD NICKNAME: ", id._nickname);
    addInfo("ADD PHONE NUMBER: ", id._phone_number);
    addInfo("ADD DARKEST SECRET: ", id._darkest_secret);
    std::cout << "\033[1;92mALL THE INFO ARE CORRECTLY STORAGE\033[0m" << std::endl;
    id._index = index;
}

bool    Contact::onlyNumber ( const std::string str)
{
    if (str.empty())
        return ( false );
    for (std::size_t i = 0; i < str.length(); i++)
        if (!std::isdigit(static_cast<unsigned char>(str[i])))
            return ( false );
    return ( true );
}

bool    Contact::onlyLetter ( const std::string str)
{
    if (str.empty())
        return ( false );
    for (std::size_t i = 0; i < str.length(); i++)
        if (std::isdigit(static_cast<unsigned char>(str[i])))
            return ( false );
    return ( true );
}