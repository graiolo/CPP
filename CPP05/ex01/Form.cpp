#include "Form.hpp"

Form::Form(const std::string& name, int sing, int execute) : _name(name), _signed(false), _gradeToSign(sing), _gradeToExecute(execute) {

    if (_gradeToSign < 0)
        throw(GradeTooHighException( ));
    if (_gradeToSign > 150)
        throw(GradeTooLowException( ));

    if (_gradeToExecute < 0)
        throw(GradeTooHighException( ));
    if (_gradeToExecute > 150)
        throw(GradeTooLowException( ));

}

Form::Form(const std::string& name, int sing) : _name(name), _signed(false), _gradeToSign(sing), _gradeToExecute(150) {
    if (_gradeToSign < 0)
        throw(GradeTooHighException( ));
    if (_gradeToSign > 150)
        throw(GradeTooLowException( ));
}

Form::Form(const Form &raw) : _name(raw._name), _signed(raw._signed), _gradeToSign(raw._gradeToSign), _gradeToExecute(raw._gradeToExecute) {

}

Form::~Form(void) { }

Form& Form::operator=(const Form& raw) {
    if (this != &raw) {
        _signed = raw._signed;
    }
    return (*this);
}

const std::string Form::getName(void) const {
    return (_name);
}

bool Form::getSigned(void) const {
    return (_signed);
}
int Form::getGradeToSign(void) const {
    return (_gradeToSign);
}
int Form::getGradeToExecute(void) const {
    return (_gradeToExecute);
}

const char* Form::GradeTooHighException::what() const throw ( ) {
    return ("Grade value is too high");
}

const char* Form::GradeTooLowException::what() const throw ( ) {
    return ("Grade value is too low");
}

void Form::beSigned(const Bureaucrat& raw) {
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

std::ostream& operator<<(std::ostream& os, const Form& raw) {
    os << "name: " << raw.getName( ) << std::endl;
    os << "signed: ";
    raw.getSigned( ) != 0 ? os << "yes" : os << "no";
    os << std::endl;
    os << "grade to sign: " << raw.getGradeToSign( ) << std::endl;
    os << "grade to execute: " << raw.getGradeToExecute( ) << std::endl;
    return (os);
}