/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 03:04:27 by nargouse          #+#    #+#             */
/*   Updated: 2021/11/12 03:29:02 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack *stack, t_stack *stack2)
{
	free(stack);
	free(stack2);
	stack = NULL;
	stack2 = NULL;
}

void	free_tab(t_stack *stack)
{
	free(stack->tab);
	stack->tab = NULL;
	stack->len = 0;
	stack->cap = 0;
}
