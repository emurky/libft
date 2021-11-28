/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurky <emurky@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 02:03:08 by emurky            #+#    #+#             */
/*   Updated: 2021/09/14 17:48:28 by emurky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t		counter;

	counter = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			counter++;
			while (*s && *s != c)
				s++;
		}
	}
	return (counter);
}

static char	**ft_free_splitted(char **splitted, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
		free(splitted[i++]);
	free(splitted);
	return (NULL);
}

static size_t	wordlen(const char **s, char c)
{
	size_t		word_len;

	word_len = 0;
	while ((*s)[word_len] && (*s)[word_len] != c)
		word_len++;
	if (**s)
		*s += word_len;
	return (word_len);
}

char	**ft_split(char const *s, char c)
{
	size_t		words_count;
	size_t		i;
	char		**splitted;

	if (!s)
		return (NULL);
	i = 0;
	words_count = ft_count_words(s, c);
	splitted = malloc(sizeof(char *) * (words_count + 1));
	if (!splitted)
		return (0);
	splitted[words_count] = NULL;
	while (*s && i < words_count)
	{
		while (*s && *s == c)
			s++;
		splitted[i] = ft_substr(s, 0, wordlen(&s, c));
		if (!splitted[i])
			return (ft_free_splitted(splitted, i));
		i++;
	}
	return (splitted);
}
