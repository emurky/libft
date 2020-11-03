# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emurky <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/02 18:08:11 by emurky            #+#    #+#              #
#    Updated: 2020/11/03 21:52:34 by emurky           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS 			= $(wildcard *.c)

OBJS 			= $(SRCS:.c=.o)

NAME 			= libft.a

CC 				= gcc
RM 				= rm -f
LIB				= ar rc

CFLAGS 			= -Wall -Wextra -Werror

$(NAME):		$(OBJS)
				$(LIB) $(NAME) $(OBJS)

all:			$(NAME)

clean:
				$(RM) $(OBJS)



fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
#.SILENT:



#				$(CC) $(CFLAGS) -c $(OBJS)
			
