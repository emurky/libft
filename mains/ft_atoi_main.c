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

#include <stdio.h>
#include <stdlib.h>

static int	ft_isspace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t'
			|| c == '\v' || c == '\f' || c == '\r');
}

static int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}

int			ft_atoi(const char *str)
{
	int minus;
	int number;

	number = 0;
	minus = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
	{
		minus = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str && ft_isdigit(*str))
	{
		number = number * 10 + *str - '0';
		str++;
	}
	return (number * minus);
}

int			main(void)
{
	char *num = "+47+5";
	printf("%d - ft_atoi\n%d - true atoi", ft_atoi(num), atoi(num));
	return (0);
}
