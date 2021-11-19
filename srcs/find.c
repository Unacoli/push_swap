/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 21:33:06 by nargouse          #+#    #+#             */
/*   Updated: 2021/11/19 01:02:33 by nargouse         ###   ########.fr       */
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

int	scan_a_top(t_stack *a, int chunk_min, int chunk_max)
{
	size_t	i;

	i = a->len - 1;
	while ((int)i >= 0)
	{
		if (a->tab[i] >= chunk_min && a->tab[i] <= chunk_max)
			return (i);
		i--;
	}
	return (-1);
}

int	scan_a_bottom(t_stack *a, int chunk_min, int chunk_max)
{
	size_t	i;

	i = 0;
	while (i < a->len)
	{
		if (a->tab[i] >= chunk_min && a->tab[i] <= chunk_max)
			return (i);
		i++;
	}
	return (-1);
}
