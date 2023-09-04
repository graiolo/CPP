/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:22:11 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/21 17:00:41 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#ifndef CAT_HPP
# define CAT_HPP

class Cat : public Animal {
    private:
        Brain *ideas;
    public:
        Cat ( void );
        Cat ( const std::string &type );
        Cat ( const Cat & );
        ~Cat ( void );

        Cat& operator=( const Cat & );

        void setIdeas(const std::string &, int);
        const std::string getIdeas ( int ) const;

        void makeSound( void ) const;
};

#endif