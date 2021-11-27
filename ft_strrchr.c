/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurky <emurky@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 23:23:36 by emurky            #+#    #+#             */
/*   Updated: 2021/09/14 17:50:20 by emurky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*ret;

	if (!str)
		return (NULL);
	ret = NULL;
	while (1)
	{
		if (c == *str)
			ret = (char *)str;
		if (!(*str))
			break ;
		str++;
	}
	return (ret);
}
