/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 01:10:29 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/06/13 18:47:05 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

int stack_size(list_t *stack)
{
    int size = 0;

    while (stack)
    {
        size++;
        stack = stack->link;
    }
    return size;
}

int get_position(list_t *stack, int data)
{
    int p = 0;
    list_t *tmp = stack;

    while (tmp != NULL)
    {
        if (tmp->data == data)
            return p;
        p++;
        tmp = tmp->link;
    }
    return (-1);  
}

void sort_five(list_t **stack_a, list_t **stack_b)
{
    int min;
    int p;

    while (stack_size(*stack_a) > 3)
    {
        min = min_data(*stack_a);
        p = get_position(*stack_a, min);
        while ((*stack_a)->data != min)
        {
            if (p > (stack_size(*stack_a) / 2))
                rra(stack_a);
            else
                ra(stack_a);
        }
        push_b(stack_a, stack_b);
    }
    sort_three(stack_a);
    while (*stack_b)
        push_a(stack_a, stack_b);
}
