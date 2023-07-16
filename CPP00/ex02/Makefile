# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: graiolo <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/09 16:49:51 by graiolo           #+#    #+#              #
#    Updated: 2023/07/09 18:49:46 by graiolo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = acocunt

CC = c++

FLAGS = -std=c++98 -Wall -Werror -Wextra

RM = rm -rf

SRC = tests.cpp Account.cpp

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(OBJ) $(NAME)

re: fclean all

.PHONY: re fclean clean all