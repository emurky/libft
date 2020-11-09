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
#include <limits.h>
#include "../libft/ft_strlen.c"

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
//	int i;
	int minus;
	unsigned long long int number;

//	i = 0;
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
		number = number * 10 + *str++ - '0';
//		i++;
	}
	printf ("%llu\n", number);
	if (number >= LONG_MAX && minus == 1)
		number = -1;
	else if ((number > LONG_MAX) && minus == -1)
		number = 0;
//	printf("xuynya %d\n", (number >= LONG_MAX));
//	printf ("%llu\n", number);
	return ((int)(number * minus));
}

int			main(void)
{
	char *num = "9999999999999999999999999999";
	printf("%s - chislo\n%lu - dlina chisla\n%d - ft_atoi\n%d - true atoi\n%lu", num, ft_strlen(num), ft_atoi(num), atoi(num), LONG_MAX);
	return (0);
}

//static int	ft_isspace(char c)
//{
//	return (c == ' ' || c == '\n' || c == '\t'
//			|| c == '\v' || c == '\f' || c == '\r');
//}
//
//static int	ft_isdigit(int c)
//{
//	return ('0' <= c && c <= '9');
//}
//
//int			ft_atoi(const char *str)
//{
//	int					numlen;
//	int					minus;
//	unsigned long int	number;
//
//	numlen = 1;
//	number = 0;
//	minus = 1;
//	while (ft_isspace(*str))
//		str++;
//	if (*str == '-' || *str == '+')
//	{
//		if (*str++ == '-')
//			minus = -1;
//	}
//	while (*str && ft_isdigit(*str))
//		number = number * 10 + *str - '0';
//	if (numlen >= 20)
//	{
//		if (minus == 1)
//			number = -1;
//		else if (minus == -1)
//			number = 0;
//	}
//	return ((int)(number * minus));
//}
