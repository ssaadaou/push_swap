/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_parse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 02:41:49 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/06/19 21:34:12 by ssaadaou         ###   ########.fr       */
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

int valid(char **str)
{
    int i ;

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

void parse(list_t **stack_a, list_t **stack_b, int ac, char **av)
{ 
    int i;
    char **str;
    char *join;
    
    (void)stack_b;
    is_empty(ac, av);
    join = mein_strjoin(ac,av," ");
    str = splitt(join, ' ');
    free(join);
    if (!valid(str))
    {
        ft_putstr("error : no valid input\n");
        exit(1);
    }
    i = 0;
    while(str[i] != NULL)
    {
        add_node_end(stack_a , new_node(ft_atoi(str[i])));
        i++;
    }
    _free(str);
}