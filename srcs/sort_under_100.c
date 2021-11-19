/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_under_100.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 02:56:21 by nargouse          #+#    #+#             */
/*   Updated: 2021/11/19 08:56:40 by nargouse         ###   ########.fr       */
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
	//printf("min: %d max: %d\n---\n", min, max);
	while (chunk < 6)
	{
		chunk_min = min + ((chunk - 1) * (max - min) * 20/100) + (chunk == 1 ? 0 : 1);
		chunk_max = min + (chunk * (max - min) * 20/100);
		//printf("CHUNK chunk: %d chunk_min: %d chunk_max: %d\n", chunk, chunk_min, chunk_max);
		while (scan_a_top(a, chunk_min, chunk_max) != -1)
		{
			hold_first = scan_a_top(a, chunk_min, chunk_max);
			hold_second = scan_a_bottom(a, chunk_min, chunk_max);
			if ((size_t)hold_second >= a->cap - hold_first - 1)
			{
				while ((size_t)hold_first < a->len - 1)
				{
					ra(a);
					hold_first++;
				}
				//printf("hold_first %d %d %d\n", hold_first, a->tab[hold_first], a->tab[a->len - 1]);
				//test(a, b);
			}
			else
			{
				while (hold_second >= 0)
				{
					rra(a);
					hold_second--;
					if (hold_second == -1)
					{
						hold_second = a->len - 1;
						break ;
					}
				}
				//printf("hold_second %d %d %d\n", hold_second, a->tab[hold_second], a->tab[a->len - 1]);
				//test(a, b);
			}
			

			if (a->tab[a->len - 1] > find_max(b))
			{
				while (b->tab[find_min_i(b)] != b->tab[0])
				{
					//if (b->tab[b->len - 1] != a->tab[a->len - 1] -1)
					rb(b);
				}
				pb(a, b);
				//test(a,b);
				//printf("if\n");
			}
			else if (a->tab[a->len - 1] < find_min(b))
			{
				while (b->tab[find_min_i(b)] != b->tab[0])
					rrb(b);
				pb(a, b);
				//test(a,b);
				//printf("else if\n");
				rrb(b);
			}
			else
			{
				int next = b->tab[find_next(b, a->tab[a->len - 1])];
				int ko = 0;
				while (find_i(b, next) != 0)
				{
					//printf("find_next of %d is index %d (%d)\n", a->tab[a->len - 1], next, b->tab[next]);
					rb(b);
					//test(a,b);
					ko++;
				}
				//printf("=-=-=-=-=-= %d %d %d\n", a->tab[a->len - 1], find_prev(b, a->tab[a->len - 1]), b->tab[find_prev(b, a->tab[a->len - 1])]);
				//test(a,b);
				pb(a, b);
				//test(a,b);
				//printf("else\n");
				while (ko > 0)
				{
					rrb(b);
					ko--;
				}
			}
			//printf("----------------\n\n");

		}
		//`exit(0);
		chunk++;
	}
	//exit(0);




	//while (a->len != 0)
	//{
	//	if (find_min_i(a) > a->len / 2)
	//	{
	//		while (a->tab[find_min_i(a)] != a->tab[a->len - 1])
	//			ra(a);
	//	}
	//	else
	//	{
	//		while (a->tab[find_min_i(a)] != a->tab[a->len - 1])
	//			rra(a);
	//	}
	//	pb(a, b);
	//}
	//while (b->len != 0)
	//	pa(a, b);
	//test(a, b);


	while (b->len > 0)
		pa(a, b);
	//pb(a, b);
	//pb(a, b);
	//pb(a, b);
	//sb(b);
	//pa(a, b);
	//pa(a, b);
	//pa(a, b);
}
