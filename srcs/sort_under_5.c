/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_under_5.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 02:05:29 by nargouse          #+#    #+#             */
/*   Updated: 2021/11/16 04:58:07 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_under_5(t_stack *a, t_stack *b)
{
	while (a->len > 3)
		pb(a, b);
	sort_3(a);
	while (b->len > 0)
	{
		if (b->tab[1] < b->tab[0])
			sb(b);
		pa(a, b);
		if (a->tab[0] < a->tab[a->len - 1])
			ra(a);
	}
}
