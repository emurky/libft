/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 04:15:12 by emurky            #+#    #+#             */
/*   Updated: 2020/11/05 04:15:14 by emurky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, unsigned long int len)
{
//	unsigned long int	i;
	unsigned char *start;

//	i = 0;
	start = b;
	while (len--)
	{
		*start++ = (unsigned char)c;
//		start++;
//		len--;
	}
	return (b);
}

int		main(void)
{
	char str[15] = "salam aleykum";
	void *b =&str[0];
	printf("%s - true memset\n%s - ft_memset\n", memset(b, 'z', 3), ft_memset(b, 'z', 3));
	return (0);
}
