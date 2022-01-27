/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 02:32:42 by nargouse          #+#    #+#             */
/*   Updated: 2022/01/27 16:48:03 by nargouse         ###   ########.fr       */
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
	min->len = 0;
	if (grid)
	{
		while (grid)
		{
			if (((int)grid->index == -1) && (!verif_min || (int)(grid->tab[grid->len]) < (int)(min->tab[min->len])))
			{
				min = grid;
				verif_min = 1;
				min->len++;
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
		grid->index = index++;
		grid = get_next_min(a);
	}
}
