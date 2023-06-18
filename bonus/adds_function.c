/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adds_function.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 15:00:43 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/06/18 15:29:39 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "bonus.h"

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
int ft_strcmp(char *s1,char *s2)
{
    while(*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}


void check_operation1(list_t **stack_a, list_t **stack_b, char *operation)
{
    if (ft_strcmp(operation, "sa\n") == 0)
        sa(stack_a);
    else if (ft_strcmp(operation, "sb\n") == 0)
        sb(stack_b);
    else if (ft_strcmp(operation, "ss\n") == 0)
    {
        sa(stack_a);
        sb(stack_b);
    }
    else if (ft_strcmp(operation, "pa\n") == 0)
        push_a(stack_b, stack_a);
    else if (ft_strcmp(operation, "pb\n") == 0)
        push_b(stack_a, stack_b);
    else if (ft_strcmp(operation, "ra\n") == 0)
        ra(stack_a);
    else
        check_operation2(stack_a, stack_b, operation);
}

void check_operation2(list_t **stack_a, list_t **stack_b, char *operation)
{
    if (ft_strcmp(operation, "rb\n") == 0)
        rb(stack_b);
    else if (ft_strcmp(operation, "rr\n") == 0)
    {
        ra(stack_a);
        rb(stack_b);
    }
    else if (ft_strcmp(operation, "rra\n") == 0)
        rra(stack_a);
    else if (ft_strcmp(operation, "rrb\n") == 0)
        rrb(stack_b);
    else if (ft_strcmp(operation, "rrr\n") == 0)
    {
        rra(stack_a);
        rrb(stack_b);
    }
    else
    {
        ft_putstr("Error: wrong operation\n");
        exit(1);
    }
}
