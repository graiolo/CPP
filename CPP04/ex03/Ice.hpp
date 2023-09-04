/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:45:56 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/25 17:49:02 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

#ifndef ICE_HPP
# define ICE_HPP

class Ice : public AMateria {
    public:
    Ice( );
    ~Ice ( );

    Ice& operator=(const Ice &);
    virtual AMateria* clone( ) const;
    void use(ICharacter& target);
};

#endif