/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_num.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 20:54:35 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/06/13 22:45:16 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/


#include "push_swap.h"

// void indexing_node(list_t *stack)
// {
//     int index = 0;
//     int size = stack_size(stack);
//     list_t *tmp = stack;
//     while(size)
//     {
//         tmp->index = index;
//         index++;
//         size--;
//     }
// }
void index(list_t *stack)
{
    list_t *tmp = stack;
    while(tmp != NULL)
    {
        tmp->index = -1;
        tmp = tmp->link;
    }
}
int	return_min_index(t_list	*stack)
{
	t_list	*temp;
	t_list	*temp1;
	int		value;

	temp1 = stack;
	temp = stack;
	while (temp1)
	{
		if (temp1->index == -1)
		{
			value = temp1->data;
			break ;
		}
		temp1 = temp1->next;
	}
	while (temp)
	{
		if (temp->data < value && temp->index == -1)
			value = temp->data;
		temp = temp->next;
	}
	return (value);
}

void	reset_index(t_list	*stack)
{
	int	index;

	index = -1;
	while (stack)
	{
		stack->index = index;
		stack = stack->next;
	}
}

void	add_index_to_node(t_list	*stack)
{
	int		index;
	int		size;
	t_list	*temp;

	index = 0;
	reset_index(stack);
	size = list_size(stack);
	while (size != 0)
	{
		temp = stack;
		while (temp != NULL)
		{
			if (temp->data == return_min_index(stack))
			{
				temp->index = index;
				index++;
				size--;
				break ;
			}
			temp = temp->next;
		}
	}
}

int main ()
{
    list_t *tmp = NULL;

    list_t *node1 = new_node(6);
    list_t *node2 = new_node(6);
    
    add_node_end(&tmp,node1);
    add_node_end(&tmp,node2);
    min_value(tmp);
    printf("%d\n", tmp->index);
    printf("%d\n", tmp->link->index);
}