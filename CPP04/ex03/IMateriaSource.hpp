/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 14:06:46 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/25 14:08:02 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMARIASOURCE_HPP
# define IMARIASOURCE_HPP

# include "AMateria.hpp"

class AMateria;

class IMateriaSource
{
    public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif