/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 17:44:32 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/21 16:35:26 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef BRAIN_HPP
# define BRAIN_HPP

class Brain {
    private:
        std::string _ideas[100];
    public:
        Brain( void );
        Brain ( const Brain & );
        ~Brain( void );

        Brain& operator=( const Brain & );

        const std::string getIdeas( int ) const;
        void setIdeas ( const std::string &, int );
};

#endif