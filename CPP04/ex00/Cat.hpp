/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:22:11 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/19 13:46:33 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#ifndef CAT_HPP
# define CAT_HPP

class Cat : public Animal {
    public:
        Cat ( void );
        Cat ( const std::string &type );
        Cat ( const Cat & );
        ~Cat ( void );

        Cat& operator=( const Cat & );

        void makeSound( void ) const;
};

#endif