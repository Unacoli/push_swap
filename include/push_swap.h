/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:55:30 by nargouse          #+#    #+#             */
/*   Updated: 2021/11/12 03:28:25 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"
# include <stdio.h>
# include <unistd.h>
# include <limits.h>

struct	s_stack
{
	int		*tab;
	size_t	len;
	size_t	cap;
};
typedef struct s_stack	t_stack;

void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	check_duplicate(t_stack *a);
void	arg_error(int ac, char **av);
void	assign_tab(t_stack **a, t_stack **b, int ac, char **av);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a,t_stack *b);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);
void	test(t_stack *a, t_stack *b, int ac, char **av);
void	free_stack(t_stack *stack, t_stack *stack2);
void	free_tab(t_stack *stack);

#endif
