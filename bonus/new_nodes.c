/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_nodes.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 22:40:06 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/06/19 00:08:16 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "bonus.h"

list_t *new_node(int num)
{
    list_t *head;

    head = (list_t *)malloc(sizeof(list_t));
    if (!head)
        return NULL;
    head->data = num;
    head->link = NULL;
    return (head);
}

list_t	*last_n(list_t	*stack)
{
	while (stack->link)
		stack = stack->link;
	return (stack);
}

void	add_node_end(list_t **head, list_t *newnode)
{
	list_t	*temp;

	temp = *head;
	if (!*head)
	{
		*head = newnode;
		return ;
	}
	last_n(temp)->link = newnode;
}
int ft_strslen(char **str, char *del,int ac)
{
	int i = 1;
	int len = 0;
	while(i < ac)
	{
		len += ft_strlen(str[i]);
		if(i < ac - 1)
			len += ft_strlen(del);
		i++;
	}
	return(len);
}
