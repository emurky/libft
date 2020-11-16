/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 02:55:27 by emurky            #+#    #+#             */
/*   Updated: 2020/11/16 02:55:29 by emurky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char			*str;
	size_t			len;
	unsigned int	un;

	len = ft_nbrlen(n);
	if (n < 0)
	{
		un = -1 * n;
		len++;
	}
	else
		un = n;
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len] = '\0';
	while (len)
	{
		str[--len] = un % 10 + '0';
		un /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
