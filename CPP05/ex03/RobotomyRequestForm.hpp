/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 18:42:00 by graiolo           #+#    #+#             */
/*   Updated: 2023/09/09 19:29:27 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class AForm;

class RobotomyRequestForm : public AForm {
	private:
	std::string	_target;
	RobotomyRequestForm(void);
	public:
	RobotomyRequestForm(const std::string&);
	RobotomyRequestForm(const RobotomyRequestForm&);
	~RobotomyRequestForm(void);


	static AForm* gen(const std::string&);
	RobotomyRequestForm operator=(const RobotomyRequestForm&);

	void execute(Bureaucrat const & executor) const;
};

#endif