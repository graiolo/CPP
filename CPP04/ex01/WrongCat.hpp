/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:31:42 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/19 13:52:58 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

class WrongCat : public WrongAnimal {
    public:
        WrongCat ( void );
        WrongCat ( const std::string &type );
        WrongCat ( const WrongCat & );
        ~WrongCat ( void );

        WrongCat& operator=( const WrongCat & );

        void makeSound( void ) const;
};

#endif