/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:55:30 by nargouse          #+#    #+#             */
/*   Updated: 2022/01/26 02:32:32 by nargouse         ###   ########.fr       */
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
	size_t	index;
	size_t	len;
	size_t	cap;
};
typedef struct s_stack	t_stack;

void	test(t_stack *a, t_stack *b);

void	check_duplicate(t_stack *a, t_stack *b);
void	arg_error(int ac, char **av);
void	assign_tab(t_stack **a, t_stack **b, int ac, char **av);
void	assign_index(t_stack **a);
int		already_sorted(t_stack *a);
void	quit(t_stack *a, t_stack *b);

void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a,t_stack *b);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);

void	choose_algo(t_stack *a, t_stack *b);
int		find_max(t_stack *stack);
int		find_min(t_stack *stack);
size_t	find_min_i(t_stack *a);
int		scan_a_top(t_stack *stack, int min, int max);
int		scan_a_bottom(t_stack *stack, int min, int max);
void	sort_3(t_stack *a);
void	sort_under_5(t_stack *a, t_stack *b);
void	sort_over_5(t_stack *a, t_stack *b);

void	free_stack(t_stack *stack);
void	free_tab(t_stack *stack);

#endif
