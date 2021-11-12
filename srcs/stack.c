/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 20:13:43 by nargouse          #+#    #+#             */
/*   Updated: 2021/11/12 01:11:04 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stack(t_stack **stack, int ac)
{
	*stack = malloc(sizeof(t_stack));
	if (stack == NULL)
	{
		//TODO: free stack
		ft_putstr("Error\n");
		exit(EXIT_FAILURE);
	}
	(*stack)->cap = ac - 1;
	(*stack)->tab = malloc(sizeof(int) * (*stack)->cap);
	if ((*stack)->tab == NULL)
	{
		//TODO: free stack and tab
		ft_putstr("Error\n");
		exit(EXIT_FAILURE);
	}
}

void	assign_tab(t_stack **a, t_stack **b, int ac, char **av)
{
	int	i;
	int	j;

	init_stack(a, ac);
	init_stack(b, ac);
	(*a)->len = ac - 1;
	(*b)->len = 0;
	i = 1;
	j = 0;
	while (i != ac)
		(*a)->tab[j++] = ft_atoi(av[i++]);
}
