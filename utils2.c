/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 20:14:28 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/06/19 20:16:21 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

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

int ft_duplicate(char **str)
{
	int i;
	int j;

	i = 0;
	while(str[i])
	{
		j = i + 1;
		while(str[j])
		{
			if(ft_atoi (str[i]) == ft_atoi (str[j]))
				return (0);
			j++;
		}
		i++;
	}
	return(1);
}

int is_space(char c)
{
	if (c == '\t' || c == '\f' || c == '\v'
		|| c == '\n' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int is_empty(int ac, char **str)
{
	int i = 1;
	size_t j;
	while(i < ac)
	{
		j = 0;
		while(is_space(str[i][j] ))
			j++;
		if(str[i][j] == '\0')
		{
			ft_putstr("empty input\n");
			exit (1);
		}
		i++;
	}
	return(1);
}