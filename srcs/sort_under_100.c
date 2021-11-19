/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_under_100.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 02:56:21 by nargouse          #+#    #+#             */
/*   Updated: 2021/11/19 04:27:31 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	find_max_i(t_stack *b)
{
	size_t	i;
	size_t	max_i;
	int		max;

	i = 0;
	max = b->tab[0];
	max_i = 0;
	while (i < b->len)
	{
		if (b->tab[i] > max)
		{
			max = b->tab[i];
			max_i = i;
		}
		i++;
	}
	return (max_i);
}

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
		while (scan_a_top(a, chunk_min, chunk_max) != -1 || a->len != 0)
		{
			hold_first = scan_a_top(a, chunk_min, chunk_max);
			hold_second = scan_a_top(a, chunk_min, chunk_max);
			if ((size_t)hold_first < a->cap - hold_second)
			{
				while (a->tab[hold_first--] != a->tab[a->len - 1])
					rra(a);
//				if (b->len == 0)
//				if (a->tab[a->len - 1] > find_max(b))
//				{
//					while (b->tab[find_min_i(b)] != b->tab[0])
//						rb(b);
//					pb(a, b);
//				}
//				else if (a->tab[a->len - 1] < find_min(b))
//				{
//					pb(a, b);
//					while (b->tab[find_min_i(b)] != b->tab[0])
//						rb(b);
//				}
//				else
//				{
//					while (!(a->tab[a->len - 1] > b->tab[0] && a->tab[a->len - 1] < b->tab[b->len - 1]))
//					{	
//						rb(b);
//						pb(a, b);
//					}
//				}
			}
			else
			{
				while (a->tab[hold_second++] != a->tab[a->len - 1])
					ra(a);
//				printf("ewo from en dehors de ra\n");
//				if (b->len == 0)
//				else if (a->tab[a->len - 1] > find_max(b))
//				{
//					while (b->tab[find_min_i(b)] != b->tab[0])
//						rb(b);
//					pb(a, b);
//				}
//				else if (a->tab[a->len - 1] < find_min(b))
//				{
//					pb(a, b);
//					while (b->tab[find_min_i(b)] != b->tab[0])
//						rb(b);
//				}
//				else
//				{
//					while (!(a->tab[a->len - 1] > b->tab[0] && a->tab[a->len - 1] < b->tab[b->len - 1]))
//					{	
//						rb(b);
//						pb(a, b);
//					}
//				}
			}
			if (a->tab[a->len - 1] > b->tab[a->len - 1])
				pb(a, b);
			else
			{
				pb(a, b);
				rb(b);
			}
//			if (find_max_i(b) > b->len / 2)
//			{
//				while (b->tab[find_max_i(b)] != b->tab[b->len - 1])
//					rb(b);
//			}
//			else
//			{
//				while (b->tab[find_max_i(b)] != b->tab[b->len - 1])
//					rrb(b);
//			}
		}
		printf("%d %d %d\n", chunk, chunk_min, chunk_max);	
		chunk++;
	}
	while (b->len > 0)
	{
		if (find_max_i(b) > b->len / 2)
		{
			while (b->tab[find_max_i(b)] != b->tab[b->len - 1])
				rb(b);
		}
		else
		{
			while (b->tab[find_min_i(b)] != b->tab[b->len - 1])
				rrb(b);
		}
		pa(a, b);
	}
}
