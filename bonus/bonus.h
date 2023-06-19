/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 17:21:50 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/06/18 23:56:35 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef BONUS_H
# define BONUS_H

# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "get_next_line.h"

# ifndef BUFFER_SIZE
#  define  BUFFER_SIZE 1
# endif

typedef struct list
{
    int data;
    int index;
    struct list *link;
} list_t;


/// PARCING
char **splitt(char *s, char c);
int ft_integer(char *s);
int ft_atoi(char *s);
int _free(char **res);
int ft_duplicate(char **str);
int is_empty(int ac, char **str);
char *mein_strjoin(int num_args, char **str, char *delimiter);
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
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(char *s);
int	ft_strchr(char *s);
int	ft_strlen(char *s);
void free_stack(list_t *stack);
int valid(int ac, char **av);
int is_sorted(list_t *stack);
int ft_strcmp(char *s1,char *s2);
list_t *new_node(int num);
void	add_node_end(list_t **head, list_t *newnode);

void sa(list_t **stack);
void ss(list_t **a, list_t **b);
void sb(list_t **stack);
void push_b(list_t **a, list_t **b);
void push_a(list_t **a, list_t **b);
list_t *last_node(list_t *head);
void ra(list_t **a);
void rb(list_t **b);
// void rr(list_t **b);
void rrr(list_t **a, list_t **b);
void rra(list_t **a);
void rrb(list_t **b);

# endif