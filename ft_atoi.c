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
	int					minus;
	unsigned long int	number;

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
	return ((int)(number * minus));
}
