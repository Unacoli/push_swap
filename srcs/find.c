/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 21:33:06 by nargouse          #+#    #+#             */
/*   Updated: 2021/11/18 21:34:39 by nargouse         ###   ########.fr       */
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

size_t	find_min_i(t_stack *a)
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

