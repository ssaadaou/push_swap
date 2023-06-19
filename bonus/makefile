#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/18 22:16:02 by ssaadaou          #+#    #+#              #
#    Updated: 2023/06/19 00:04:34 by ssaadaou         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

BONUS_NAME = bonus

BONUS_HEADER = bonus.h

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

BONUS_SRC = checker.c operations_eins.c operations_zwei.c split.c \
			new_nodes.c get_next_line.c get_next_line_utils.c \
			adds_function.c valid_numbers.c parse_bonus.c \

BONUS_OBJ = $(BONUS_SRC:.c=.o)

all: $(BONUS_NAME)

%.o : %.c $(BONUS_HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(BONUS_OBJ)
	$(CC) $(CFLAGS) $(BONUS_OBJ) -o $(BONUS_NAME)

clean:
	$(RM) $(OBJ) $(BONUS_OBJ)

fclean: clean
	$(RM) $(NAME) $(BONUS_NAME)

re: fclean all

