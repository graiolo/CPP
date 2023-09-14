# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/29 17:29:47 by graiolo           #+#    #+#              #
#    Updated: 2023/09/12 12:09:07 by graiolo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Bureaucrat

CC		=	c++
FLAGS	= 	-Wall -Wextra -Werror -std=c++98
RM		=	rm -rf

SRC		=	main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp\
			RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp
OBJ		=	$(SRC:.cpp=.o)
HEADER	=	 Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp\
			 RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp

%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all flcean clean re
