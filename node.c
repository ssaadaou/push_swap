/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 01:39:29 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/06/09 00:20:06 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
void add_node_end(list_t **head, list_t *new_node)
{
    list_t *tmp;

    if(*head == NULL)
        *head = new_node;
    else
    {
        tmp = *head;
        while(tmp->link != NULL)
            tmp = tmp->link;
        tmp->link = new_node;
    }   
}
void add_node_top(list_t **head, list_t *new_node)
{
    if(!new_node)
        return;
    new_node->link = *head;
    *head = new_node;
}
// int main()
// {
//     list_t *head = NULL;
//     list_t *node1 = new_node(12);
//     list_t *node2 = new_node(14);
//     add_node_top(&head , node1);
//     add_node_top(&head , node2);
//     while(head != NULL)
//     {
//         printf("%d\n", head->data);
//         head = head->link;
//     }
// }