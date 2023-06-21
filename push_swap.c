/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 03:38:38 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/06/20 16:24:01 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

// void	leaks()
// {
// 	system("leaks push_swap");
// }

int main(int ac, char **av)
{
    list_t *stack_a;
    list_t *stack_b;

    // atexit(leaks);
    stack_a = NULL;
    stack_b = NULL;
    if(ac == 1)
        return 0;
    parse(&stack_a, &stack_b, ac, av);
    index_node(stack_a);
    sorting(stack_a, stack_b);

    return 0;
}
