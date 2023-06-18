#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/07 12:20:40 by ssaadaou          #+#    #+#              #
#    Updated: 2023/06/18 20:10:08 by ssaadaou         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = push_swap
BONUS_NAME = checker

HEADER = push_swap.h
BONUS_HEADER = bonus/bonus.h

CC = cc

CFLAGS = -Wall -Wextra -Werror -fsanitize=address

RM = rm -rf

SRC = push_swap.c operations_eins.c operations_zwei.c utils.c split.c node.c \
		sort_three_num.c sort_five_num.c min_max_data.c sorting.c sort_index.c \
		sort_100_500.c valid_parse.c

BONUS_SRC = bonus/checker.c operations_eins.c operations_zwei.c split.c \
	node.c valid_parse.c bonus/get_next_line.c bonus/get_next_line_utils.c bonus/adds_function.c

OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) 

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(BONUS_OBJ)
	$(CC) $(CFLAGS) $(BONUS_OBJ) -o $(BONUS_NAME)

clean:
	$(RM) $(OBJ) $(BONUS_OBJ)

fclean: clean
	$(RM) $(NAME) $(BONUS_NAME)

re: fclean all
