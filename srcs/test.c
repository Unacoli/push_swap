/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 00:36:49 by nargouse          #+#    #+#             */
/*   Updated: 2022/01/27 23:22:31 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	test(t_stack *a, t_stack *b)
{
	int	i;

	i = (int)a->cap - 1;
	while (i >= 0)
	{
		fprintf(stderr, "[%d] ", i);
		if (i < (int)a->len)
			fprintf(stderr, "%d ", a->tab[i]);
		else
			fprintf(stderr, "x ");
		if (i < (int)b->len)
			fprintf(stderr, "%d\n", b->tab[i]);
		else
			fprintf(stderr, "x\n");
		i--;
	}
	fprintf(stderr, "    - -\n    %c %c\n\n", 'a', 'b');
}
