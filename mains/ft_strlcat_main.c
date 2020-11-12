/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 05:09:08 by emurky            #+#    #+#             */
/*   Updated: 2020/11/10 05:09:10 by emurky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//size_t ft_strlcat(dst, src, siz)
//	char *dst;
//	const char *src;
//	size_t siz;
//{
//	register char *d = dst;
//	register const char *s = src;
//	register size_t n = siz;
//	size_t dlen;
//
//	/* Find the end of dst and adjust bytes left but don't go past end */
//	while (n-- != 0 && *d != '\0')
//		d++;
//	dlen = d - dst;
//	n = siz - dlen;
//
//	if (n == 0)
//		return(dlen + ft_strlen(s));
//	while (*s != '\0') {
//		if (n != 1) {
//			*d++ = *s;
//			n--;
//		}
//		s++;
//	}
//	*d = '\0';
//
//	return(dlen + (s - src));	/* count does not include NUL */
//}
//
//size_t	ft_strlen(const char *s)
//{
//	size_t counter;
//
//	counter = 0;
//	while (*s)
//	{
//		counter++;
//		s++;
//	}
//	return (counter);
//}

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char		*d;
	const char	*s;
	size_t		dstlen;
	size_t		len;

	d = dst;
	s = src;
	len = dstsize;
	while (*d && len--)
		d++;
	dstlen = d - dst;
//	printf("%lu - dstlen\n", dstlen);
	len = dstsize - dstlen;
	if (!len)
		return (dstlen + ft_strlen(src));
	while (*s)
	{
		if (len != 1)
		{
			*d++ = *s;
			len--;
		}
		s++;
	}
	*d = '\0';
	return (dstlen + s - src);
}
//
//int	main()
//{
//
//	char *s1 = malloc(20);
////	char *s2 = malloc(20);
//	char *s3 = malloc(20);
////	char *s4 = malloc(20);
//
//	ft_strlcpy(s1, "salaaaaaaam", 12);
//	ft_strlcpy(s3, "salaaaaaaam", 12);
////	s1[] = "salam"; // 5
////	s2[] = " aleykumaaa"; // 11
////	*s3 = "salam";
////	*s4 = " aleykumaaa";
//	printf("%lu - true strlcat\n%zu - ft_strlcat\n%s - true strlcat\n%s - ft_strlcat\n", strlcat(s1, " aleykumaaa", 14), ft_strlcat(s3, " aleykumaaa", 14), s1, s3);
//}
