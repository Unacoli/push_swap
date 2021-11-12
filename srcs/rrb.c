/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:23:05 by nargouse          #+#    #+#             */
/*   Updated: 2021/11/12 00:45:16 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_stack *b)
{
	int		tmp;
	size_t	i;

	tmp = b->tab[0];
	i = 0;
	while (i < b->len)
	{
		b->tab[i] = b->tab[i + 1];
		i++;
	}
	b->tab[b->len - 1] = tmp;
	ft_putstr("rrb\n");
}
