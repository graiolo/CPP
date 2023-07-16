/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:56:46 by graiolo           #+#    #+#             */
/*   Updated: 2023/07/09 20:15:57 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <sstream>
#include <string>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount= 0;
int Account::_totalNbDeposits= 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void ) { return _nbAccounts; };

int	Account::getTotalAmount( void ) { return _totalAmount; };

int	Account::getNbDeposits( void ) { return _totalNbDeposits; };

int	Account::getNbWithdrawals( void ) { return _totalNbWithdrawals; };

std::string addZero( int nbr )
{
	std::ostringstream	tmp;
	std::string 		s_nbr;

	tmp << nbr;
	s_nbr = tmp.str();
	s_nbr = s_nbr.length() < 2 ? "0" + s_nbr : s_nbr;
	return ( s_nbr );
}

void	Account::_displayTimestamp( void )
{
	std::time_t			now;

	now = std::time(NULL);
	std::cout << "[";
	std::cout << 1900 + std::localtime(&now)->tm_year;
	std::cout << addZero(1 + std::localtime(&now)->tm_mon);
	std::cout << addZero(std::localtime(&now)->tm_mday);
	std::cout << "_";
	std::cout << addZero(std::localtime(&now)->tm_hour);
	std::cout << addZero(std::localtime(&now)->tm_min);
	std::cout << addZero(std::localtime(&now)->tm_sec);
	std::cout << "]" << " ";
}

void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";";
    std::cout << "total:" << getTotalAmount() << ";";
    std::cout << "deposits:" << getNbDeposits() << ";";
    std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "deposits:" << this->_nbDeposits << ";";
    std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

int	Account::checkAmount( void ) const { return _amount; };

Account::Account ( int initial_deposit )
{
	this->_nbAccounts++;
	this->_totalAmount += initial_deposit;
	this->_accountIndex = _nbAccounts - 1;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "created" << std::endl;
}

Account::~Account ( void )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" <<this-> _amount << ";";
    std::cout << "closed" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	this->_totalAmount += deposit;
	this->_totalNbDeposits++;
	this->_amount += deposit;
	this->_nbDeposits += 1;

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount - deposit << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;

}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (this->_amount - withdrawal < 0)
	{
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "p_amount:" << this->_amount << ";";
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	
	this->_totalAmount -= withdrawal;
	this->_amount -= withdrawal;
	this->_nbWithdrawals += 1;
	this->_totalNbWithdrawals++;

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount + withdrawal << ";";
	std::cout << "deposit:" << withdrawal << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbWithdrawals << std::endl;
	return (true);
}