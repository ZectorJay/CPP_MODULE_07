# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/03 15:52:53 by hmickey           #+#    #+#              #
#    Updated: 2021/07/30 11:12:36 by hmickey          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	a.out

SRCS		=	main.cpp

OBJS		=	${SRCS:.cpp=.o}

CC			= clang++ -std=c++98

RM			= rm -f

CPPFLAGS	= -Wall -Wextra -Werror 

.cpp.o:
				${CC} ${CPPFLAGS} -c $< -o ${<:.cpp=.o}

.PHONY:			all clean fclean re

$(NAME):		${OBJS}
				${CC} ${OBJS}

all:			${NAME}

clean:
				${RM} ${OBJS}

fclean:			clean
				${RM} ${NAME}

re:				fclean all