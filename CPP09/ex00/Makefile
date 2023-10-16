NAME	= btc

CC		= c++ -std=c++98
FLAGS	= -Wall -Werror -Wextra 
RM		= rm -rf

SRC		= main.cpp BitcoinExchange.cpp
OBJ		= $(SRC:.cpp=.o)
HEADER	= BitcoinExchange.hpp

%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@

all: name

name: $(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re