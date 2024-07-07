# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jocasado <jocasado@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/07 17:27:27 by jocasado          #+#    #+#              #
#    Updated: 2024/07/07 17:27:30 by jocasado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME = megaphone
CC = c++
FLAGS = -c -Wall -Wextra -Werror 
RM = /bin/rm -f
SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

.c.o:
	@${CC} ${FLAGS} $^ -o $@

$(NAME):  $(OBJ)
	@$(CC) $(OBJ) -o $(NAME)
	@echo "Compiling $(NAME)..."

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean
