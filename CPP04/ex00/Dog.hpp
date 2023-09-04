/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 11:05:35 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/19 13:46:39 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#ifndef DOG_HPP
# define DOG_HPP

class Dog : public Animal {
    public:
        Dog ( void );
        Dog ( const std::string &type );
        Dog ( const Dog & );
        ~Dog ( void );

        Dog& operator=( const Dog & );

        void makeSound( void ) const;
};

#endif