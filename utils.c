/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 01:13:19 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/06/19 20:16:15 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *buff)
{
    while (*buff)
	{
		ft_putchar(*buff);
		buff++;
	}
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int ft_atoi(char *s)
{
	int	i;
	int	res;
	int sign;

	i = 0;
	res = 0;
	sign = 1;
	while ((s[i] == ' ') || (s[i] >= 9 && s[i] <= 13))
		i++;
	if (s[i] == '0')
	{
		while(s[i] == '0')
			i++;
	}
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while (s[i] && s[i] >= '0' && s[i] <= '9')
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	return (res * sign);
}

char	*mein_strjoin(int ac, char **str, char *del)
{
	int		i;
	int		j;
	int 	x;
	int		len;
	char	*tmp;

	i = 1;
	x = 0;
	len = ft_strslen(str, del, ac);
	tmp = malloc(sizeof(char) * (len + 1));
	if(!tmp)
		return(NULL);
	while(i < ac)
	{	
		j= 0 ;
		while(str[i][j] != '\0')
			tmp[x++] = str[i][j++];
		if(i < ac - 1)
		{
			j = 0;
			while (del[j] != '\0')
				tmp[x++] = del[j++];
		}
		i++;
	}
	return(tmp);	
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
