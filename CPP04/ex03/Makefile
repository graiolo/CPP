# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/24 21:15:48 by graiolo           #+#    #+#              #
#    Updated: 2023/09/03 22:15:58 by graiolo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= material

CC		= c++
FLAGS	= -Wall -Werror -Wextra --std=c++98 -g
RM		= rm -rf

SRC		= $(wildcard *.cpp)
OBJ		= $(SRC:.cpp=.o)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re