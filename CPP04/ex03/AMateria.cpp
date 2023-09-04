/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 17:11:56 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/25 19:54:34 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
    std::cout << "AMateria constuctor call" << std::endl;
    this->_type = type;
}

std::string const & AMateria::getType() const {
    std::cout << "AMateria copy constuctor call" << std::endl;
    return (this->_type);
}

void AMateria::use(ICharacter& target) { 
    std::cout << "AMateria " << this->_type << " used on " << target.getName() << std::endl;
}