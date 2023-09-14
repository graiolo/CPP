/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:04:27 by graiolo           #+#    #+#             */
/*   Updated: 2023/09/12 12:12:26 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) { }

Intern::Intern(const Intern& raw) {
	(void)raw;
}

Intern::~Intern(void) { }

Intern Intern::operator=(const Intern& raw) {
	(void)raw;
	return (*this);
}

AForm* Intern::makeForm(const std::string& name, const std::string& target) {
	
	size_t	i;
	std::string list_request[] = {"shruberry request", "robotomy request", "presidential request"};
	std::string list[] = {"shruberry", "robotmy", "presidential"};
	std::string list_msg[] = {"Intern creates shruberry form", "Intern creates robot form", "Intern creates presidential form", "request not found"};
	AForm* (*fun[])(const std::string& target) = {&ShrubberyCreationForm::gen, &RobotomyRequestForm::gen, &PresidentialPardonForm::gen};


	for (i = 0; i < 3; i++) {
		if (!list_request[i].compare(name) || !list[i].compare(name)) {
			std::cout << list_msg[i] << std::endl;
			return (fun[i](target));
		}
	}
	std::cout << list_msg[i] << std::endl;
	return (NULL);
}
