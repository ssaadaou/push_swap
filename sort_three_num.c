/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_num.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 01:39:08 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/06/21 13:29:33 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

// void sort_three(list_t **stack_a, list_t **stack_b)
// {
//     int max = max_data(*stack_a);
//     int min = min_data(*stack_a);
//     if (is_sorted(stack_a) == 0)
//         return ;
//     while((*stack_a) != NULL && (*stack_a)->data != max)
//         ra(stack_a);
//     if((*stack_a)->data == max)
//         push_b(stack_a, stack_b);
//     if(stack_size(*stack_a) == 2)
//     {
//         if((*stack_a)->link->data == min)
//         {
//             push_b(stack_a, stack_b);
//             sa(stack_a);   
//         }
//         else
//             push_b(stack_a, stack_b);
//     }
//     push_a(stack_a, stack_b);
//     push_a(stack_a, stack_b);
//     sa(stack_a);
// }
    // if((*tmp)->link->data == min_data(*tmp) )
    // {
    //     if((*tmp)->link->link->data == max_data(*tmp))
    //         sa(tmp);
    //     else if((*tmp)->data == max_data(*tmp))
    //         ra(tmp);
    // }
    // else if((*tmp)->link->link->data == min_data(*tmp))
    // {
    //     if((*tmp)->data == max_data(*tmp))
    //     {
    //         sa(tmp);
    //         rra(tmp);
    //     }
    //     else
    //         rra(tmp);
    // }
    // else
    // {
    //     sa(tmp);
    //     ra(tmp);
    // }

// void sort_three(list_t **stack_a)
// {
//     int max = max_data(*stack_a);
//     while ((*stack_a) != NULL && (*stack_a)->data != max)
//         ra(stack_a);
//     rra(stack_a);
//     if ((*stack_a)->data > (*stack_a)->link->data)
//         sa(stack_a);
// }
// void print_stack(list_t *stack) 
// {
//     printf("Stack of 3: ");
//     while (stack)
//     {
//         printf("%d ", stack->data);
//         stack = stack->link;
//     }
//     printf("\n");
// }
void sort_three(list_t **stack_a)
{
    if (is_sorted(*stack_a) == 1)
        return ;
    int max = max_data(*stack_a);

    if ((*stack_a)->data == max)
        ra(stack_a);
    else if ((*stack_a)->link->data == max)
    {
        sa(stack_a);
        ra(stack_a);
    }
    if ((*stack_a)->data > (*stack_a)->link->data)
        sa(stack_a);
    // print_stack(*stack_a);
}
