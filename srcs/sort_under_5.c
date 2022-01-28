/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_under_5.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 02:05:29 by nargouse          #+#    #+#             */
/*   Updated: 2022/01/28 14:16:57 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	find_min_i(t_stack *a)
{
	size_t	i;
	size_t	min_i;
	int		min;

	i = 0;
	min = a->tab[0];
	min_i = 0;
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

void	sort_under_5(t_stack *a, t_stack *b)
{
	while (a->len > 3)
	{
		if (find_min_i(a) > a->len / 2)
		{
			while (a->tab[find_min_i(a)] != a->tab[a->len - 1])
				ra(a);
		}
		else
		{
			while (a->tab[find_min_i(a)] != a->tab[a->len - 1])
				rra(a);
		}
		pb(a, b);
	}
	sort_3(a);
	while (b->len > 0)
		pa(a, b);
}
