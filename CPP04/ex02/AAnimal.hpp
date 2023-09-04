/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 10:55:37 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/21 18:37:35 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

class AAnimal {
    private:
        std::string type;
    public:
        AAnimal( void );
        AAnimal( const std::string & );
        AAnimal( const AAnimal & );
        virtual ~AAnimal( void );

        std::string getType( void ) const;
        void setType( const std::string & );
    
        AAnimal& operator=( const AAnimal & );
        virtual void makeSound( void ) const = 0;
};

#endif