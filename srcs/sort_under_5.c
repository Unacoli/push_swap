/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_under_5.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 02:05:29 by nargouse          #+#    #+#             */
/*   Updated: 2021/11/17 17:09:19 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_max(t_stack *a)
{
	size_t	i;
	int		max;

	i = 0;
	max = a->tab[0];
	while (i < a->len)
	{
		if (a->tab[i] > max)
			max = a->tab[i];
		i++;
	}
	return (max);
}

void	sort_under_5(t_stack *a, t_stack *b)
{
	while (a->len > 3)
		pb(a, b);
	sort_3(a);
	if (b->tab[1] < b->tab[0])
		sb(b);
	while (b->len > 0)
	{
		if (find_max(a) > b->tab[b->len - 1])
		{	
			while (b->tab[b->len - 1] > a->tab[a->len - 1])
				ra(a);
		}
		pa(a, b);
		while (a->tab[0] < a->tab[a->len - 1])
			ra(a);
	}
	test(a, b);
}
