/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 01:03:57 by nargouse          #+#    #+#             */
/*   Updated: 2021/11/18 18:28:10 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	int_error(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (ft_atoi(av[i]) > INT_MAX || ft_atoi(av[i]) < INT_MIN)
		{
			ft_putstr_fd("Error\n", STDERR_FILENO);
			exit(EXIT_FAILURE);
		}
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
			{
				if (av[j][i] == '-' && !(av[j][i + 1] >= '0' && av[j][i + 1] <= '9'))
				{
					ft_putstr_fd("Error\n", STDERR_FILENO);
					exit(EXIT_FAILURE);
				}
				ft_putstr_fd("Error\n", STDERR_FILENO);
				exit(EXIT_FAILURE);
			}
			i++;
		}
		j++;
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
				ft_putstr_fd("Error\n", STDERR_FILENO);
				exit(EXIT_FAILURE);
			}
			j++;
		}
		i++;
	}
}
