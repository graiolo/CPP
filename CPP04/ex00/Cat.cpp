/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:22:49 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/19 13:32:54 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat ( void ) : Animal( "Cat") {
    std::cout << this->Animal::getType( ) << " constructor called" << std::endl;
}

Cat::Cat ( const std::string &type ) : Animal (type) {
    std::cout << "Cat " << this->Animal::getType( ) << " constructor called" << std::endl;
}
Cat::Cat ( const Cat &raw ) : Animal (raw.Animal::getType( )) {
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat ( void ) {
    std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=( const Cat &raw) {
    std::cout << "Cat assignment operator called" << std::endl;
    if ( this == &raw )
        return *this;
    this->Animal::setType( raw.Animal::getType( ) );
    return *this;
}

void Cat::makeSound( void ) const {
    std::cout << "Cat makeSound called" << std::endl;
}