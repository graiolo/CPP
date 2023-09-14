/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:52:07 by graiolo           #+#    #+#             */
/*   Updated: 2023/09/12 12:13:11 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main (void) {
    Bureaucrat graiolo("graiolo", 70);
    Intern someRandomIntern;
    AForm* rrf;
        
    rrf = someRandomIntern.makeForm("shruberry arequest", "Bender");
    if (rrf) {
        std::cout << std::endl;
        graiolo.executeForm(*rrf);
        std::cout << std::endl;
        graiolo.signForm(*rrf);
        std::cout << std::endl;
        graiolo.executeForm(*rrf);
        std::cout << std::endl;
        delete rrf;
    }
    
    return (0);
}
