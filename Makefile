# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emurky <emurky@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/02 18:08:11 by emurky            #+#    #+#              #
#    Updated: 2021/11/28 10:32:51 by emurky           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS			= \
				ft_memset.c		ft_bzero.c		ft_memcpy.c		ft_memmove.c \
				ft_memchr.c		ft_memcmp.c		ft_strlen.c \
				ft_strlcpy.c	ft_strlcat.c	ft_strchr.c		ft_strrchr.c \
				ft_strnstr.c	ft_strncmp.c	ft_atoi.c		ft_isalpha.c \
				ft_isdigit.c	ft_isalnum.c	ft_isascii.c	ft_isprint.c \
				ft_toupper.c	ft_tolower.c \
				\
				ft_calloc.c		ft_strdup.c \
				\
				ft_substr.c		ft_strjoin.c	ft_strtrim.c	ft_split.c \
				ft_itoa.c		ft_strmapi.c	ft_striteri.c \
				ft_putchar_fd.c ft_putstr_fd.c	ft_putendl_fd.c	ft_putnbr_fd.c \
				\
				ft_lstnew.c			ft_lstadd_front.c		ft_lstsize.c \
				ft_lstlast.c		ft_lstadd_back.c		ft_lstdelone.c \
				ft_lstclear.c		ft_lstiter.c			ft_lstmap.c \
				\
				ft_isspace.c	ft_isblank.c	ft_charin.c		ft_nbrlen.c \
				ft_putchar.c	ft_putstr.c		ft_putendl.c	ft_putnbr.c \
				ft_max.c		ft_min.c		ft_memccpy.c	ft_itoa_base.c

OBJS 			= $(SRCS:.c=.o)
DEPS			= $(SRCS:.c=.d)

NAME 			= libft.a

CC 				= gcc
RM 				= rm -f
AR				= ar -rcs
CFLAGS 			= -Wall -Wextra -Werror
CPPFLAGS		= -I. -MMD

all:			$(NAME)

$(OBJS):		Makefile

$(NAME):		$(OBJS)
				$(AR) $(NAME) $(OBJS)

-include		$(DEPS)

clean:
				$(RM) $(OBJS) $(DEPS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

faster:
				make -C . fclean
				make -C . -j12

test:
				make -C . -j12
				make -C . clean
				gcc -Wall -Werror -Wextra -o test main.c -L. -lft

sc:
				rm -rf *.o *.a *.d a.out 'libft '* 'test '* test

.PHONY:			all clean fclean re faster test sc
# .SILENT:
