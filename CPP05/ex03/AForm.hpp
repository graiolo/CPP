/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 18:46:28 by graiolo           #+#    #+#             */
/*   Updated: 2023/09/04 15:12:10 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExecute;
		
		AForm( );
	public:
		AForm(const std::string&, int, int);
		AForm(const std::string&, int);
		AForm(const AForm&);
		virtual ~AForm(void);

		AForm& operator=(const AForm&);

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

		class GradeTooLowSign : public std::exception {
			public:
				const char* what( ) const throw( );
		};
		class GradeTooLowExecute : public std::exception {
			public:
				const char* what( ) const throw( );
		};
		class FormNotSign : public std::exception {
			public:
				const char* what( ) const throw( );
		};

		void beSigned(const Bureaucrat&);
		virtual void execute(Bureaucrat const & executor) const = 0;

};

std::ostream& operator<<(std::ostream&, const AForm&);

#endif