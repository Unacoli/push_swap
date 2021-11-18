/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 13:17:41 by nargouse          #+#    #+#             */
/*   Updated: 2021/11/18 18:45:45 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atoi(const char *str)
{
	long	n;
	int		s;
	int		i;

	n = 0;
	i = 0;
	while ((str[i] == ' ' || str[i] == '\n' || str[i] == '\r' || str[i] == '\t'
			|| str[i] == '\v' || str[i] == '\f') && str[i] != '\0')
		i++;
	s = 1;
	if (str[i] == '-')
	{
		s = -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (LONG_MIN);
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return (n * s);
}
