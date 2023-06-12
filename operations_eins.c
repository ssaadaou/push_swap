/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_eins.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 01:39:47 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/06/11 22:39:08 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sa(list_t **stack)
{
	int tmp;
	
	if(!*stack || (*stack)->link == NULL)
		return ; 
	tmp = (*stack)->data;
	(*stack)->data = (*stack)->link->data;
	(*stack)->link->data = tmp;
	ft_putstr("sa\n");
}

void sb(list_t **stack)
{
	int tmp;
	
	if(!*stack || (*stack)->link == NULL)
		return ; 
	tmp = (*stack)->data;
	(*stack)->data = (*stack)->link->data;
	(*stack)->link->data = tmp;
	ft_putstr("sb\n");
}

void push_a(list_t **a, list_t **b)
{
	list_t *tmp;
	if(*b)
	{
		tmp = *b;
		*b = (*b)->link;
		tmp->link = *a;
		*a = tmp;
	}
	ft_putstr("pa\n");
}
void push_b(list_t **a, list_t **b)
{
	list_t *tmp;
	if(*a)
	{
		tmp = *a;
		*a = (*a)->link;
		tmp->link = *b;
		*b = tmp;
	}
	ft_putstr("pb\n");
}
