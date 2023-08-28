# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: graiolo <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/28 16:42:19 by graiolo           #+#    #+#              #
#    Updated: 2023/08/01 01:42:20 by graiolo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= triangle

CC		= c++
FLAGS	= -Wall -Werror -Wextra -std=c++98
RM		= rm -rf

SRC		= Fixed.cpp main.cpp \
			Point.cpp bsp.cpp
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

.PHONY: re, all, clean, fclean
