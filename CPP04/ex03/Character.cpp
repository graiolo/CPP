/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 19:27:41 by graiolo           #+#    #+#             */
/*   Updated: 2023/09/03 22:39:01 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character (const std::string &name) : _name(name){
    std::cout << "Character costructor call" << std::endl;
    for (int i = 0; i < 4; i++)
        _inventor[i] = NULL;
    for (int i = 0; i < 1024; i++)
        _drop[i] = NULL;
}

Character::Character (const Character &raw) {
    std::cout << "Character copy costructor call" << std::endl;
    _name = raw._name;
    for (int i = 0; i < 4; i++)
        _inventor[i] = raw._inventor[i]->clone( );
    for (int i = 0; i < 1024; i++)
        _drop[i] = NULL;
}

Character& Character::operator= (const Character &raw)
{
    std::cout << "Character assignment constructor copy call" << std::endl;
    if (this != &raw) {
        _name = raw._name;
        for (int i = 0; i < 4; i++) {
            if (_inventor[i] != NULL)
                delete _inventor[i];
        }
        for (int i = 0; i < 1024; i++) {
            if (_drop[i] != NULL)
                delete _drop[i];
        }    
        for (int i = 0; i < 4; i++)
            _inventor[i] = raw._inventor[i]->clone( );
    }
    return (*this);
}

Character::~Character() {
    std::cout << "Character destructor call" << std::endl;
    for (int i = 0; i < 4; i++) {
        if (_inventor[i] != NULL)
            delete _inventor[i];
    }
    for (int i = 0; i < 1024; i++) {
        if (_drop[i] != NULL)
            delete _drop[i];
    }
}

std::string const & Character::getName() const {
    return (_name);
}

void Character::equip(AMateria* m) {
    unsigned i = 0;

    while (_inventor[i] && i < 4)
        i++;
    if (i < 4)
        _inventor[i] = m;
}

void Character::unequip(int idx) {
    if (idx > 3 or idx < 0)
        return ;
    int i;
    if ( _inventor[idx] != NULL) {
        for (i = 0; _drop[i] != NULL; i++)
            ;
        _drop[i] = _inventor[idx];
        _inventor[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target) {
    if (idx < 0 || idx > 3)
        return ;
    if (_inventor[idx] != NULL)
        _inventor[idx]->use(target);

}
