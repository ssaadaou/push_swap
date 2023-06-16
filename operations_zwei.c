/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_zwei.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 01:12:03 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/06/16 19:12:19 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/


#include "push_swap.h"

list_t *last_node(list_t *head)
{
	list_t *tmp;
	tmp = head;
	if(tmp == NULL)
   		return NULL;
	while(tmp->link != NULL)
		tmp = tmp->link;
	return(tmp);
}

void ra(list_t **a)
{
	list_t *first;
	list_t *last;
	if(!(*a) || (*a)->link == NULL)
		return;
	first = *a;
	*a = (*a)->link;
	first->link = NULL;
	last = last_node(*a);
	last->link = first;
	ft_putstr("ra\n");
}

void rb(list_t **b)
{
	list_t *first;
	list_t *last;
	if(!(*b) || (*b)->link == NULL)
		return;
	first = *b;
	*b = (*b)->link;
	first->link = NULL;
	last = last_node(*b);
	last->link = first;
	ft_putstr("rb\n");
}
void	rr(list_t **a, list_t **b)
{
	ra(a);
	rb(b);
	ft_putstr("rr\n");
}

void rra(list_t **a)
{
    if(!a || !(*a) || !(*a)->link)
        return;

    list_t *tmp = *a;
    list_t *last;

    while(tmp->link->link != NULL)
        tmp = tmp->link;

    last = tmp->link;
    tmp->link = NULL;
    last->link = *a;
    *a = last;
	ft_putstr("rra\n");
}
void rrb(list_t **b)
{
    if(!b || !(*b) || !(*b)->link)
        return;

    list_t *tmp = *b;
    list_t *last;

    while(tmp->link->link != NULL)
        tmp = tmp->link;

    last = tmp->link;
    tmp->link = NULL;
    last->link = *b;
    *b = last;
	ft_putstr("rrb\n");
}

void rrr(list_t **a, list_t **b)
{
	rra(a);
	rra(b);
	ft_putstr("rrr\n");
}
