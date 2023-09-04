/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:45:56 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/25 17:53:48 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

#ifndef CURE_HPP
# define CURE_HPP

class Cure : public AMateria {
    public:
    Cure( );
    ~Cure ( );

    Cure& operator=(const Cure &);
    virtual AMateria* clone( ) const;
    void use(ICharacter& target);
};

#endif