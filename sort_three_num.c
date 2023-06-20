/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_num.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 01:39:08 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/06/20 15:36:55 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

void sort_three(list_t **stack)
{
    list_t **tmp = stack;
    if((*tmp)->link->data == min_data(*tmp) )
    {
        if((*tmp)->link->link->data == max_data(*tmp))
            sa(tmp);
        else if((*tmp)->data == max_data(*tmp))
            ra(tmp);
    }
    else if((*tmp)->link->link->data == min_data(*tmp))
    {
        if((*tmp)->data == max_data(*tmp))
        {
            sa(tmp);
            rra(tmp);
        }
        else
            rra(tmp);
    }
    else
    {
        sa(tmp);
        ra(tmp);
    }
}
