/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 11:05:35 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/21 18:36:50 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

#ifndef DOG_HPP
# define DOG_HPP

class Dog : public AAnimal {
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