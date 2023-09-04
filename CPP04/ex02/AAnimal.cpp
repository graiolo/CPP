/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:01:19 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/21 18:37:42 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal( void ) : type( "Animal" ) {
    std::cout << this->type << " constructor called" << std::endl;
}

AAnimal::AAnimal( const std::string &type ) : type( type ) {
    std::cout << "Animal " << this->type << " constructor called" << std::endl;
}


AAnimal::AAnimal( const AAnimal &raw ) : type(raw.type) {
    std::cout << "Animal copy constructor called" << std::endl;
}

AAnimal::~AAnimal( void ) {
    std::cout << "Animal destructor called" << std::endl;
}

std::string    AAnimal::getType( void ) const {
    return this->type;
}

void AAnimal::setType( const std::string &type ) {
    this->type = type;
}

AAnimal& AAnimal::operator=( const AAnimal &raw ) {
    std::cout << "Animal assignment operator= called" << std::endl;
    if ( this == &raw )
        return *this;
    this->type = raw.type;

    return *this;
}
