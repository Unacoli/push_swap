/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_under_100.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 02:56:21 by nargouse          #+#    #+#             */
/*   Updated: 2021/11/19 05:50:13 by nargouse         ###   ########.fr       */
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
	printf("min: %d max: %d\n---\n", min, max);
	while (chunk < 6)
	{
		chunk_min = min + ((chunk - 1) * (max - min) * 20/100);
		chunk_max = min + (chunk * (max - min) * 20/100);
		while (scan_a_top(a, chunk_min, chunk_max) != -1)
		{
			hold_first = scan_a_top(a, chunk_min, chunk_max);
			hold_second = scan_a_bottom(a, chunk_min, chunk_max);
			if ((size_t)hold_second < a->cap - hold_first)
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
				printf("hd %d %d %d\n", hold_second, a->tab[hold_second], a->tab[a->len - 1]);
				test(a, b);
			}
			else
			{
				while ((size_t)hold_first < a->len - 1)
				{
					ra(a);
					hold_first++;
				}
				printf("hf %d %d %d\n", hold_first, a->tab[hold_first], a->tab[a->len - 1]);
				test(a, b);
			}

			pb(a, b);
		}
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
	test(a, b);
}
