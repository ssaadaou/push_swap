/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_num.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 03:21:37 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/06/12 03:21:37 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void indexing_node(list_t *stack)
{
    int index = 0;
    int size = stack_size(stack);
    list_t *tmp = stack;
    while(size)
    {
        tmp->index = index;
        index++;
        size--;
    }
}

int main ()
{
    list_t *stack;
    
}