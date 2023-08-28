/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:11:11 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/27 18:04:23 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#ifndef POINT_HPP
# define POINT_HPP

class Point {
	private:
		Fixed const _x;
		Fixed const _y;

	public:
		Point( );
		Point( const float, const float);
		Point (const Point &);
		~Point( );

		void setRawX(const Fixed &raw);
		void setRawY(const Fixed &raw);

		const Fixed getRawX( void )const;
		const Fixed getRawY( void ) const;

		Point& operator=(const Point &raw);
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif