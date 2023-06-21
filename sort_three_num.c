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

void sort_three(list_t **stack_a)
{
    if (is_sorted(*stack_a) == 1)
        return ;
    int max = max_data(*stack_a);

    if ((*stack_a)->data == max)
        ra(stack_a, 0);
    else if ((*stack_a)->link->data == max)
    {
        sa(stack_a);
        ra(stack_a, 0);
    }
    if ((*stack_a)->data > (*stack_a)->link->data)
        sa(stack_a);
}
