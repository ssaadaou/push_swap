#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/18 17:20:46 by ssaadaou          #+#    #+#              #
#    Updated: 2023/06/18 17:27:12 by ssaadaou         ###   ########.fr        #
#                                                                              #
#******************************************************************************#


NAME = bonus/checker

HEADER = bonus/bonus.h

CC = cc

CFLAGS = -Wall -Wextra -Werror -fsanitize=address

RM = rm -rf

SRC = checker.c operations_eins.c operations_zwei.c utils.c split.c  node.c valid_parse.c get_next_line.c get_next_line_utils.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
