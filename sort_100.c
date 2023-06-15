/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:27:38 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/06/15 22:38:35 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"
void sort_100(list_t **stack_a, list_t **stack_b, int n)
{
     int chunk;
     int next_chunk = 0;
     int i = 0;
     chunk = n / 5;
     next_chunk += chunk;
     while(*stack_a)
     {
        while((*stack_a) != NULL && ((*stack_a)->index > chunk))
            ra(stack_a);
        if((*stack_a)->index < (chunk - (next_chunk / 2)))
            push_b(stack_a, stack_b);
        else if(  (*stack_a)->index >= (chunk - (next_chunk / 2)))
        {
            push_b(stack_a, stack_b);
            rb(stack_b);
        }
        i++;
        if( i == chunk)
            chunk += next_chunk;
     }
}