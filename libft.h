/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurky <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 21:05:30 by emurky            #+#    #+#             */
/*   Updated: 2020/11/02 21:05:32 by emurky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

//PART I
//memset
//bzero
//memcpy
//memccpy
//memmove
//memchr
//memcmp
unsigned long int	ft_strlen(const char *s);
//strlcpy
//strlcat
//strchr
//strrchr
//strnstr
//strncmp
int					ft_atoi(const char *str);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
//
//calloc
//strdup

//PART II
//ft_substr
//ft_strjoin
//ft_strtrim
//ft_split
//ft_itoa
//ft_strmapi
//ft_putchar_fd
//ft_putstr_fd
//ft_putendl_fd
//ft_putnbr_fd

//BONUS
//ft_lstnew
//ft_lstadd_front
//ft_lstsizej
//ft_lstlast
//ft_lstadd_back
//ft_lstdelone
//ft_lstclear
//ft_lstiter
//ft_lstmap

//MEINE
int					ft_isspace(int c);

#endif
