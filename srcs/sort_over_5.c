/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_over_5.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 02:56:21 by nargouse          #+#    #+#             */
/*   Updated: 2022/01/26 02:18:12 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_prev(t_stack *a, int num)
{
	int	i;

	i = a->len - 1;
	while (i >= 0)
	{
		if (a->tab[i] < num)
			return (i);
		i--;
	}
	return (0);
}

int	find_next(t_stack *b, int num)
{
	size_t	i;

	i = 0;
	while (i < b->len)
	{
		if (b->tab[i] > num)
			return (i);
		i++;
	}
	return (i);
}

size_t	find_i(t_stack *a, int num)
{
	size_t	i;

	i = 0;
	while (i < a->len)
	{
		if (a->tab[i] == num)
			return (i);
		i++;
	}
	return (i);
}

void	sort_over_5(t_stack *a, t_stack *b)
{
	int		top_a;
	int		i;
	int		j;

	i = 0;
	top_a = a->tab[a->len - 1]

