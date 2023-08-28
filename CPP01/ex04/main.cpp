/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 23:32:22 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/25 23:41:22 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Forbidden functions : std::string::replace */
/* Using C file manipulation functions is forbidden and will be considered cheating */

//a filename and two strings, s1 and s2.
// copia <filename> in <filename>.replace e sostituisce ogni occorrenza di s1 in s2

#include <fstream>
#include <iostream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "invalid number of argument" << std::endl;
		std::cout << "[file name] [s1] [s2]" << std::endl;
		return (1);
	}
	
	std::string		file_name(argv[1]);
	std::fstream	in_file(argv[1]);

	if (!in_file.good(	))
	{
		std::cerr << "unable to open file" << std::endl;
		return (1);
	}

	file_name.append(".replace");

	std::ofstream	out_file(file_name.c_str(	), std::ios::trunc);

	std::string		line;

	std::string		old(argv[2]);
	std::string		replce(argv[3]);

	if (out_file.is_open(	))
	{
		while (getline(in_file, line))
		{
			while (line.find(old) != std::string::npos)
			{
				std::string 	nline;

				nline = line.substr(0, line.find(old));
				nline = nline + replce;
				nline = nline + line.substr(line.find(old) + old.length(	));
				line = nline;
			}
			
			out_file << line << std::endl;

		}
	}

	in_file.close(	);
	out_file.close(	);

	return (0);
}