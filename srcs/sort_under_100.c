/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_under_100.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 02:56:21 by nargouse          #+#    #+#             */
/*   Updated: 2021/11/19 01:16:19 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_under_100(t_stack *a, t_stack *b)
{
	int	hold_first;
	int	hold_second;
	int	min;
	int	max;
	int	chunk;
	int	chunk_min;
	int	chunk_max;

	min = find_min(a);
	max = find_max(a);
	test(a, b);
	chunk = 1;
	printf("%d %d\n---\n", min, max);
	while (chunk < 6)
	{
		chunk_min = min + ((chunk - 1) * (max - min) * 20/100);
		chunk_max = min + (chunk * (max - min) * 20/100);
		printf("%d %d %d\n", chunk, chunk_min, chunk_max);	
		chunk++;
		if (scan_a_top(a, chunk_min, chunk_max) == -1)
			continue ;
		else
			hold_first = scan_a_top(a, chunk_min, chunk_max);
		if (scan_a_bottom(a, chunk_min, chunk_max) != -1)
				hold_second = scan_a_top(a, chunk_min, chunk_max);
		if (hold_first < 99 - hold_second)
			while (a->tab[hold_first--] != a->tab[a->len - 1])
				rra(a);
		else
			while (a->tab[hold_second++] != a->tab[a->len - 1])
				ra(a);
	}
	exit(0);










	while (a->len != 0)
	{
		if (find_min_i(a) > a->len / 2)
		{
			while (a->tab[find_min_i(a)] != a->tab[a->len - 1])
				ra(a);
		}
		else
		{
			while (a->tab[find_min_i(a)] != a->tab[a->len - 1])
				rra(a);
		}
		pb(a, b);
	}
	while (b->len != 0)
		pa(a, b);
	test(a, b);
}
