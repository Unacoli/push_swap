/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:23:15 by nargouse          #+#    #+#             */
/*   Updated: 2021/11/16 03:11:41 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *a)
{
	int	tmp;

	if (a->len == 0 || a->len == 1)
		return ;
	tmp = a->tab[a->len - 1];
	a->tab[a->len - 1] = a->tab[a->len - 2];
	a->tab[a->len - 2] = tmp;
	ft_putstr("sa\n");
}
