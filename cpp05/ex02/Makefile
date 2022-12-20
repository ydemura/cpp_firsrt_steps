#cpp module 05/ ex02

NAME = bureaucrat02
SRCS = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp

OBJ = $(SRCS:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -g -std=c++98 -fsanitize=address
HEADER = Bureaucrat.hpp
HEADER2 = AForm.hpp
HEADER3 = ShrubberyCreationForm.hpp
HEADER4 = RobotomyRequestForm.hpp
HEADER5 = PresidentialPardonForm.hpp

CC = c++

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(FLAGS) -o $(NAME) -I $(HEADER) -I $(HEADER2) -I $(HEADER3) -I $(HEADER4) -I $(HEADER5)

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

