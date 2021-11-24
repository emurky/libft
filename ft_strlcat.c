/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurky <emurky@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 05:09:08 by emurky            #+#    #+#             */
/*   Updated: 2021/09/14 17:49:10 by emurky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	concatenate_dst_src(char **dptr, const char **sptr, size_t *len)
{
	while (**sptr)
	{
		if (*len != 1)
		{
			**dptr = **sptr;
			(*dptr)++;
			(*len)--;
		}
		(*sptr)++;
	}
	**dptr = '\0';
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char		*dptr;
	const char	*sptr;
	size_t		dstlen;
	size_t		append_len;

	if (!dst || !src)
		return (0);
	dptr = dst;
	sptr = src;
	append_len = dstsize;
	while (append_len-- != 0 && *dptr)
		dptr++;
	dstlen = dptr - dst;
	append_len = dstsize - dstlen;
	if (!append_len)
		return (dstlen + ft_strlen(src));
	concatenate_dst_src(&dptr, &sptr, &append_len);
	return (dstlen + sptr - src);
}
