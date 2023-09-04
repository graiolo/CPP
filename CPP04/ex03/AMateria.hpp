/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 17:26:14 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/25 18:13:27 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

class ICharacter;

class AMateria {
    protected:
        std::string _type;
    public:
        AMateria(std::string const & type);
        virtual ~AMateria( ) { };
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif