/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 17:35:56 by graiolo           #+#    #+#             */
/*   Updated: 2023/09/04 15:21:57 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main(void)
{
	Bureaucrat tooLow("Low", 160);
	Form job("IT", 50, 8);

	job.beSigned(tooLow);
	std::cout << std::endl;

    try {
        Bureaucrat bureaucrat("ash",11);
        Form form("formName", 10);

        bureaucrat.signForm(form);

		bureaucrat.upGrade(2);
		bureaucrat.signForm(form);
		
		std::cout << std::endl;
        std::cout << form << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

	return 0;
}