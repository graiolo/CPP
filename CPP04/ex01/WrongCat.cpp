/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:31:37 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/19 13:31:37 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat ( void ) : WrongAnimal( "WrongCat") {
    std::cout << this->WrongAnimal::getType( ) << " constructor called" << std::endl;
}

WrongCat::WrongCat ( const std::string &type ) : WrongAnimal (type) {
    std::cout << "WrongCat " << this->WrongAnimal::getType( ) << " constructor called" << std::endl;
}
WrongCat::WrongCat ( const WrongCat &raw ) : WrongAnimal (raw.WrongAnimal::getType( )) {
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat ( void ) {
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat& WrongCat::operator=( const WrongCat &raw) {
    std::cout << "WrongCat assignment operator called" << std::endl;
    if ( this == &raw )
        return *this;
    this->WrongAnimal::setType( raw.WrongAnimal::getType( ) );
    return *this;
}

void WrongCat::makeSound( void ) const {
    std::cout << "WrongCat makeSound called" << std::endl;
}