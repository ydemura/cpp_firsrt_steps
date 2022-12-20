#cpp module 00/ ex01 - DONE

NAME = book
SRCS = PhoneBook.cpp PBook_class_functions.cpp Contact.cpp

OBJ = $(SRCS:.c=.o)
FLAGS = -Wall -Wextra -Werror -g -std=c++98 -fsanitize=address 
HEADER = PhoneBook.hpp
HEADER2 = Contact.hpp
CC = clang++

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -c -o $@ $< -I $(HEADER) -I $(HEADER2)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re

