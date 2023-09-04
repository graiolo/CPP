/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 10:24:25 by graiolo           #+#    #+#             */
/*   Updated: 2023/09/03 21:39:34 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {
    std::cout << "Brain constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        _ideas[i].clear( );
}

Brain::Brain ( const Brain &raw ) {
    std::cout << "Brain copy constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        _ideas[i] = raw.getIdeas( i );
}

Brain::~Brain( void ){
    std::cout << "Brain destructor called" << std::endl;
}

Brain& Brain::operator=( const Brain &raw ) {
    std::cout << "Brain operator= called" << std::endl;
    if (this == &raw)
        return *this;
    for (int i = 0; i < 100; i++)
        _ideas[i] = raw.getIdeas(i);
    return *this;
}

const std::string Brain::getIdeas( int i ) const {
    return ( _ideas[i] );
}

void Brain::setIdeas ( const std::string &idea, int i)
{
    _ideas[i] = idea;
}