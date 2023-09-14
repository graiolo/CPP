/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:14:33 by graiolo           #+#    #+#             */
/*   Updated: 2023/09/06 12:21:31 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class AForm;

class ShrubberyCreationForm : public AForm {
	private:
	std::string	_target;
	ShrubberyCreationForm(void);
	public:
	ShrubberyCreationForm(const std::string&);
	ShrubberyCreationForm(const ShrubberyCreationForm&);
	~ShrubberyCreationForm(void);

	ShrubberyCreationForm operator=(const ShrubberyCreationForm&);

	void execute(Bureaucrat const & executor) const;
};

#endif