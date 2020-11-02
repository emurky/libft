# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emurky <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/02 18:08:11 by emurky            #+#    #+#              #
#    Updated: 2020/11/02 18:57:31 by emurky           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS 			= $(wildcard *.c)

OBJS 			= ${SRCS:.c=.o}

NAME 			= libft.a

CC 				= gcc
RM 				= rm -f

CFLAGS 			= -Wall -Wextra -Werror

${NAME}:		${OBJS}
				${CC} ${CFLAGS} -o ${NAME} ${OBJS}

all:			${NAME}

clean:
				${RM} ${OBJS}

bonus:

fclean:			clean
				${RM} ${NAME}

re:				fclean all

.PHONY:			all clean fclean re
#.SILENT:

