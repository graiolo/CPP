/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 11:05:35 by graiolo           #+#    #+#             */
/*   Updated: 2023/09/03 21:43:44 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#ifndef DOG_HPP
# define DOG_HPP

class Dog : public Animal {
    private:
        Brain *ideas;
    public:
        Dog ( void );
        Dog ( const std::string &type );
        Dog ( const Dog & );
        ~Dog ( void );

        Dog& operator=( const Dog & );

        void setIdeas(const std::string &, int);
        const std::string getIdeas ( int ) const;

        void makeSound( void ) const;
};

#endif