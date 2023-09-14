NAME		= Array

CC			= c++
FLAGS		= -Wall -Werror -Wextra -std=c++98 -g
RM			= rm -rf

SRC			= main.cpp

OBJ			= $(SRC:.cpp=.o)

HEADER		= Array.hpp

%.o: %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean flcean re