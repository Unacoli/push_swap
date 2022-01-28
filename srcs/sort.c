/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 01:09:40 by nargouse          #+#    #+#             */
/*   Updated: 2022/01/28 02:33:17 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	already_sorted(t_stack *a)
{
	size_t	i;

	i = 0;
	while (i < a->len)
	{
		if (a->tab[i] < a->tab[i + 1])
			return (0);
		i++;
	}
	return (1);
}

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
	if (a->len >= 6)
		sort_over_5(a, b);
	free_tab(a);
	free_tab(b);
}
