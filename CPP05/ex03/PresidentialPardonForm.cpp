/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 18:42:11 by graiolo           #+#    #+#             */
/*   Updated: 2023/09/09 18:49:57 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): AForm("PresidentialPardonForm", 25, 5), _target("PresidentialPardonForm") {
	std::cout << "[PresidentialPardonForm] constructor call" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target): AForm(target, 25, 5), _target(target) {
	std::cout << "[PresidentialPardonForm] constructor call" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& raw) : AForm(raw._target, 25, 5) {
	std::cout << "[PresidentialPardonForm] copy constructor call" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm( ) {
	std::cout << "[PresidentialPardonForm] destructor call" << std::endl;
}

PresidentialPardonForm PresidentialPardonForm::operator=(const PresidentialPardonForm& raw) {
	(void)raw;
	std::cout << "[PresidentialPardonForm] assignament operator call" << std::endl;
	return (*this);
}

AForm* PresidentialPardonForm::gen(const std::string& target) {
    return (new PresidentialPardonForm(target));
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    if (!this->AForm::getSigned( )) {
        throw(FormNotSign( ));
        return ;
    }
    if (this->AForm::getGradeToSign( ) < executor.getGrade( )) {
        throw(GradeTooLowSign( ));
        return ;
    }
    if (this->AForm::getGradeToExecute( ) < executor.getGrade( )) {
        throw(GradeTooLowExecute( ));
        return ;
    }
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}