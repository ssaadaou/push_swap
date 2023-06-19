/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 22:34:19 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/06/18 22:39:22 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "bonus.h"

void free_stack(list_t *stack)
{
    list_t *tmp;
    while(stack)
    {
        tmp = stack;
        stack = stack->link;
        free(tmp);
    }
}


int is_digit(int c)
{
    if(c >= '0' && c <= '9')
        return (1);
    return (0);
}
int ft_integer(char *s)
{
    int i = 0;
    
    if(s[0] == '-' || s[0] == '+')
            i++;
    while(s[i])
    {
        if(!is_digit(s[i]))
            return (0);
        i++;
    }
    return (1);
}
int valid(int ac, char **str)
{
    int i ;
    
    if(ac == 1)
        return 0;
    i = 0;
    while(str[i] != NULL)
    {
        if(ft_integer(str[i]) == 0 || ft_duplicate(str) == 0)
        {
            _free(str);
            return (0);
        }
        i++;
    }
    return (1);
}
