/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:27:38 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/06/17 16:14:38 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

void sort_diff_range(list_t **stack_a, list_t **stack_b, int n, int flag)
{
     int chunk;
     int next_chunk = 0;
     int i = 0;
     if (flag == 100)
        chunk = n / 5;
    else
        chunk = n / 20;
     next_chunk += chunk;
     while(*stack_a)
     {
        while((*stack_a) != NULL && ((*stack_a)->index > chunk))
            ra(stack_a);
        if((*stack_a)->index <= (chunk - (next_chunk / 2)))
            push_b(stack_a, stack_b);
        else if((*stack_a)->index > (chunk - (next_chunk / 2)))
        {
           push_b(stack_a, stack_b);
           rb(stack_b);
        }
        i++;
        if( i == chunk)
           chunk += next_chunk;
    }
    puts ("now back to stack_a");
    return_to_a(stack_a, stack_b);
}
void return_to_a(list_t **stack_a, list_t **stack_b)
{
    int max =0;
    int p ;
    int size_st_b = stack_size(*stack_b);
    while(stack_b != NULL && *stack_b != NULL )
    {
        while(size_st_b != 0)
        {
            max = max_data(*stack_b);
            printf(">>>>>>>> %d\n",max);
            fflush(stdout);
            p = get_position(*stack_b, max);
            while((*stack_b)->data != max)
            {
                if(p < size_st_b / 2)
                    rb(stack_b);
                else if(p > size_st_b / 2) 
                    rrb(stack_b);
            }
            push_a(stack_a,stack_b);
        }
    }
    
}