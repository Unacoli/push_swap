/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 20:09:40 by nargouse          #+#    #+#             */
/*   Updated: 2021/11/12 01:40:56 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	arg_error(int ac, char **av)
{
	int	i;
	int	j;

	if (ac < 2)
	{
		ft_putstr("Error nik les arg\n");
		exit(EXIT_FAILURE);
	}
	j = 1;
	while (j < ac)
	{
		i = 0;
		while (av[j][i])
		{
			if (!(av[j][i] >= '0' && av[j][i] <= '9'))
			{
				ft_putstr("Error lol les lettres\n");
				exit(EXIT_FAILURE);
			}
			i++;
		}
		j++;
	}
}

void	int_error(int ac, char **av)
{
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
				ft_putstr("Error DUPLICATE TA MERE\n");
				exit(EXIT_FAILURE);
			}
			j++;
		}
		i++;
	}
}
