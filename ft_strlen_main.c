/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 19:40:11 by emurky            #+#    #+#             */
/*   Updated: 2020/11/02 19:40:40 by emurky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned long int	ft_strlen(const char *s)
{
	int counter;
	counter = 0;
	while (*s)
	{
		counter++;
		s++;
	}
	return (counter);
}

int		main(void)
{
	char *str = "privet";
	printf("ft_strlen - %lu\ntrue strlen - %lu\n", ft_strlen(str), strlen(str));
	return (0);
}
