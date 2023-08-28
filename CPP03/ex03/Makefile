# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: graiolo <graiolo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/17 16:16:00 by graiolo           #+#    #+#              #
#    Updated: 2023/08/28 17:03:40 by graiolo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= claptrap
	
CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

SRC			= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
OBJ			= $(SRC:.cpp=.o)
HEADER		= ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp

%.o: %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re