/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 02:32:42 by nargouse          #+#    #+#             */
/*   Updated: 2022/01/26 17:42:58 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	*get_next_min(t_stack **a)
{
	t_stack	*grid;
	t_stack	*min;
	int		verif_min;

	min = NULL;
	verif_min = 0;
	grid = *a;
	if (grid)
	{
		while (grid)
		{
			if (((int)(*a)->index == -1)
				&& (!verif_min || grid->tab[(*a)->len] < min->tab[0]))
			{
				min = grid;
				verif_min = 1;
			}
			grid = grid->next;
		}
	}
	return (min);
}

void	assign_index(t_stack **a)
{
	t_stack	*grid;
	int		index;

	index = 0;
	grid = get_next_min(a);
	while (grid)
	{
		(*a)->index = index++;
		grid = get_next_min(a);
	}
}
