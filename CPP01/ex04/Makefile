# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: graiolo <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/19 10:05:47 by graiolo           #+#    #+#              #
#    Updated: 2023/07/19 11:54:47 by graiolo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= String_replace

CC		= c++
FLAGS	= -std=c++98 -Wall -Werror -Wextra
RM		= rm -rf

SRC		= main.cpp
OBJ		= main.o

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

dell:
	find . -type f ! -name 'Makefile' ! -name 'main.cpp' -exec rm -rf {} +

re: fclean all

.PHONY: all, clean, fclean, re