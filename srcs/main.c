/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:13:28 by nargouse          #+#    #+#             */
/*   Updated: 2021/11/11 20:04:45 by nargouse         ###   ########.fr       */
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

void	assign_tab(t_stack **a, t_stack **b, int ac, char **av)
{
	int	i;
	int	j;

	*a = malloc(sizeof(t_stack));
	*b = malloc(sizeof(t_stack));
	if (a == NULL || b == NULL)
	{
		//TODO: free stack
		ft_putstr("Error malloc fail lol\n");
		exit(EXIT_FAILURE);
	}
	(*a)->len = ac - 1;
	(*b)->len = ac - 1;
	(*a)->tab = malloc(sizeof(int) * (*a)->len);
	(*b)->tab = malloc(sizeof(int) * (*b)->len);
	if ((*a)->tab == NULL || (*b)->tab == NULL)
	{
		//TODO: free stack and tab
		ft_putstr("Error malloc fail lol\n");
		exit(EXIT_FAILURE);
	}
	i = 1;
	j = 0;
	while (i != ac)
		(*a)->tab[j++] = ft_atoi(av[i++]);
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

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	int	i = 0;

	arg_error(ac, av);
	assign_tab(&a, &b, ac, av);
	check_duplicate(a);
	while (i < ac - 1)
	{
		printf("%d %d\n", a->tab[i], b->tab[i]);
		i++;
	}
	sa(a);
	i = 0;
	while (i < ac - 1)
	{
		printf("%d %d\n", a->tab[i], b->tab[i]);
		i++;
	}
	printf("\n- -\n%c %c\n", 'a', 'b');
	exit(EXIT_SUCCESS);
}
