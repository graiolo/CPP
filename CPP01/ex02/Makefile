# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: graiolo <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/17 17:18:51 by graiolo           #+#    #+#              #
#    Updated: 2023/07/17 17:25:39 by graiolo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Brain

CC		= c++
FLAGS	= -std=c++98 -Wall -Werror -Wextra
RM		= rm -rf

SRC		= main.cpp
OBJ		= $(SRC:.cpp=.o)

%.o:%.cpp
	$(CC) $(FLGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clan, fclean, re