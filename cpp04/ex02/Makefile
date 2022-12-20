#cpp module 04/ ex02

NAME = Animals02
SRCS = main.cpp Cat.cpp Dog.cpp ABS_Animal.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

OBJ = $(SRCS:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -g -std=c++98 -fsanitize=address
HEADER_CAT = Cat.hpp
HEADER_DOG = Dog.hpp
HEADER_ABS_Animal = ABS_Animal.hpp
HEADER_WABS_Animal = WrongAnimal.hpp
HEADER_WCAT = WrongCat.hpp
HEADER_BRAIN = Brain.hpp

CC = c++

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(FLAGS) -o $(NAME) -I $(HEADER_CAT) -I $(HEADER_ABS_Animal) -I $(HEADER_DOG) -I $(HEADER_WCAT) -I $(HEADER_WABS_Animal) -I $(HEADER_BRAIN)

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

