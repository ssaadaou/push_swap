/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 03:38:38 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/06/17 21:24:53 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

void free_stack(list_t *stack)
{
    list_t *tmp;
    while(stack)
    {
        tmp = stack;
        stack = stack->link;
        free(tmp);
    }
}
int main(int ac, char **av)
{
    list_t *stack_a = NULL;
    list_t *stack_b = NULL;
    
    char **str;
    char *join = NULL;

    is_empty(ac, av);
    join = ft_strjoin(ac,av," ");
    free(join);
    str = splitt(join, ' ');
    int i;
   
    if (!valid(ac, str))
    {
        ft_putstr("no valid input\n");
        exit(1);
    }
    i = 0;
    while(str[i] != NULL)
    {
        add_node_end(&stack_a , new_node(ft_atoi(str[i])));
        i++;
    }
    _free(str);
    // puts("here\n");
    index_node(stack_a);
    // printf("Node w/ data %d index %d\n", stack_a->data, stack_a->index);
    sorting(stack_a, stack_b);
    while(1);
    return 0;
}

int valid(int ac, char **str)
{
    int i ;
    
    if(ac == 1)
        return 0;
    i = 0;
    while(str[i] != NULL)
    {
        if(ft_integer(str[i]) == 0 || ft_duplicate(str) == 0)
        {
            _free(str);
            return (0);
        }
        i++;
    }
    return (1);
}