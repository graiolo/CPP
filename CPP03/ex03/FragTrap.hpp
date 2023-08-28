/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:44:25 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/18 18:52:15 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

class FragTrap : virtual public ClapTrap {
    public:
        FragTrap( const std::string &);
        FragTrap( FragTrap &);
        ~FragTrap( );

        FragTrap& operator=( const FragTrap & );
        void highFivesGuys( void );
};

#endif