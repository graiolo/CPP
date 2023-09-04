# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/19 13:35:05 by graiolo           #+#    #+#              #
#    Updated: 2023/08/21 18:37:19 by graiolo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= animal

CC		= c++
FLAGS	= -Wall -Werror -Wextra -std=c++98
RM 		= rm -rf

SRC		= main.cpp AAnimal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
OBJ		= $(SRC:.cpp=.o)
HEADER	= AAnimal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp

%.o: %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(OBJ) -o $(NAME)

mem: re
	valgrind --show-leak-kinds=all --leak-check=full ./$(NAME)
	make -s clean
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all flcean all re clean
