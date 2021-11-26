/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurky <emurky@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 01:44:35 by emurky            #+#    #+#             */
/*   Updated: 2021/09/14 17:48:47 by emurky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	srclen;
	char	*strdupped;

	srclen = ft_strlen(src);
	strdupped = malloc(srclen * sizeof(char) + 1);
	if (!src || !strdupped)
		return (NULL);
	ft_strlcpy(strdupped, src, srclen + 1);
	return (strdupped);
}
