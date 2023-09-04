/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 19:33:24 by graiolo           #+#    #+#             */
/*   Updated: 2023/09/03 22:11:01 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

class AMateria;

class Character : public ICharacter {
    private:
        AMateria *_inventor[4];
        AMateria *_drop[1024];
        std::string _name;
    public:
        Character( const std::string & );
        Character (const Character &);

        Character& operator= (const Character &);

        ~Character();
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif