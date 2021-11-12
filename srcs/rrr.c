/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:23:12 by nargouse          #+#    #+#             */
/*   Updated: 2021/11/12 00:44:55 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_stack *a, t_stack *b)
{
	int		tmp;
	size_t	i;

	tmp = a->tab[0];
	i = 0;
	while (i < a->len)
	{
		a->tab[i] = a->tab[i + 1];
		i++;
	}
	a->tab[a->len - 1] = tmp;
	tmp = b->tab[0];
	i = 0;
	while (i < b->len)
	{
		b->tab[i] = b->tab[i + 1];
		i++;
	}
	b->tab[b->len - 1] = tmp;
	ft_putstr("rrr\n");
}
