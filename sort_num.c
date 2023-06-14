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

void init_index(list_t *stack)
{
    list_t *tmp = stack;
    while(tmp != NULL)
    {
        tmp->index = -1;
        tmp = tmp->link;
    }
}

int min_data_(list_t *stack)
{
    list_t *tmp;
    int min;
    
    min = stack->data;
    tmp = stack->link;
    while(tmp != NULL)
    {
        if(tmp->index == -1 && tmp->data < min)
            min = tmp->data;
        tmp = tmp->link;
    }
    return (min);
}
void index_node(list_t *stack)
{
	int index = 0;
	int i;
	list_t *tmp;
	list_t *min_node;
	init_index(stack);

	while(index < stack_size(stack))
	{
		i = 0;
		int min = min_data_(stack);
		tmp = stack;
		min_node = NULL;
		while(i < stack_size(stack) && tmp)
		{
			if(tmp->data == min && tmp->index == -1)
			{
				min_node = tmp;
				break ;
			}
			tmp = tmp->link;
			i++;
		}
		if(min_node)
		{
			min_node->index = index;
			printf("Node w/ data %d index %d\n", min_node->data, min_node->index);
			index++;
		}
	}
}

// int main()
// {
// 	list_t *tmp = NULL;
// 	list_t *node1 = new_node(2);
// 	list_t *node2 = new_node(10);
// 	list_t *node3= new_node(-3);
// 	list_t *node4 = new_node(0);

// 	add_node_end(&tmp, node1);
// 	add_node_end(&tmp, node2);
// 	add_node_end(&tmp, node3);
// 	add_node_end(&tmp, node4);
// 	index_node(tmp);
// }











// int main ()
// {
//     list_t *tmp = NULL;

//     list_t *node1 = new_node(6);
//     list_t *node2 = new_node(6);
    
//     add_node_end(&tmp,node1);
//     add_node_end(&tmp,node2);
//     min_value(tmp);
//     printf("%d\n", tmp->index);
//     printf("%d\n", tmp->link->index);
// }