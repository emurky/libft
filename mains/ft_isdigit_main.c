/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 20:29:14 by emurky            #+#    #+#             */
/*   Updated: 2020/11/02 20:29:17 by emurky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int		ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}

int		main(void)
{
	int digit = '9';
	printf("%d - true isdigit\n%d - ft_isdigit\n", isdigit(digit), ft_isdigit(digit));
	return (0);
}
