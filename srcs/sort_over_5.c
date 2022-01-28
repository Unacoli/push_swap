/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_over_5.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 02:56:21 by nargouse          #+#    #+#             */
/*   Updated: 2022/01/28 02:22:14 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_index(t_stack *a, int n)
{
	int	i;

	i = 0;
	while (i < (int)a->cap)
	{
		if (a->index[i] == n)
			return (i);
		i++;
	}
	return (-1);
}

int	get_max_bits(t_stack *a)
{
	int		max;
	int		max_bits;

	max = a->cap - 1;
	max_bits = 0;
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	sort_over_5(t_stack *a, t_stack *b)
{
	int		i;
	int		j;
	int		max_bits;

	i = 0;
	max_bits = get_max_bits(a);
	while (i < max_bits)
	{
		j = 0;
		while (j++ < (int)a->cap)
		{
			if (((get_index(a, a->tab[a->len - 1]) >> i) & 1) == 1)
				ra(a);
			else
				pb(a, b);
		}
		while (b->len != 0)
			pa(a, b);
		i++;
	}
}
