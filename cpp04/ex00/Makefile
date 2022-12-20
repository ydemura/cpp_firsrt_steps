#cpp module 04/ ex00

NAME = animals00
SRCS = main.cpp Cat.cpp Dog.cpp Animal.cpp WrongAnimal.cpp WrongCat.cpp

OBJ = $(SRCS:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -g -std=c++98 -fsanitize=address
HEADER_CAT = Cat.hpp
HEADER_DOG = Dog.hpp
HEADER_ANIMAL = Animal.hpp
HEADER_WANIMAL = WrongAnimal.hpp
HEADER_WCAT = WrongCat.hpp

CC = c++

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(FLAGS) -o $(NAME) -I $(HEADER_CAT) -I $(HEADER_ANIMAL) -I $(HEADER_DOG) -I $(HEADER_WCAT) -I $(HEADER_WANIMAL)

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

