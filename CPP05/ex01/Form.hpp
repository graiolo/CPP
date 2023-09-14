/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 18:46:28 by graiolo           #+#    #+#             */
/*   Updated: 2023/09/11 02:19:06 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		const std::string	_name;
		bool		_signed;
		const int			_gradeToSign;
		const int			_gradeToExecute;
		
		Form( );
	public:
		Form(const std::string&, int, int);
		Form(const std::string&, int);
		Form(const Form&);
		~Form(void);

		Form& operator=(const Form&);

		const std::string getName(void) const;
		bool getSigned(void) const;
		int getGradeToSign(void) const;
		int getGradeToExecute(void) const;

		class GradeTooHighException : public std::exception {
			public:
			const char* what() const throw ( );
		};

		class GradeTooLowException : public std::exception {
			public:
			const char* what() const throw ( );
		};

		void beSigned(const Bureaucrat&) ;

};

std::ostream& operator<<(std::ostream&, const Form&);

#endif