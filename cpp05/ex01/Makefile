#cpp module 05/ ex01

NAME = bureaucrat01
SRCS = main.cpp Bureaucrat.cpp Form.cpp

OBJ = $(SRCS:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -g -std=c++98 -fsanitize=address
HEADER = Bureaucrat.hpp
HEADER2 = Form.hpp

CC = c++

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(FLAGS) -o $(NAME) -I $(HEADER) -I $(HEADER2)

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

