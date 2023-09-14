/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:26:58 by graiolo           #+#    #+#             */
/*   Updated: 2023/09/10 15:41:05 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void) { };
Serializer::~Serializer(void) { };

uintptr_t Serializer::serialize(Data* ptr) {
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw) {
    return (reinterpret_cast<Data*>(raw));
}

Serializer& Serializer::operator=(const Serializer& raw) {
	(void)raw;
	return (*this);

}