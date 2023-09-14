/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:27:01 by graiolo           #+#    #+#             */
/*   Updated: 2023/09/10 19:36:11 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAIZER_HPP
# define SCALAIZER_HPP

#include <stdint.h>

# include "Data.hpp"
# include "iostream"

struct Data;

class Serializer {
    private:
        Serializer(void);
        ~Serializer(void);
        Serializer(Serializer&);
        Serializer& operator=(const Serializer&);
    public:
        
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif