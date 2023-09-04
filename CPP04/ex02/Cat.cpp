/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:22:49 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/25 23:55:33 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat ( void ) : AAnimal( "Cat") {
    try {
        ideas = new Brain( );
    } catch (const std::bad_alloc& e) {
        std::cerr << "Caught bad_alloc exception: " << e.what() << std::endl;
        ideas = NULL;
    }
    std::cout << this->AAnimal::getType( ) << " constructor called" << std::endl;
}

Cat::Cat ( const std::string &type ) : AAnimal (type) {
    try {
        ideas = new Brain( );
    } catch (const std::bad_alloc& e) {
        std::cerr << "Caught bad_alloc exception: " << e.what() << std::endl;
        ideas = NULL;
    }
    std::cout << "Cat " << this->AAnimal::getType( ) << " constructor called" << std::endl;
}
Cat::Cat ( const Cat &raw ) : AAnimal (raw.AAnimal::getType( )) {
    std::cout << "Cat copy constructor called" << std::endl;
    try {
        ideas = new Brain(*raw.ideas);
    } catch (const std::bad_alloc& e) {
        std::cerr << "Caught bad_alloc exception: " << e.what() << std::endl;
        ideas = NULL;
    }
}

Cat::~Cat ( void ) {
    delete ideas;
    std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=( const Cat &raw) {
    std::cout << "Cat assignment operator called" << std::endl;
    if ( this == &raw )
        return *this;
    this->AAnimal::setType( raw.AAnimal::getType( ) );
    for (int i = 0; i < 100; i++)
        ideas->setIdeas(raw.ideas->getIdeas(i), i);
    return *this;
}

void Cat::makeSound( void ) const {
    std::cout << "Cat makeSound called" << std::endl;
}

void Cat::setIdeas(const std::string &ideas, int i) {
    this->ideas->setIdeas(ideas, i);
}

const std::string Cat::getIdeas ( int i) const {
    return (this->ideas->getIdeas(i));
}