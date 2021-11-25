/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 20:16:35 by emurky            #+#    #+#             */
/*   Updated: 2020/11/02 20:16:37 by emurky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_overflow(int minus)
{
	if (minus == 1)
		return (INT_MAX);
	else
		return (INT_MIN);
}

int	ft_atoi(const char *str)
{
	int		minus;
	size_t	number;

	number = 0;
	minus = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus = -1;
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		if (number > INT_MAX / 10
			|| (number == INT_MAX / 10 && *str - '0' > INT_MAX % 10))
			return (int_overflow(minus));
		number = number * 10 + *str++ - '0';
	}
	return ((int)(number * minus));
}
