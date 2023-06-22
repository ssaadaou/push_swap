/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_100_500.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:27:38 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/06/21 16:08:03 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

void minimize(list_t **stack_a, list_t **stack_b , int chunk)
{
    push_b(stack_a, stack_b);
    if((*stack_a) != NULL && (*stack_a)->index > chunk)
        rr(stack_a, stack_b);
    else
        rb(stack_b, 0);   
}
void print_stack(list_t *stack) 
{
    list_t *tmp = stack;

    while (tmp != NULL) {
        printf("%d ", tmp->data);
        tmp = tmp->link;
    }

    printf("\n");
}

void sort_diff_range(list_t **stack_a, list_t **stack_b, int n, int flag)
{
     int chunk;
     int next_chunk = 0;
     int i = 0;
     if (flag == 100)
        chunk = n / 5;
    else
        chunk = n / 9;
     next_chunk = chunk;
     while(*stack_a)
     {
        while((*stack_a) && (*stack_a)->index > chunk)
            ra(stack_a, 0);
        if((*stack_a)->index < (chunk - (next_chunk / 2)))
            push_b(stack_a, stack_b);
        else if((*stack_a)->index >= (chunk - (next_chunk / 2)))
            minimize(stack_a, stack_b, chunk);
        i++;
        if( i == chunk)
           chunk += next_chunk;
    }
    // return_to_a(stack_a, stack_b);
    // print_stack(*stack_a);
}
void return_to_a(list_t **stack_a, list_t **stack_b)
{
    int max =0;
    int p ;
    int pos ;
    int next_max = 0;
    while(stack_size(*stack_b))
    {
        max = max_data(*stack_b);
        p = get_position(*stack_b, max);
        next_max = stack_size(*stack_b) - 1;
        pos = get_position(*stack_b, next_max);
        // printf("max >>>> %d\n", max);
        // printf("NEXT__max ************** %d\n", max);
        
        while((*stack_b)->data != max && (*stack_b)->data != next_max )
        {
            if(p > (stack_size(*stack_b) / 2))
                rrb(stack_b);
            else 
                rb(stack_b, 0);
        }
        if((*stack_b)->data == max || (*stack_b)->data == next_max)
        {
            if(p > pos)
                push_a(stack_a,stack_b);
            else
            {
                push_a(stack_a,stack_b);
                sa(stack_a);
            }
        }
    }
}