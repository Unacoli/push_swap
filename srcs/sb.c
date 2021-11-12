/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:23:18 by nargouse          #+#    #+#             */
/*   Updated: 2021/11/11 23:22:10 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_stack *b)
{
	int	tmp;

	if (b->len == 0 || b->len == 1)
		return ;
	tmp = b->tab[b->len - 1];
	b->tab[b->len - 1] = b->tab[b->len - 2];
	b->tab[b->len - 2] = tmp;
	ft_putstr("sb\n");
}
