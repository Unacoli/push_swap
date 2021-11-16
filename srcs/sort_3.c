/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 01:55:56 by nargouse          #+#    #+#             */
/*   Updated: 2021/11/16 04:37:49 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_stack *a)
{
	if (a->tab[0] > a->tab[1] && a->tab[1] < a->tab[2] && a->tab[0] > a->tab[2])
		sa(a);
	if (a->tab[0] < a->tab[1] && a->tab[1] < a->tab[2] && a->tab[0] < a->tab[2])
	{
		sa(a);
		rra(a);
	}
	if (a->tab[0] > a->tab[1] && a->tab[1] < a->tab[2] && a->tab[0] < a->tab[2])
		ra(a);
	if (a->tab[0] < a->tab[1] && a->tab[1] > a->tab[2] && a->tab[0] > a->tab[2])
	{
		sa(a);
		ra(a);
	}
	if (a->tab[0] < a->tab[1] && a->tab[1] > a->tab[2] && a->tab[0] < a->tab[2])
		rra(a);
}
