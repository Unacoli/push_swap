/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:13:28 by nargouse          #+#    #+#             */
/*   Updated: 2021/11/11 17:22:33 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

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

void	assign_tab(int **a, int **b, int ac, char **av)
{
	int	i;
	int	j;

	*a = malloc(sizeof(int) * (ac - 1));
	*b = malloc(sizeof(int) * (ac - 1));
	if (*a == NULL || *b == NULL)
	{
		ft_free((void **)a);
		ft_free((void **)b);
		ft_putstr("Error malloc fail lol\n");
		exit(EXIT_FAILURE);
	}
	i = 1;
	j = 0;
	while (i != ac)
	{
		(*a)[j] = ft_atoi(av[i]);
		i++;
		j++;
	}
}

void	check_duplicate(int *a, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = i + 1;	
		while (j < len)
		{
			if (a[i] == a[j])
			{
				free(a);
				ft_putstr("Error DUPLICATE TA MERE\n");
				exit(EXIT_FAILURE);
			}
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int	*a;
	int	*b;
	int	i;

	arg_error(ac, av);
	assign_tab(&a, &b, ac, av);
	check_duplicate(a, ac - 1);
	while (i < ac - 1)
	{
		printf("%d %d\n", a[i], b[i]);
		i++;
	}
	printf("\n- -\n%c %c\n", 'a', 'b');
	exit(EXIT_SUCCESS);
}
