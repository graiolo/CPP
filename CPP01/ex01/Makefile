# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/16 17:46:54 by graiolo           #+#    #+#              #
#    Updated: 2023/08/27 14:23:41 by graiolo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Zombie
	
CC			= c++
FLAGS		= -std=c++98 -Wall -Wextra -Werror
RM			= rm -rf

SRC			= main.cpp ZombieHorde.cpp Zombie.cpp

OBJ			= $(SRC:.cpp=.o)

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
