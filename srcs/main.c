/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:13:28 by nargouse          #+#    #+#             */
/*   Updated: 2021/11/18 14:18:23 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	arg_error(ac, av);
	assign_tab(&a, &b, ac, av);
	check_duplicate(a);
	if (already_sorted(a) == 1)
	{
		free_tab(a);
		free_tab(b);
		free_stack(a, b);
		exit(EXIT_SUCCESS);
	}
	choose_algo(a, b);
	free_stack(a, b);
	exit(EXIT_SUCCESS);
}
