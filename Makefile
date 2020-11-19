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


SRCS			= $(wildcard *.c)

OBJS 			= $(SRCS:.c=.o)


NAME 			= libft.a

CC 			= gcc
RM 			= rm -f
AR			= ar rcs
CFLAGS 			= -Wall -Wextra -Werror

all:			$(NAME)


$(NAME):		$(OBJS)
			$(AR) $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS) a.out



fclean:			clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:			all clean fclean re
#.SILENT:



#			$(CC) $(CFLAGS) -c $(OBJS)
			
