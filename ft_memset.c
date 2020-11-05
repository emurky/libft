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

//void	*ft_memset(char *b, int c, unsigned long int len)
//{
//	unsigned long int	i;
//
//	i = 0;
//	while (b[i] && i <= len)
//		b[i++] = (unsigned char)c;
//	return (b);
//}

int		main(void)
{
	char *str = "salam aleykum";
	printf("%s - true memset", memset(str, 'a', 6));
	return (0);
}
