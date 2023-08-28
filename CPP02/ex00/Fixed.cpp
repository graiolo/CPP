/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 16:40:37 by graiolo           #+#    #+#             */
/*   Updated: 2023/07/28 22:10:36 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <iostream>

Fixed::Fixed ( void ) : _fixed_point(0) { std::cout << "Default constructor called" << std::endl; }

//Fixed::Fixed ( const Fixed &raw) : _fixed_point(raw._fixed_point) { std::cout << "Copy constructor called" << std::endl; }

Fixed::Fixed ( const Fixed &raw)
{	
	std::cout << "Copy constructor called" << std::endl; 
	*this = raw;
}
	
Fixed::~Fixed (void ) { std::cout << "Destructor called" << std::endl; }

void	Fixed::setRawBits( int const raw ) { this->_fixed_point = raw; }

int		Fixed::getRawBits( void ) const 
{
	std::cout << "getRawBits member function called" << std::endl;
	return ( _fixed_point );
}

Fixed&	Fixed::operator=(const Fixed &raw)
{
	std::cout << "Copy assignment operator called" << std::endl;

	if (this == &raw)
		return *this;
	this->_fixed_point = raw.getRawBits( );
	return *this;
}