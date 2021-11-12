/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:23:01 by nargouse          #+#    #+#             */
/*   Updated: 2021/11/12 00:45:27 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *a)
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
	ft_putstr("rra\n");
}
