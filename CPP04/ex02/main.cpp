/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:44:04 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/21 18:36:45 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main( void )
{
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

    delete j;
    delete i;

    std::cout << std::endl;

    Cat basic("Sandro");
    {
        basic.setIdeas("sleeping", 0);
        std::cout << "[basic] "<< basic.AAnimal::getType() << " is thing... " << basic.getIdeas(0) << std::endl;
        Cat tmp = basic;
        std::cout << "[tmp] " << tmp.AAnimal::getType() << " is thing... " << tmp.getIdeas(0) << std::endl;
    }
    std::cout << "[basic] "<< basic.AAnimal::getType() << " is thing... " << basic.getIdeas(0) << std::endl;
    std::cout << std::endl;

    const AAnimal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    for ( int i = 0; i < 4; i++ ) {
        delete animals[i];
    }

    return 0;
}