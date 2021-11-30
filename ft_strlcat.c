/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurky <emurky@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 05:09:08 by emurky            #+#    #+#             */
/*   Updated: 2021/11/28 09:23:59 by emurky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*dst_head;

	dst_head = dst;
	while (dstsize && *dst)
	{
		dstsize--;
		dst++;
	}
	if (!dstsize)
		return (dst - dst_head + ft_strlen(src));
	return (dst - dst_head + ft_strlcpy(dst, src, dstsize));
}
