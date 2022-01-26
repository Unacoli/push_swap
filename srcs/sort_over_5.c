/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_over_5.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 02:56:21 by nargouse          #+#    #+#             */
/*   Updated: 2022/01/27 00:58:48 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_max_bits(t_stack *a)
{
	t_stack	*grid;
	int		max;
	int		max_bits;

	grid = a;
	max = grid->index;
	max_bits = 0;
	while (grid)
	{
		if ((int)grid->index > max)
			max = grid->index;
		grid = grid->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	sort_over_5(t_stack *a, t_stack *b)
{
	t_stack	*grid;
	int		i;
	int		j;
	int		max_bits;

	i = 0;
	grid = a;
	max_bits = get_max_bits(a);
	while (i < max_bits)
	{
		j = 0;
		while (j++ < (int)grid->cap)
		{
			grid = a;
			if (((grid->index >> i) & 1) == 1)
				ra(a);
			else
				pb(a, b);
		}
		while (b->len != 0)
			pa(a, b);
		i++;
	}
}
