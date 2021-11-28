# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emurky <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/02 18:08:11 by emurky            #+#    #+#              #
#    Updated: 2020/11/17 04:37:09 by emurky           ###   ########.fr        #
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
				ft_putchar_fd.c ft_putstr_fd.c	ft_putendl_fd.c	ft_putnbr_fd.c

OBJS 			= $(SRCS:.c=.o)
DEPS			= $(SRCS:.c=.d)

B_SRCS			= \
				ft_lstnew.c				ft_lstadd_front.c		ft_lstsize.c \
				ft_lstlast.c			ft_lstadd_back.c		ft_lstdelone.c \
				ft_lstclear.c			ft_lstiter.c			ft_lstmap.c \
				\
				ft_isspace_bonus.c		ft_isblank_bonus.c \
				ft_putchar_bonus.c		ft_putstr_bonus.c \
				ft_putendl_bonus.c		ft_putnbr_bonus.c \
				ft_nbrlen_bonus.c		ft_charin_bonus.c \
				\
				ft_memccpy_bonus.c

B_OBJS			= $(B_SRCS:.c=.o)
B_DEPS			= $(B_SRCS:.c=.d)

NAME 			= libft.a

CC 				= gcc
RM 				= rm -f
AR				= ar -rcs
CFLAGS 			= -Wall -Wextra -Werror -g #-fsanitize=address
CPPFLAGS		= -I. -MMD

all:			$(NAME)

$(OBJS):		Makefile
$(B_OBJS):		Makefile

$(NAME):		$(OBJS)
				$(AR) $(NAME) $(OBJS)

bonus:
				@make OBJS="$(OBJS) $(B_OBJS)" $(NAME)

-include		$(DEPS) $(B_DEPS)

clean:
				$(RM) $(OBJS) $(B_OBJS) $(DEPS) $(B_DEPS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

z:
				make -C . -j12 bonus
				make -C . clean
				gcc -Wall -Werror -Wextra -g -fsanitize=address -o test main.c -L. -lft

sc:
				rm -rf *.o *.a */*.o */*.a */*.d *.d a.out 'libft '* 'test '* test

.PHONY:			all clean fclean re bonus
.SILENT:
