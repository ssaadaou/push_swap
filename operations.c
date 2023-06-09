/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 01:39:47 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/06/10 03:40:40 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void swap(list_t **stack)
{
	int tmp;
	
	if(!*stack || (*stack)->link == NULL)
		return ; 
	tmp = (*stack)->data;
	(*stack)->data = (*stack)->link->data;
	(*stack)->link->data = tmp;
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
}

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

void rotate_stack(list_t **a)
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
}

void	rr(list_t **a, list_t **b)
{
	rotate_stack(a);
	rotate_stack(b);
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
}
void rrr(list_t **a, list_t **b)
{
	rra(a);
	rra(b);
	ft_putstr("rrr\n");
}

// void print_node(list_t *stack_a)
// {
//     while(stack_a != NULL)
//     {
//         printf("%d\n", stack_a->data);
//         stack_a = stack_a->link;
//     }
// }
// int main()
// {
//     list_t *stack_a = NULL;
//     // list_t *stack_b = NULL;
	
//     list_t *node1 = new_node(-1);
//     list_t *node2 = new_node(33);
//     list_t *node3 = new_node(44);
	
//     add_node_end(&stack_a, node1);
//     add_node_end(&stack_a, node2);
//     add_node_end(&stack_a, node3);
	
//     printf("before\n");
//     print_node(stack_a);
//     printf("\n");
//     // print_node(stack_b);
//     rotate_a(&stack_a);
//     printf("after\n");
//     print_node(stack_a);
//     printf("\n");
//     // print_node(stack_b);
// }