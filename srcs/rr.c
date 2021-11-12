/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:23:08 by nargouse          #+#    #+#             */
/*   Updated: 2021/11/12 00:19:46 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_stack *a, t_stack *b)
{
	int	tmp;
	int	i;

	tmp = a->tab[a->len - 1];
	i = a->len - 1;
	while (i > 0)
	{
		a->tab[i] = a->tab[i - 1];
		i--;
	}
	a->tab[0] = tmp;
	tmp = b->tab[b->len - 1];
	i = b->len - 1;
	while (i > 0)
	{
		b->tab[i] = b->tab[i - 1];
		i--;
	}
	b->tab[0] = tmp;
	ft_putstr("rr\n");
}
