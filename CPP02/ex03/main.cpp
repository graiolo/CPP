/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:22:08 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/27 22:27:13 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main ( void ) {
    if ( bsp( Point(0, 0), Point(10, 30), Point(20, 0), Point(10, 5) ) == true ) {
        std::cout << "Point is in the triangle" << std::endl;
    } else {
        std::cout << "Point is nope in the triangle" << std::endl;
    }
    return 0;
}