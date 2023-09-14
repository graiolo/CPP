/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:08:24 by graiolo           #+#    #+#             */
/*   Updated: 2023/09/11 02:20:49 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(const std::string& name, int sing, int execute) : _name(name), _signed(false), _gradeToSign(sing), _gradeToExecute(execute) {

    if (_gradeToSign < 0)
        throw(GradeTooHighException( ));
    if (_gradeToSign > 150)
        throw(GradeTooLowException( ));

    if (_gradeToExecute < 0)
        throw(GradeTooHighException( ));
    if (_gradeToExecute > 150)
        throw(GradeTooLowException( ));

}

AForm::AForm(const std::string& name, int sing) : _name(name), _signed(false), _gradeToSign(sing), _gradeToExecute(150) {
    if (_gradeToSign < 0)
        throw(GradeTooHighException( ));
    if (_gradeToSign > 150)
        throw(GradeTooLowException( ));
}

AForm::AForm(const AForm &raw) : _name(raw._name), _signed(raw._signed), _gradeToSign(raw._gradeToSign), _gradeToExecute(raw._gradeToExecute) {

}

AForm::~AForm(void) { }

AForm& AForm::operator=(const AForm& raw) {
    if (this != &raw) {
        _signed = raw._signed;
    }
    return (*this);
}

const std::string AForm::getName(void) const {
    return (_name);
}

bool AForm::getSigned(void) const {
    return (_signed);
}
int AForm::getGradeToSign(void) const {
    return (_gradeToSign);
}
int AForm::getGradeToExecute(void) const {
    return (_gradeToExecute);
}

const char* AForm::GradeTooHighException::what() const throw ( ) {
    return ("Grade value is too high");
}

const char* AForm::GradeTooLowException::what() const throw ( ) {
    return ("Grade value is too low");
}

void AForm::beSigned(const Bureaucrat& raw) {
    try {
    if (raw.getGrade( ) <= _gradeToSign) {
        _signed = true;
        std::cout << raw.getName( ) << " was successfully signed" << std::endl;
    }
    else
        throw(GradeTooLowException( ));
    }
    catch(const std::exception& e) {
        std::cout << "Enable to sing " << raw.getName( ) << " ";
        std::cout << e.what( ) << std::endl;
    }
    std::cout << "[grade to sign:" << _gradeToSign << "  bureaucrat grade:" << raw.getGrade( ) << "]" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const AForm& raw) {
    os << "name: " << raw.getName( ) << std::endl;
    os << "signed: ";
    raw.getSigned( ) != 0 ? os << "yes" : os << "no";
    os << std::endl;
    os << "grade to sign: " << raw.getGradeToSign( ) << std::endl;
    os << "grade to execute: " << raw.getGradeToExecute( ) << std::endl;
    return (os);
}

const char* AForm::GradeTooLowSign::what( ) const throw( ) {
	return ("grade is to low to Sign for this");
}

const char* AForm::GradeTooLowExecute::what( ) const throw( ) {
    return ("grade is to low to Execute this");

}
const char* AForm::FormNotSign::what( ) const throw( ) {
	return ("is't singed");
}