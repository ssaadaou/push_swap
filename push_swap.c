/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 03:38:38 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/06/19 00:18:38 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

int main(int ac, char **av)
{
    list_t *stack_a;
    list_t *stack_b;

    stack_a = NULL;
    stack_b = NULL;
    parse(&stack_a, &stack_b, ac, av);
    index_node(stack_a);
    // printf("Node w/ data %d index %d\n", stack_a->data, stack_a->index);
    sorting(stack_a, stack_b);
    return 0;
}
