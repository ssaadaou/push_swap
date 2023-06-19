/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 00:58:50 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/06/19 00:13:02 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "bonus.h"

void parse(list_t **stack_a, list_t **stack_b, int ac, char **av)
{ 
    int i;
    char **str;
    char *join;
    
    (void)stack_b;
    join = NULL;
    is_empty(ac, av);
    join = mein_strjoin(ac,av," ");
    free(join);
    str = splitt(join, ' ');
    if (!valid(ac, str))
    {
        ft_putstr("no valid input\n");
        exit(1);
    }
    i = 0;
    while(str[i] != NULL)
    {
        add_node_end(stack_a , new_node(ft_atoi(str[i])));
        i++;
    }
    _free(str);
}

int main(int ac, char **av)
{
    list_t *stack_a;
    list_t *stack_b;
    char *operation;

    stack_a = NULL;
    stack_b = NULL;
    parse(&stack_a, &stack_b, ac, av);
    puts("here");
    printf("%s", get_next_line(0));
    while((operation = get_next_line(0)))
    {
        check_operation1(&stack_a , &stack_b, operation);
        free(operation);
    }
    if(is_sorted(stack_a) && stack_b == NULL)
        ft_putstr("OK\n");
    else
        ft_putstr("KO\n");
    free_stack(stack_a);
    free_stack(stack_b);
    return(0);
}