/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:15:49 by graiolo           #+#    #+#             */
/*   Updated: 2023/07/07 17:28:44 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	int	i;
	int	n;

	i = 0;
	n = 1;
	if (argc == 1)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
	while (argv[n] != NULL)
	{
		while (argv[n][i] != 0)
			std::cout << (char)toupper(argv[n][i++]);
		i = 0;
		if (argv[++n] != NULL)
			std::cout << " ";
	}
	return (0);
}