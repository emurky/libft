/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurky <emurky@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 20:16:35 by emurky            #+#    #+#             */
/*   Updated: 2021/09/14 17:34:49 by emurky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_static_isspace(int c)
{
	return (c == ' ' || c == '\n' || c == '\t'
		|| c == '\v' || c == '\f' || c == '\r');
}

static int	check_int_overflow(size_t number, const char *str, int minus)
{
	size_t	cutoff;
	int		cutlim;

	cutoff = INT_MAX / 10;
	cutlim = INT_MAX % 10 + (minus == -1);
	return (number > cutoff || (number == cutoff && *str - '0' > cutlim));
}

int	ft_atoi(const char *str)
{
	int		minus;
	size_t	number;

	number = 0;
	minus = 1;
	while (ft_static_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus = -1;
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		if (check_int_overflow(number, str, minus))
		{
			if (minus == 1)
				return (-1);
			else if (minus == -1)
				return (0);
		}
		number = number * 10 + *str++ - '0';
	}
	return ((int)(number * minus));
}
