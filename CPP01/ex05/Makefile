# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: graiolo <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/19 14:07:21 by graiolo           #+#    #+#              #
#    Updated: 2023/07/19 14:08:52 by graiolo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Harl

CC		= c++
FLAGS	= -std=c++98 -Wall -Werror -Wextra
RM		= rm -rf

SRC		= Harl.cpp main.cpp
OBJ		= $(SRC:.cpp=.o)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re