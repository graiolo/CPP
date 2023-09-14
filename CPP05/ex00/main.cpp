/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 17:35:56 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/29 17:42:41 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat tooHigh("High", 0);
	Bureaucrat tooLow("Low", 160);

	std::cout << "----" << std::endl;
	Bureaucrat okay("okay", 100);
	std::cout << okay << std::endl;
	okay.upGrade(90);
	std::cout << okay << std::endl;
	okay.downGrade(90);
	std::cout << okay << std::endl;

	std::cout << "----" << std::endl;
	okay.upGrade(150);
	std::cout << okay << std::endl;
	okay.downGrade(150);
	std::cout << okay << std::endl;

	std::cout << "----" << std::endl;
	Bureaucrat copy = Bureaucrat(tooHigh);
	std::cout << copy << std::endl;

	std::cout << "----" << std::endl;

	return 0;
}