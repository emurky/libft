/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurky <emurky@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 00:28:18 by emurky            #+#    #+#             */
/*   Updated: 2021/11/28 09:24:58 by emurky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	strlen;
	size_t	sublen;

	if (!s)
		return (NULL);
	strlen = ft_strlen(s);
	if (start >= strlen)
		sublen = 0;
	else if (len <= strlen)
		sublen = len;
	else
		sublen = strlen - start;
	substring = malloc(sizeof(char) * (sublen + 1));
	if (!substring)
		return (NULL);
	ft_strlcpy(substring, s + start, sublen + 1);
	return (substring);
}
