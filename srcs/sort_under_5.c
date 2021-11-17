/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_under_5.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 02:05:29 by nargouse          #+#    #+#             */
/*   Updated: 2021/11/17 14:41:13 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_easy_4(t_stack *a, t_stack *b)
{
	if (b->tab[0] < a->tab[0])
	{
		pa(a, b);
		test(a, b);
	}
	else if (b->tab[0] > a->tab[a->len - 1])
	{
		pa(a, b);
		ra(a);
		test(a, b);
	}
	else if (b->tab[0] > a->tab[0] && b->tab[0] < a->tab[1])
	{
		ra(a);
		pa(a, b);
		rra(a);
		test(a, b);
	}
	return ;
}

void	sort_4(t_stack *a, t_stack *b)
{
	if (a->len == 4)
	{
		pb(a, b);
		if (!((a->tab[0] < a->tab[1]) && (a->tab[1] < a->tab[2])))
			sort_3(a);
		if (b->tab[0] < a->tab[0] || b->tab[0] > a->tab[a->len - 1]
			|| (b->tab[0] > a->tab[0] && b->tab[0] < a->tab[1]))
			sort_easy_4(a, b);
		else if (b->tab[0] > a->tab[0] && b->tab[0] > a->tab[1])
		{
			rra(a);
			pa(a, b);
			ra(a);
			ra(a);
			test(a, b);
		}
		return ;
	}
	else
		sort_under_5(a, b);
	return ;
}

void	sort_under_5(t_stack *a, t_stack *b)
{
	if (a->tab[0] > a->tab[1])
		sa(a);
	pb(a, b);
	test(a, b);
	sort_4(a, b);
	test(a, b);
	if (b->tab[0] < a->tab[0] || b->tab[0] > a->tab[a->len - 1] || (b->tab[0] > a->tab[0] && b->tab[0] < a->tab[1]))
		sort_easy_4(a, b);
	else if (b->tab[0] < a->tab[0] && b->tab[0] > a->tab[1] && b->tab[0] > a->tab[2])
	{
		rra(a);
		test(a, b);
		pa(a, b);
		test(a, b);
		ra(a);
		test(a, b);
		ra(a);
		test(a, b);
	}
	else if (b->tab[0] > a->tab[0] && b->tab[0] > a->tab[1]
		&& b->tab[0] < a->tab[2])
	{
		rra(a);
		test(a, b);
		rra(a);
		test(a, b);
		pa(a, b);
		test(a, b);
		rra(a);
		test(a, b);
		rra(a);
		test(a, b);
	}
	return ;
}
