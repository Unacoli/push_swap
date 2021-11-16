/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 01:09:40 by nargouse          #+#    #+#             */
/*   Updated: 2021/11/16 04:28:24 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	choose_algo(t_stack *a, t_stack *b)
{
	if (a->len == 2)
	{
		if (a->tab[0] < a->tab[1])
		{
			sa(a);
			return ;
		}
		else
			return ;
	}
	if (a->len == 3)
		sort_3(a);
	if (a->len == 4 || a->len == 5)
		sort_under_5(a, b);
	if (a->len >= 6 && a->len <= 99)
		sort_under_100(a, b);
	if (a->len >= 100 && a->len <= 499)
		sort_under_500(a, b);
	if (a->len >= 500)
		sort_over_500(a, b);
	free_tab(a);
	free_tab(b);
}
