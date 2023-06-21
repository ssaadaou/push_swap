/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_max_data.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 01:38:54 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/06/11 19:41:13 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int min_data(list_t *stack)
{
    list_t *tmp;
    int min;
    
    min = stack->data;
    tmp = stack->link;
    while(tmp != NULL)
    {
        if(tmp->data < min)
            min = tmp->data;
        tmp = tmp->link;
    }
    return (min);
}


int max_data(list_t *stack)
{
    list_t *tmp;
    int max;

    max = stack->data;
    tmp = stack->link;
    while(tmp != NULL)
    {
        if(tmp->data > max)
            max = tmp->data;
        tmp = tmp->link;
    }
    // printf("max == %d\n", max);
    exit(0);
    return (max);
}
