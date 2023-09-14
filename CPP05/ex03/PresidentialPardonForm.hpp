/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 18:36:28 by graiolo           #+#    #+#             */
/*   Updated: 2023/09/09 19:29:23 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class AForm;

class PresidentialPardonForm : public AForm {
	private:
	std::string	_target;
	PresidentialPardonForm(void);
	public:
	PresidentialPardonForm(const std::string&);
	PresidentialPardonForm(const PresidentialPardonForm&);
	~PresidentialPardonForm(void);

	static AForm* gen(const std::string&);
	PresidentialPardonForm operator=(const PresidentialPardonForm&);

	void execute(Bureaucrat const & executor) const;
};

#endif