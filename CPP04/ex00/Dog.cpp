/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:11:15 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/19 13:33:31 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog ( void ) : Animal( "Dog") {
    std::cout << this->Animal::getType( ) << " constructor called" << std::endl;
}

Dog::Dog ( const std::string &type ) : Animal (type) {
    std::cout << "Dog " << this->Animal::getType( ) << " constructor called" << std::endl;
}
Dog::Dog ( const Dog &raw ) : Animal (raw.Animal::getType( )) {
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog ( void ) {
    std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=( const Dog &raw) {
    std::cout << "Dog assignment operator called" << std::endl;
    if ( this == &raw )
        return *this;
    this->Animal::setType( raw.Animal::getType( ) );
    return *this;
}

void Dog::makeSound( void ) const {
    std::cout << "Dog makeSound called" << std::endl;
}