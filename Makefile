# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emurky <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/02 18:08:11 by emurky            #+#    #+#              #
#    Updated: 2020/11/13 01:31:32 by emurky           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS 			= $(wildcard *.c)

OBJS 			= $(SRCS:.c=.o)

NAME 			= libft.a

CC 			= gcc
RM 			= rm -f
AR			= ar rcs
RLIB   			= ranlib
CFLAGS 			= -Wall -Wextra -Werror

$(NAME):		$(OBJS)
			$(AR) $(NAME) $(OBJS)
			$(RLIB) $(NAME)

all:			$(NAME)

clean:
			$(RM) $(OBJS) a.out



fclean:			clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:			all clean fclean re
#.SILENT:



#			$(CC) $(CFLAGS) -c $(OBJS)
			
