/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:11:15 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/25 23:56:20 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog ( void ) : AAnimal( "Dog") {
    try {
        ideas = new Brain( );
    } catch (const std::bad_alloc& e) {
        std::cerr << "Caught bad_alloc exception: " << e.what() << std::endl;
        ideas = NULL;
    }
    std::cout << this->AAnimal::getType( ) << " constructor called" << std::endl;
}

Dog::Dog ( const std::string &type ) : AAnimal (type) {
    try {
        ideas = new Brain( );
    } catch (const std::bad_alloc& e) {
        std::cerr << "Caught bad_alloc exception: " << e.what() << std::endl;
        ideas = NULL;
    }
    std::cout << "Dog " << this->AAnimal::getType( ) << " constructor called" << std::endl;
}
Dog::Dog ( const Dog &raw ) : AAnimal (raw.AAnimal::getType( )) {
    std::cout << "Dog copy constructor called" << std::endl;
    try {
        ideas = new Brain(*raw.ideas);
    } catch (const std::bad_alloc& e) {
        std::cerr << "Caught bad_alloc exception: " << e.what() << std::endl;
        ideas = NULL;
    }
}

Dog::~Dog ( void ) {
    delete ideas;
    std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=( const Dog &raw) {
    std::cout << "Dog assignment operator called" << std::endl;
    if ( this == &raw )
        return *this;
    this->AAnimal::setType( raw.AAnimal::getType( ) );
    for (int i = 0; i < 100; i++)
        ideas->setIdeas(raw.ideas->getIdeas(i), i);
    return *this;
}

void Dog::makeSound( void ) const {
    std::cout << "Dog makeSound called" << std::endl;
}

void Dog::setIdeas(const std::string &ideas, int i) {
    this->ideas->setIdeas(ideas, i);
}

const std::string Dog::getIdeas ( int i) const {
    return (this->ideas->getIdeas(i));
}