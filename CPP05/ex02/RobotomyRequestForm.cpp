#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): AForm("RobotomyRequestForm", 72, 45), _target("RobotomyRequestForm") {
	std::cout << "[RobotomyRequestForm] constructor call" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target): AForm(target, 72, 45), _target(target) {
	std::cout << "[RobotomyRequestForm] constructor call" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& raw) : AForm(raw._target, 72, 45) {
	std::cout << "[RobotomyRequestForm] copy constructor call" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm( ) {
	std::cout << "[RobotomyRequestForm] destructor call" << std::endl;
}

RobotomyRequestForm RobotomyRequestForm::operator=(const RobotomyRequestForm& raw) {
	(void)raw;
	std::cout << "[RobotomyRequestForm] assignament operator call" << std::endl;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
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
    if (rand( ) % 2)
	    std::cout << _target << " has been robotomized" << std::endl;
    else
    	    std::cout << _target << " hasn't been robotomized" << std::endl;
}