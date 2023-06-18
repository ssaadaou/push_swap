/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 17:21:50 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/06/18 20:08:45 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef BONUS_H
# define BONUS_H

# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "../push_swap.h"

# ifndef BUFFER_SIZE
#  define  BUFFER_SIZE 1
# endif


/// PARCING
char **splitt(char *s, char c);
int ft_integer(char *s);
int ft_atoi(char *s);
int _free(char **res);
int ft_duplicate(char **str);
int is_empty(int ac, char **str);
char *ft_strjoin(int num_args, char **str, char *delimiter);
int is_digit(int c);
void ft_putstr(char *buff);
int ft_strslen(char **str, char *del, int ac);
int valid(int ac, char **av);
void sorting(list_t *stack_a, list_t *stack_b);
int get_position(list_t *stack, int data);
void free_stack(list_t *stack);
void parse(list_t **stack_a, list_t **stack_b, int ac, char **av);
char	*get_next_line(int fd);
void check_operation1(list_t **stack_a, list_t **stack_b, char *operation);
void check_operation2(list_t **stack_a, list_t **stack_b, char *operation);

# endif