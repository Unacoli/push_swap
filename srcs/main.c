/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:13:28 by nargouse          #+#    #+#             */
/*   Updated: 2022/01/28 02:07:28 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max_bits(t_stack *a);

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	if (ac < 2)
		exit(EXIT_SUCCESS);
	arg_error(ac, av);
	if (ac == 2)
		exit(EXIT_SUCCESS);
	assign_tab(&a, &b, ac, av);
	check_duplicate(a, b);
	if (already_sorted(a) == 1)
	{
		free_tab(a);
		free_tab(b);
		free_stack(a);
		free_stack(b);
		exit(EXIT_SUCCESS);
	}
	else
	{
		assign_index(a);
		//printf("%d\n", get_max_bits(a));
		//exit(0);
		choose_algo(a, b);
		free_stack(a);
		free_stack(b);
		exit(EXIT_SUCCESS);
	}
}
