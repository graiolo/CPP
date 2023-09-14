NAME		= Serializer

CC			= c++
FLAGS		= -Wall -Werror -Wextra -std=c++98 -g
RM			= rm -rf

SRC			= Base.cpp main.cpp

OBJ			= $(SRC:.cpp=.o)

HEADER		= Base.hpp

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