/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 18:16:05 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/06/19 20:31:00 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

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
int valid( char **av);
void sorting(list_t *stack_a, list_t *stack_b);
int get_position(list_t *stack, int data);
void free_stack(list_t *stack);
void parse(list_t **stack_a, list_t **stack_b, int ac, char **av);
/// linked list
list_t *new_node(int num);
list_t *last_node(list_t *head);
void add_node_end(list_t **head, list_t *new_node);
void add_node_top(list_t **head, list_t *new_node);
int min_data(list_t *stack);
int max_data(list_t *stack);
void sa(list_t **stack);
void sb(list_t **stack);
void push_a(list_t **a, list_t **b);
void push_b(list_t **a, list_t **b);
void ra(list_t **a);
void rb(list_t **b);
void rr(list_t **a, list_t **b);
void rra(list_t **a);
void rrb(list_t **b);
void rrr(list_t **a, list_t **b);
int stack_size(list_t *stack);

/// algo
void sort_three(list_t **stack);
int is_sorted(list_t *stack);
void sort_five(list_t **stack_a, list_t **stack_b);
void index_node(list_t *stack);
void sort_diff_range(list_t **stack_a, list_t **stack_b, int n, int flag);
void return_to_a(list_t **stack_a, list_t **stack_b);
#endif
