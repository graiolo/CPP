/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:12:55 by graiolo           #+#    #+#             */
/*   Updated: 2023/09/04 15:10:03 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "iostream"
# include "Form.hpp"

class Form;

class Bureaucrat {
	private:
		const std::string	_name;
		int					_grade;

		Bureaucrat(void);
	public:
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat&);
		~Bureaucrat(void);
		
		Bureaucrat& operator=(const Bureaucrat&);

		const std::string getName(void) const;
		int getGrade(void) const;

		void upGrade(int);
		void downGrade(int);

		class GradeTooHighException : public std::exception {
			public:
				const char* what( ) const throw ( );
		};

		class GradeTooLowException : public std::exception {
			public:
				const char* what( ) const throw( );
		};
		void signForm(Form&);
};

std::ostream& operator<<(std::ostream&, const Bureaucrat&);

#endif 