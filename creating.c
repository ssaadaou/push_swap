/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creating.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 01:38:54 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/05/10 01:43:40 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void add_at_start(struct node* start)
{
    struct node *ptr;   
    ptr -> link = start;
    start = ptr;
}
// counting node by traversing the linked list

int count_node(t_node *start)
{
    t_node *ptr = start;
    while(ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }
    return count;
}

