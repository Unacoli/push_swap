/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 02:32:42 by nargouse          #+#    #+#             */
/*   Updated: 2022/01/27 00:58:15 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	*get_next_min(t_stack **a)
{

}

void	assign_index(t_stack **a)
{
	int		index;

	index = 0;
	while (index < (int)(*a)->cap)
	{
		(*a)->index = index++;
	}
}
