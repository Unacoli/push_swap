/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 00:36:49 by nargouse          #+#    #+#             */
/*   Updated: 2021/11/16 17:25:29 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	test(t_stack *a, t_stack *b)
{
	int	i;

	i = a->len - 1;
	while (i >= 0)
	{
		fprintf(stderr, "%d %d\n", a->tab[i], b->tab[i]);
		i--;
	}
	fprintf(stderr, "- -\n%c %c\n\n", 'a', 'b');
}
