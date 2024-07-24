# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jocasado <jocasado@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/07 17:27:27 by jocasado          #+#    #+#              #
#    Updated: 2024/07/24 19:35:45 by jocasado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME = megaphone
CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):  $(OBJ)
	@$(CPP) ${FLAGS} $(OBJ) -o $(NAME)
	@echo "Compiling $(NAME)..."

%.o: %.cpp
	@${CPP} ${FLAGS} -c $< -o $@

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean
