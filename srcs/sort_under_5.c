/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_under_5.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 02:05:29 by nargouse          #+#    #+#             */
/*   Updated: 2021/11/16 17:23:15 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_under_5(t_stack *a, t_stack *b)
{
	while (a->len > 3)
	{
		pb(a, b);
		test(a, b);
	}
	sort_3(a);
	test(a, b);
	while (b->len > 0)
	{
		if (b->tab[1] > b->tab[0])
		{
			sb(b);
			test(a, b);
		}
		pa(a, b);
		test(a, b);
		if (a->tab[0] < a->tab[a->len - 1])
		{
			ra(a);
			test(a, b);
		}
	}
}
