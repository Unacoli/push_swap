/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_under_100.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 02:56:21 by nargouse          #+#    #+#             */
/*   Updated: 2021/11/18 17:26:13 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	find_min_i(t_stack *a)
{
	size_t	i;
	size_t	min_i;
	int		min;

	i = 0;
	min = a->tab[0];
	while (i < a->len)
	{
		if (a->tab[i] < min)
		{
			min = a->tab[i];
			min_i = i;
		}
		i++;
	}
	return (min_i);
}

int	find_min(t_stack *a)
{
	size_t	i;
	int		min;

	i = 0;
	min = a->tab[0];
	while (i < a->len)
	{
		if (a->tab[i] < min)
			min = a->tab[i];
		i++;
	}
	return (min);
}

void	sort_under_100(t_stack *a, t_stack *b)
{
//	int	hold_first;
//	int	hold_second;
	int	min;

	test(a, b);
	while (a->len != 0)
	{
		min = find_min(a);
		if (find_min_i(a) > a->len / 2)
		{
			while (min != a->tab[a->len - 1])
				ra(a);
		}
		else
		{
			while (min != a->tab[a->len - 1])
				rra(a);
		}
		pb(a, b);
	}
	while (b->len != 0)
		pa(a, b);
	test(a, b);
}
