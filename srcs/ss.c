/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:23:21 by nargouse          #+#    #+#             */
/*   Updated: 2021/11/12 00:52:57 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_stack *a, t_stack *b)
{
	int	tmp;

	if (a->len >= 2)
	{
		tmp = a->tab[a->len - 1];
		a->tab[a->len - 1] = a->tab[a->len - 2];
		a->tab[a->len - 2] = tmp;
	}
	if (b->len >= 2)
	{
		tmp = b->tab[b->len - 1];
		b->tab[b->len - 1] = b->tab[b->len - 2];
		b->tab[b->len - 2] = tmp;
	}
	ft_putstr("ss\n");
}
