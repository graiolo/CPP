/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 14:08:46 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/25 17:36:19 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

#ifndef MARIASOURCE_HPP
# define IMARIASOURCE_HPP

class MateriaSource : public IMateriaSource {
    private:
        AMateria *_materia[4];
    public:
        MateriaSource();
        MateriaSource( const MateriaSource & );
        ~MateriaSource();
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif