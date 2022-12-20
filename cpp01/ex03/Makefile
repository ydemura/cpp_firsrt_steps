#cpp module 01/ ex03

NAME = brain03
SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJ = $(SRCS:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -g -std=c++98 -fsanitize=address
HEADER = Weapon.hpp
HEADER2 = HumanA.hpp
HEADER3 = HumanB.hpp

CC = clang++

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME) -I $(HEADER) -I $(HEADER2) -I $(HEADER3)

%.o: %.c $(HEADER) $(HEADER2) $(HEADER3)
	$(CC) $(FLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re

