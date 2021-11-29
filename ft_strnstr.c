/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurky <emurky@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 02:02:50 by emurky            #+#    #+#             */
/*   Updated: 2021/11/28 09:24:21 by emurky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t ln)
{
	size_t	needle_len;

	if (!(*needle))
		return ((char *)hay);
	needle_len = ft_strlen(needle);
	while (*hay && needle_len <= ln)
	{
		if (ln-- < 1 || !(*hay))
			return (NULL);
		if (!ft_strncmp(hay, needle, needle_len))
			return ((char *)hay);
		hay++;
	}
	return (NULL);
}
