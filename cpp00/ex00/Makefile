#cpp module 00/ ex00 - DONE

NAME = megaphone
SRCS = megaphone.cpp

OBJ = $(SRCS:.c=.o)
FLAGS = -Wall -Wextra -Werror -g -std=c++98 -fsanitize=address

CC = clang++

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

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

