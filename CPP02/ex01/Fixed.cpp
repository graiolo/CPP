/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 16:40:37 by graiolo           #+#    #+#             */
/*   Updated: 2023/07/29 17:02:04 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <cmath>

Fixed::Fixed ( void ) : _fixed_point(0) { std::cout << "Default constructor called" << std::endl; }

Fixed::Fixed ( const int raw) : _fixed_point(raw << _fractional_bits) { std::cout << "Int constructor called" << std::endl; }

Fixed::Fixed ( const float raw) : _fixed_point(roundf(raw * (1 << _fractional_bits))) { std::cout << "Float constructor called" << std::endl; }

Fixed::Fixed ( const Fixed &raw)
{	
	std::cout << "Copy constructor called" << std::endl; 
	*this = raw;
}

Fixed::~Fixed (void ) { std::cout << "Destructor called" << std::endl; }

void	Fixed::setRawBits( int const raw ) { this->_fixed_point = raw; }

int		Fixed::getRawBits( void ) const { return ( _fixed_point ); }

Fixed&	Fixed::operator=(const Fixed &raw)
{
	std::cout << "Copy assignment operator called" << std::endl;

	if (this == &raw)
		return *this;
	this->_fixed_point = raw.getRawBits( );
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed &raw)
{
	os << raw.toFloat( );
	return (os);
}

float Fixed::toFloat( void ) const { return ((static_cast<float>(_fixed_point) / (1 << _fractional_bits))); }

int Fixed::toInt( void ) const { return (_fixed_point / (1 << _fractional_bits)); }

// • A constructor that takes a constant integer as a parameter.
// It converts it to the corresponding fixed-point value. The fractional bits value is
// initialized to 8 like in exercise 00.

// • A constructor that takes a constant floating-point number as a parameter.
// It converts it to the corresponding fixed-point value. The fractional bits value is
// initialized to 8 like in exercise 00.

//--------------------------------------------------------------------------------------

// • A member function float toFloat( void ) const;
// that converts the fixed-point value to a floating-point value.

// • A member function int toInt( void ) const;
// that converts the fixed-point value to an integer value.

// And add the following function to the Fixed class files:
// • An overload of the insertion («) operator that inserts a floating-point representation
// of the fixed-point number into the output stream object passed as parameter.