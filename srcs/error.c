/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 01:03:57 by nargouse          #+#    #+#             */
/*   Updated: 2021/11/18 19:06:17 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	quit(void)
{
	ft_putstr_fd("Error\n", STDERR_FILENO);
	exit(EXIT_FAILURE);
}

void	int_error(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (ft_atoi(av[i]) > INT_MAX || ft_atoi(av[i]) < INT_MIN)
			quit();
		i++;
	}
}

void	arg_error(int ac, char **av)
{
	int	i;
	int	j;

	j = 1;
	while (j < ac)
	{
		i = 0;
		while (av[j][i])
		{
			if (!((av[j][i] >= '0' && av[j][i] <= '9') || av[j][i] == '-'))
				quit();
			i++;
		}
		j++;
		if (i == 0)
			quit();
	}
	int_error(ac, av);
}

void	check_duplicate(t_stack *a)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < a->len)
	{
		j = i + 1;
		while (j < a->len)
		{
			if (a->tab[i] == a->tab[j])
			{
				free(a->tab);
				free(a);
				quit();
			}
			j++;
		}
		i++;
	}
}
