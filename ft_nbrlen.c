/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurky <emurky@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 03:17:48 by emurky            #+#    #+#             */
/*   Updated: 2021/11/28 09:23:18 by emurky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_nbrlen(long int n)
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
