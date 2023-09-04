/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:29:51 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/19 13:29:51 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : type( "WrongAnimal" ) {
    std::cout << this->type << " constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const std::string &type ) : type( type ) {
    std::cout << "WrongAnimal " << this->type << " constructor called" << std::endl;
}


WrongAnimal::WrongAnimal( const WrongAnimal &raw ) : type(raw.type) {
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal( void ) {
    std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string    WrongAnimal::getType( void ) const {
    return this->type;
}

void WrongAnimal::setType( const std::string &type ) {
    this->type = type;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal &raw ) {
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    if ( this == &raw )
        return *this;
    this->type = raw.type;

    return *this;
}

void WrongAnimal::makeSound( void ) const {
    std::cout << "WrongAnimal makeSound called" << std::endl;
}
