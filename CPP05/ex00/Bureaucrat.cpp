/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:17:00 by graiolo           #+#    #+#             */
/*   Updated: 2023/09/04 12:46:04 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name) {
	try {
		if (grade < 1)
			throw(Bureaucrat::GradeTooHighException( ));
		if (grade > 150)
			throw (Bureaucrat::GradeTooLowException( ));
	} catch (const std::exception& e) {
		_grade = 150;
		std::cout << e.what( ) << "so: ";
		std::cout << _name << " is set by default to " << _grade << std::endl;
		return;
	}
	_grade = grade;
}

Bureaucrat::~Bureaucrat(void) { };

Bureaucrat::Bureaucrat(const Bureaucrat& raw) : _name(raw._name), _grade(raw._grade) { }

Bureaucrat& Bureaucrat::operator=(const Bureaucrat&raw) {
	if (this != &raw) {
		_grade = raw.getGrade( );
	}
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& raw) {
	os << raw.getName( ) << ", bureaucrat grade " << raw.getGrade( );
	return (os);
}

const std::string Bureaucrat::getName(void) const {
    return (_name);
}

int Bureaucrat::getGrade (void) const {
	return (_grade);
}

void Bureaucrat::upGrade(int val) {
	try {
		if (_grade - val < 1)
			throw (Bureaucrat::GradeTooHighException( ));
		else
			_grade -= val;
	} catch (const Bureaucrat::GradeTooHighException& e) {
		std::cout << e.what( ) << std::endl; 
	}
}

void Bureaucrat::downGrade(int val) {
	try {
		if (_grade + val > 150)
			throw (Bureaucrat::GradeTooLowException( ));
		else
			_grade += val;
	} catch (const Bureaucrat::GradeTooLowException& e) {
		std::cout << e.what( ) << std::endl; 
	}
}

const char* Bureaucrat::GradeTooHighException::what( ) const throw ( ) {
	return ("Grade value is too high");
}

const char* Bureaucrat::GradeTooLowException::what( ) const throw( ) {
	return("Grade value is too low");
}