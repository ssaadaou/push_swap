#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct list
{
    int data;
    struct list *link;
}list_t;
/// parsing
char **splitt(char *s, char c);
int ft_integer(char *s);
int	ft_atoi(char *s);
int	_free(char **res);
int ft_duplicate(char **str);
int is_empty(int ac, char **str);
char	*ft_strjoin(int num_args, char **str, char *delimiter);
int is_digit(int c);
void	ft_putstr(char *buff);
int ft_strslen(char **str, char *del,int ac);
int valid(int ac, char **av);
/// linked list
list_t *new_node(int num);
void add_node_end(list_t **head, list_t *new_node);
void add_node_top(list_t **head, list_t *new_node);

#endif