#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/07 12:20:40 by ssaadaou          #+#    #+#              #
#    Updated: 2023/06/18 22:59:03 by ssaadaou         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = push_swap

HEADER = push_swap.h

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

SRC = push_swap.c operations_eins.c operations_zwei.c utils.c split.c node.c \
		sort_three_num.c sort_five_num.c min_max_data.c sorting.c sort_index.c \
		sort_100_500.c valid_parse.c


OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) 

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ) $(BONUS_OBJ)

fclean: clean
	$(RM) $(NAME) $(BONUS_NAME)

re: fclean all
