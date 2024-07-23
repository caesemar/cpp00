NAME = PhoneBook
CC = c++
FLAGS = -c -Wall -Wextra -Werror 
RM = /bin/rm -f
SRC = ex01.cpp
HDR = -I Phonebook.hpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

.c.o:
	@${CC} ${FLAGS} $^ -o $@

$(NAME):  $(OBJ)
	@$(CC) $(OBJ) $(HDR) -o $(NAME)
	@echo "Compiling $(NAME)..."

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean
