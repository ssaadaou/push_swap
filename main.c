/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 03:38:38 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/06/12 03:38:38 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int main(int ac, char **av)
{
    list_t *stack_a;
    list_t *stack_b;
    char **str;
    char *join = NULL;
    list_t *head = NULL;

    is_empty(ac, av);
    join = ft_strjoin(ac,av," ");
    str = splitt(join, ' ');
    if (!valid(ac, str))
    {
        ft_putstr("no valid input\n");
        exit(1);
    }
    int i = 1;
    while(str[i] != NULL)
    {
        stack_a = new_node(ft_atoi(str[i]));
        add_node_end(&head , stack_a);
        i++;
    }
        puts("here");
    if(stack_size(stack_a) <= 3)
    {
        sort_three(&stack_a);

    }
    else if(stack_size(stack_a) <= 5)
        sort_five(&stack_a, &stack_b);
    // else
}

int is_sorted(list_t *stack)
{
    while(stack && stack->link)
    {
        if(stack->data > stack->link->data)
            return(0);
        stack = stack->link;
    }
    return(1);
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