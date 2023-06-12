/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_num.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 01:39:08 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/06/11 22:42:20 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_three(list_t **stack)
{
    if((*stack)->link->data == min_data(*stack) )
    {
        if((*stack)->link->link->data == max_data(*stack))
            sa(stack);
        else if((*stack)->data == max_data(*stack))
            ra(stack);
    }
    else if((*stack)->link->link->data == min_data(*stack))
    {
        if((*stack)->data == max_data(*stack))
        {
            sa(stack);
            rra(stack);
        }
        else
            rra(stack);
    }
    else
    {
        sa(stack);
        ra(stack);
    }
}
