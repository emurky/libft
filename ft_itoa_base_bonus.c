/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurky <emurky@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:30:28 by emurky            #+#    #+#             */
/*   Updated: 2021/11/29 14:30:33 by emurky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_static_nbrlen(long int n, size_t base)
{
	size_t	len;

	len = 1;
	n /= base;
	while (n)
	{
		n /= base;
		len++;
	}
	return (len);
}

char	*ft_itoa_base(long int n, size_t base)
{
	char			*str;
	size_t			len;
	size_t			abs_value;
	const char		*hex = "0123456789abcdef";

	len = ft_static_nbrlen(n, base);
	if (n < 0)
		abs_value = -1 * n;
	else
		abs_value = n;
	str = malloc(sizeof(char) * (len + (n < 0 == 1) + 1));
	if (!str || base > 16)
		return (NULL);
	str[len] = '\0';
	while (len)
	{
		len--;
		str[len] = hex[abs_value % base];
		abs_value /= base;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
