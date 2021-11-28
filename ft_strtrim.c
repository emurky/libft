/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurky <emurky@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 21:35:12 by emurky            #+#    #+#             */
/*   Updated: 2021/09/14 17:50:27 by emurky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*trimmed;
	const char	*end;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	end = s1;
	while (*end)
		end++;
	if (!(end - s1))
		return (ft_strdup(""));
	while (ft_strchr(set, *end))
		end--;
	trimmed = malloc(sizeof(char) * (++end - s1 + 1));
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, s1, end - s1 + 1);
	return (trimmed);
}
