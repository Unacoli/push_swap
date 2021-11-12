/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 13:17:41 by nargouse          #+#    #+#             */
/*   Updated: 2021/11/12 01:23:01 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_if(int s)
{
	if (s > 0)
		return (-1);
	else
		return (0);
}

long	ft_atoi(const char *str)
{
	unsigned long	n;
	int				s;
	int				i;

	n = 0;
	i = 0;
	while ((str[i] == ' ' || str[i] == '\n' || str[i] == '\r' || str[i] == '\t'
			|| str[i] == '\v' || str[i] == '\f') && str[i] != '\0')
		i++;
	s = 1;
	if (str[i] == '-')
		s = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] <= '9' && str[i] >= '0')
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	if (n > LONG_MAX)
		return (ft_if(s));
	return (n * s);
}
