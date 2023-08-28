/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:11:08 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/27 22:14:46 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( ) : _x(0), _y(0) { };

Point::Point( const float x, const float y) : _x(x), _y(y) { };

Point::Point (const Point &raw) : _x(raw._x), _y(raw._y) { };

Point::~Point( ) { }

//----------------------------------------------------------------------------------------------------------------------------------------------//

Point& Point::operator=(const Point &raw)
{
	if (this == &raw)
		return *this;
	const_cast<Fixed&>(this->_x) = raw.getRawX( );
	const_cast<Fixed&>(this->_y) = raw.getRawX( );
	return (*this);
}

//----------------------------------------------------------------------------------------------------------------------------------------------//

void Point::setRawX(const Fixed &raw) { const_cast<Fixed&>(this->_x) = raw; }
void Point::setRawY(const Fixed &raw) { const_cast<Fixed&>(this->_y) = raw; }

const Fixed Point::getRawX( void ) const { return (this->_x); }
const Fixed Point::getRawY( void ) const  { return (this->_y); }