/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 10:55:37 by graiolo           #+#    #+#             */
/*   Updated: 2023/09/03 22:05:18 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

class Animal {
    private:
        std::string type;
    public:
        Animal( void );
        Animal( const std::string & );
        Animal( const Animal & );
        virtual ~Animal( void );

        std::string getType( void ) const;
        void setType( const std::string & );
    
        Animal& operator=( const Animal & );
        virtual void makeSound( void ) const;
};

#endif