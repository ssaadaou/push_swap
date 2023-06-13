/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 20:21:02 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/06/13 20:26:56 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

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
void sorting(list_t *stack_a, list_t *stack_b)
{
    if (is_sorted(stack_a) == 1)
        exit(0);
    if (stack_size(stack_a) == 2)
	{
		if ((stack_a->data) > (stack_a->link->data))
        {
            sa(&stack_a);
            exit (0);
        }   
	}
    puts("here");
    if (stack_size(stack_a) == 3)
    {
        sort_three(&stack_a);
    }
    else if(stack_size(stack_a) <= 5)
        sort_five(&stack_a, &stack_b);
    
}