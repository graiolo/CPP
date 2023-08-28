/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 16:40:37 by graiolo           #+#    #+#             */
/*   Updated: 2023/07/31 16:14:39 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <cmath>

//----------------------------------------------------------------------------------------------------------------------------------------------//

Fixed::Fixed ( void ) : _fixed_point(0) { }

Fixed::Fixed ( const int raw) : _fixed_point(raw << _fractional_bits) { }

Fixed::Fixed ( const float raw) : _fixed_point(roundf(raw * (1 << _fractional_bits))) { }

Fixed::Fixed ( const Fixed &raw) { *this = raw; }

//----------------------------------------------------------------------------------------------------------------------------------------------//

Fixed::~Fixed (void ) { }

//----------------------------------------------------------------------------------------------------------------------------------------------//

void	Fixed::setRawBits( int const raw ) { this->_fixed_point = raw; }

int		Fixed::getRawBits( void ) const { return ( _fixed_point ); }

//----------------------------------------------------------------------------------------------------------------------------------------------//

Fixed&	Fixed::operator=(const Fixed &raw)
{
	if (this == &raw)
		return *this;
	this->_fixed_point = raw.getRawBits( );
	return *this;
}

bool	Fixed::operator>(const Fixed &raw)
{
	if (this->getRawBits( ) > raw.getRawBits( ))
		return (true);
	return (false);
}
bool	Fixed::operator<(const Fixed &raw)
{
	if (this->getRawBits( ) < raw.getRawBits( ))
		return (true);
	return (false);
}
bool	Fixed::operator>=(const Fixed &raw)
{
	if (this->getRawBits( ) >= raw.getRawBits( ))
		return (true);
	return (false);
}
bool	Fixed::operator<=(const Fixed &raw)
{
	if (this->getRawBits( ) <= raw.getRawBits( ))
		return (true);
	return (false);
}
bool	Fixed::operator==(const Fixed &raw)
{
	if (this->getRawBits( ) == raw.getRawBits( ))
		return (true);
	return (false);
}
bool	Fixed::operator!=(const Fixed &raw)
{
	if (this->getRawBits( ) != raw.getRawBits( ))
		return (true);
	return (false);
}

Fixed	Fixed::operator+(const Fixed &raw) { return (Fixed(this->toFloat( ) + raw.toFloat( ))); }

Fixed	Fixed::operator-(const Fixed &raw) { return (Fixed(this->toFloat( ) - raw.toFloat( ))); }

Fixed	Fixed::operator*(const Fixed &raw){	return (Fixed(this->toFloat( ) * raw.toFloat( ))); }

Fixed	Fixed::operator/(const Fixed &raw) { return (Fixed ((this->toFloat( )) / raw.toFloat( ))); }

Fixed	Fixed::operator++(int)
{
	float	nbr;

	nbr = this->toFloat( );
	this->_fixed_point++;
	return (Fixed( nbr ));
}

Fixed	Fixed::operator--(int)
{
	int	nbr;

	nbr = this->toFloat( );
	this->_fixed_point--;
	return (Fixed( nbr ));
}

Fixed&	Fixed::operator++( )
{
	++this->_fixed_point;
	return *this;
}

Fixed&	Fixed::operator--( )
{
	--this->_fixed_point;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed &raw)
{
	os << raw.toFloat( );
	return (os);
}

//----------------------------------------------------------------------------------------------------------------------------------------------//

Fixed&	Fixed::min(Fixed &first, Fixed &second)
{
	if (first.getRawBits( ) < second.getRawBits( ))
		return (first);
	return (second);
}

const Fixed&	Fixed::min(const Fixed &first, const Fixed &second)
{
	if (first.getRawBits( ) < second.getRawBits( ))
		return (first);
	return (second);
}

Fixed&	Fixed::max(Fixed &first, Fixed &second)
{
	if (first.getRawBits( ) > second.getRawBits( ))
		return (first);
	return (second);
}

const Fixed&	Fixed::max(const Fixed &first, const Fixed &second)
{
	if (first.getRawBits( ) > second.getRawBits( ))
		return (first);
	return (second);
}

//----------------------------------------------------------------------------------------------------------------------------------------------//

float Fixed::toFloat( void ) const { return ((static_cast<float>(_fixed_point) / (1 << _fractional_bits))); }

int Fixed::toInt( void ) const { return (_fixed_point / (1 << _fractional_bits)); }
