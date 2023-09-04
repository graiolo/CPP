/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:29:11 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/19 17:06:41 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {
    private:
        std::string type;
    public:
        WrongAnimal( void );
        WrongAnimal( const std::string & );
        WrongAnimal( const WrongAnimal & );
        virtual ~WrongAnimal( void );

        std::string getType( void ) const;
        void setType( const std::string & );
    
        WrongAnimal& operator=( const WrongAnimal & );
        void makeSound( void ) const;
};

#endif