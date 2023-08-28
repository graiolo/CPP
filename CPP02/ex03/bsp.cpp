/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:11:15 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/27 22:27:57 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float area_triangolo(float x1, float y1, float x2, float y2, float x3, float y3) {
  float det = (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));

  return (det > 0 ? (det / 2) : ((-1.0f * det) / 2));
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	float s = area_triangolo(a.getRawX( ).toFloat( ) , a.getRawY( ).toFloat( ), b.getRawX( ).toFloat( ),
			b.getRawY( ).toFloat( ), c.getRawX( ).toFloat( ), c.getRawY( ).toFloat( ));

	float s1 = area_triangolo(a.getRawX( ).toFloat( ), a.getRawY( ).toFloat( ), b.getRawX( ).toFloat( ),
				b.getRawY( ).toFloat( ), point.getRawX( ).toFloat( ), point.getRawY( ).toFloat( ));
	float s2 = area_triangolo(a.getRawX( ).toFloat( ), a.getRawY( ).toFloat( ), point.getRawX( ).toFloat( ),
				point.getRawY( ).toFloat( ), c.getRawX( ).toFloat( ), c.getRawY( ).toFloat( ));
	float s3 = area_triangolo(point.getRawX( ).toFloat( ), point.getRawY( ).toFloat( ), b.getRawX( ).toFloat( ),
				b.getRawY( ).toFloat( ), c.getRawX( ).toFloat( ), c.getRawY( ).toFloat( ));
	if ((s1 + s2 + s3) == s)
		return (true);
	return (false);
}  