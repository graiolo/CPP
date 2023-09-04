/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:44:04 by graiolo           #+#    #+#             */
/*   Updated: 2023/09/03 22:03:38 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main( void )
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    const Dog* dogPtr = dynamic_cast<const Dog*>(j);
    for (int i = 0; i < 5; i++) {
    std::cout << "Il doggo pensa";
    dogPtr->Dog::getIdeas(i).empty( ) != 0 ? std::cout << "..." : std::cout <<  dogPtr->Dog::getIdeas(i);
    std::cout << std::endl;
    }

    delete j;
    delete i;

    std::cout << std::endl;

    Cat basic("Sandro");
    {
        basic.setIdeas("sleeping", 0);
        std::cout << "[basic] "<< basic.Animal::getType() << " is thing... " << basic.getIdeas(0) << std::endl;
        Cat tmp = basic;
        std::cout << "[tmp] " << tmp.Animal::getType() << " is thing... " << tmp.getIdeas(0) << std::endl;
    }

    std::cout << "[basic] "<< basic.Animal::getType() << " is thing... " << basic.getIdeas(0) << std::endl;
    std::cout << std::endl;

    const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    for ( int i = 0; i < 4; i++ ) {
        delete animals[i];
    }

    return 0;
}