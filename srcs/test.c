/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 00:36:49 by nargouse          #+#    #+#             */
/*   Updated: 2021/11/12 01:15:05 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	test(t_stack *a, t_stack *b, int ac, char **av)
{
	int	i = ac - 2;

	sa(a);
	while (i >= 0)
	{
		printf("%d %d\n", a->tab[i], b->tab[i]);
		i--;
	}
	printf("- -\n%c %c\n\n", 'a', 'b');
	assign_tab(&a, &b, ac, av);
	sb(b);
	i = ac - 2;
	while (i >= 0)
	{
		printf("%d %d\n", a->tab[i], b->tab[i]);
		i--;
	}
	printf("- -\n%c %c\n\n", 'a', 'b');
	assign_tab(&a, &b, ac, av);
	ss(a, b);
	i = ac - 2;
	while (i >= 0)
	{
		printf("%d %d\n", a->tab[i], b->tab[i]);
		i--;
	}
	printf("- -\n%c %c\n\n", 'a', 'b');
	assign_tab(&a, &b, ac, av);
	pa(a, b);
	i = ac - 2;
	while (i >= 0)
	{
		printf("%d %d\n", a->tab[i], b->tab[i]);
		i--;
	}
	printf("- -\n%c %c\n\n", 'a', 'b');
	assign_tab(&a, &b, ac, av);
	pb(a, b);
	i = ac - 2;
	while (i >= 0)
	{
		printf("%d %d\n", a->tab[i], b->tab[i]);
		i--;
	}
	printf("- -\n%c %c\n\n", 'a', 'b');
	assign_tab(&a, &b, ac, av);
	ra(a);
	i = ac - 2;
	while (i >= 0)
	{
		printf("%d %d\n", a->tab[i], b->tab[i]);
		i--;
	}
	printf("- -\n%c %c\n\n", 'a', 'b');
	assign_tab(&a, &b, ac, av);
	rb(b);
	i = ac - 2;
	while (i >= 0)
	{
		printf("%d %d\n", a->tab[i], b->tab[i]);
		i--;
	}
	printf("- -\n%c %c\n\n", 'a', 'b');
	assign_tab(&a, &b, ac, av);
	rr(a, b);
	i = ac - 2;
	while (i >= 0)
	{
		printf("%d %d\n", a->tab[i], b->tab[i]);
		i--;
	}
	printf("- -\n%c %c\n\n", 'a', 'b');
	assign_tab(&a, &b, ac, av);
	rra(a);
	i = ac - 2;
	while (i >= 0)
	{
		printf("%d %d\n", a->tab[i], b->tab[i]);
		i--;
	}
	printf("- -\n%c %c\n\n", 'a', 'b');
	assign_tab(&a, &b, ac, av);
	rrb(b);
	i = ac - 2;
	while (i >= 0)
	{
		printf("%d %d\n", a->tab[i], b->tab[i]);
		i--;
	}
	printf("- -\n%c %c\n\n", 'a', 'b');
	assign_tab(&a, &b, ac, av);
	rrr(a, b);
	i = ac - 2;
	while (i >= 0)
	{
		printf("%d %d\n", a->tab[i], b->tab[i]);
		i--;
	}
	printf("- -\n%c %c\n\n", 'a', 'b');
}
