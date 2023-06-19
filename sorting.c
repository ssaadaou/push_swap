/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 20:21:02 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/06/19 01:37:37 by ssaadaou         ###   ########.fr       */
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
    int size = stack_size(stack_a) ;
    if (is_sorted(stack_a) == 1)
        exit(0);
        puts("madatory");
    if (size == 2)
	{
		if ((stack_a->data) > (stack_a->link->data))
        {
            sa(&stack_a);
            exit (0);
        }
	}
        puts("sorting fct\n");
    if (size == 3)
        sort_three(&stack_a);
    if(size <= 5)
    {
        sort_five(&stack_a, &stack_b);
    }
    else if(size <= 100 && size > 5 )
        sort_diff_range(&stack_a ,&stack_b, size, 100);
    // else
    //     sort_diff_range(&stack_a ,&stack_b, size, 500);
    free_stack(stack_a);
}