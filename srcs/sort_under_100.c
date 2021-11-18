/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_under_100.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 02:56:21 by nargouse          #+#    #+#             */
/*   Updated: 2021/11/18 22:47:41 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_under_100(t_stack *a, t_stack *b)
{
//	int	hold_first;
//	int	hold_second;

	test(a, b);
	while (a->len != 0)
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
	while (b->len != 0)
		pa(a, b);
	test(a, b);
}
