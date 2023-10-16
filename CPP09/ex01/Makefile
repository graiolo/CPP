NAME	=  RPN

CC		= c++ -std=c++98
FLAGS	= -Wall -Werror -Wextra -g
RM		= rm -rf

SRC		= main.cpp RPN.cpp
OBJ		= $(SRC:.cpp=.o)
HEADER	= RPN.hpp

%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@

all: name

name: $(OBJ) $(HEADER)
	$(CC) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re