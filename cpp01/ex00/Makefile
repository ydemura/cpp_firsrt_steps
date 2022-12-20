#cpp module 01/ ex00

NAME = brain00
SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJ = $(SRCS:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -g -std=c++98 -fsanitize=address
HEADER = Zombie.hpp

CC = clang++

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME) -I $(HEADER)

%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re

