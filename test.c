/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 21:16:05 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/06/15 20:00:04 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 21:16:05 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/06/11 21:16:05 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	top_half(t_list	**stack_a, t_list	**stack_b, int chunk)
{
	push(stack_a, stack_b, 1);
	if ((*stack_a) != NULL && (*stack_a)->index > chunk)
		rr(stack_a, stack_b);
	else
		rotate_stack(stack_b, 0);
}

void	sort_100numbers(t_list	**stack_a, t_list	**stack_b, int size)
{
	int	chunk;
	int	nextchunk;
	int	i;

	i = 0;
	chunk = size / 5;
	nextchunk = chunk;
	while (*stack_a)
	{
		while ((*stack_a) != NULL && (*stack_a)->index > chunk)
			rotate_stack(stack_a, 1);
		i++;
		if ((*stack_a)->index > (chunk - (nextchunk / 2)))
			push(stack_a, stack_b, 1);
		else if ((*stack_a)->index <= (chunk - (nextchunk / 2)))
		{
			top_half(stack_a, stack_b, chunk);
		}
		if (i == chunk)
			chunk += nextchunk;
	}
	push_back_to_a(stack_b, stack_a);
}
