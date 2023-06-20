/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 01:10:29 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/06/20 16:08:19 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

int stack_size(list_t *stack)
{
    int size = 0;

    while (stack)
    {
        stack = stack->link;
        size++;
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
// void print_list(list_t *list)
// {
//     list_t *tmp = list;

//     while(tmp != NULL)
//     {
//         printf("%d ", tmp->data);
//         tmp = tmp->link;
//     }
//     printf("\n");
// }
void sort_five(list_t **stack_a, list_t **stack_b)
{
    int min;
    int p;

    while (stack_size(*stack_a) > 3)
    {
        min = min_data(*stack_a);
        p = get_position(*stack_a, min);
        sleep(2);
        while ((*stack_a)->data != min)
        {
            if (p > (stack_size(*stack_a) / 2))
                rra(stack_a);
            else
                ra(stack_a);
        }
        push_b(stack_a, stack_b);
    }
            // printf("%d\n", stack_size(*stack_a));
    sort_three(stack_a);
    while (*stack_b)
        push_a(stack_a, stack_b);
}
// void sort_five(list_t **stack_a, list_t **stack_b)
// {
//     int index;
//     int i;

//     while (!is_sorted(*stack_a))
//     {
//         i = 0;
//         index = get_position(*stack_a, min_data(*stack_a));
//         if (index == -1)
//             return ;
//         if (index <= stack_size(*stack_a) / 2)
//             while (i++ < index)
//                 ra(stack_a);
//         else
//             while (i++ < (stack_size(*stack_a) - index))
//                 rra(stack_a);
//         if (!is_sorted(*stack_a))
//             push_b(stack_a, stack_b);
//     }
//     while (*stack_b)
//         push_a(stack_a, stack_b);
// }
