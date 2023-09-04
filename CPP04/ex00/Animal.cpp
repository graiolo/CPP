/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:01:19 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/19 13:20:53 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : type( "Animal" ) {
    std::cout << this->type << " constructor called" << std::endl;
}

Animal::Animal( const std::string &type ) : type( type ) {
    std::cout << "Animal " << this->type << " constructor called" << std::endl;
}


Animal::Animal( const Animal &raw ) : type(raw.type) {
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal( void ) {
    std::cout << "Animal destructor called" << std::endl;
}

std::string    Animal::getType( void ) const {
    return this->type;
}

void Animal::setType( const std::string &type ) {
    this->type = type;
}

Animal& Animal::operator=( const Animal &raw ) {
    std::cout << "Animal assignment operator called" << std::endl;
    if ( this == &raw )
        return *this;
    this->type = raw.type;

    return *this;
}

void Animal::makeSound( void ) const {
    std::cout << "Animal makeSound called" << std::endl;
}
