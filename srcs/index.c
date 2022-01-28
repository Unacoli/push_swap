/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 02:32:42 by nargouse          #+#    #+#             */
/*   Updated: 2022/01/28 02:32:57 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	assign_index(t_stack *a)
{
	size_t	i;
	size_t	j;
	int		tmp;

	i = 0;
	while (i < a->cap - 1)
	{
		j = 0;
		while (j < a->cap - i - 1)
		{
			if (a->index[j] > a->index[j + 1])
			{
				tmp = a->index[j];
				a->index[j] = a->index[j + 1];
				a->index[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}
