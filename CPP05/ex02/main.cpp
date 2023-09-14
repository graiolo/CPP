/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:52:07 by graiolo           #+#    #+#             */
/*   Updated: 2023/09/06 12:56:25 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main (void) {
    Bureaucrat graiolo("graiolo", 70);
    Bureaucrat Low("low", 150);

    ShrubberyCreationForm Shrubbery("Shrubbery");
    RobotomyRequestForm Robotomy("Robotomy");
    PresidentialPardonForm President("President");
    std::cout << std::endl;

    graiolo.signForm(Shrubbery);
    graiolo.executeForm(Shrubbery);

    graiolo.signForm(Robotomy);
    Low.executeForm(Robotomy);
    graiolo.executeForm(Robotomy);

    graiolo.executeForm(President);
    graiolo.signForm(President);
    graiolo.executeForm(President);
    std::cout << std::endl;

    return (0);
}