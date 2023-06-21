#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/07 12:20:40 by ssaadaou          #+#    #+#              #
#    Updated: 2023/06/20 16:32:21 by ssaadaou         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = push_swap
CHECKER = checker
HEADER = push_swap.h

BONUS_HEADER = ./bonus/bonus.h

CC = cc

CFLAGS = -Wall -Wextra -Werror #-fsanitize=address

RM = rm -rf

SRC = push_swap.c operations_eins.c operations_zwei.c utils.c split.c node.c \
		sort_three_num.c sort_five_num.c min_max_data.c sorting.c sort_index.c \
		sort_100_500.c valid_parse.c utils2.c


BONUS_SRC = ./bonus/checker.c ./bonus/operations_eins.c ./bonus/operations_zwei.c split.c \
			./bonus/new_nodes.c ./bonus/get_next_line.c ./bonus/get_next_line_utils.c \
			./bonus/adds_function.c ./bonus/valid_numbers.c ./bonus/parse_bonus.c

OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(BONUS_SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(CFLAGS)  $(OBJ) -o $(NAME) 

bonus : $(CHECKER)


$(CHECKER) : $(OBJ_BONUS) $(BONUS_HEADER)
	$(CC) $(CFLAGS) $(OBJ_BONUS) -o $(CHECKER)

# %.o : %.c $(HEADER) 
#  	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ) $(OBJ_BONUS)

fclean: clean
	$(RM) $(NAME) $(CHECKER) $(OBJ_BONUS)

re: fclean all bonus
