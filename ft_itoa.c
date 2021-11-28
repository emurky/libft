/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurky <emurky@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 02:55:27 by emurky            #+#    #+#             */
/*   Updated: 2021/09/14 17:39:38 by emurky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_static_nbrlen(long int n)
{
	size_t	len;

	len = 1;
	n /= 10;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	size_t			len;
	unsigned int	abs_value;

	len = ft_static_nbrlen(n);
	if (n < 0)
	{
		abs_value = -1 * n;
		len++;
	}
	else
		abs_value = n;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len)
	{
		len--;
		str[len] = abs_value % 10 + '0';
		abs_value /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
