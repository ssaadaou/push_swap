# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/07 12:20:40 by ssaadaou          #+#    #+#              #
#    Updated: 2023/06/07 12:20:40 by ssaadaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBRARY = push_swap.h

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

SRC = operations.c utils.c split.c node.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) 

%.o : %.c $(LIBRARY)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all