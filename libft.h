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
# include <stdlib.h>

//PART I
void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
size_t				ft_strlen(const char *s);
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
