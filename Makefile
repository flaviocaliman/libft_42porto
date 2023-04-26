# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgomes-c <fgomes-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/12 18:42:55 by fgomes-c          #+#    #+#              #
#    Updated: 2023/04/26 20:03:34 by fgomes-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlcpy.c ft_strlcat.c ft_strncmp.c ft_toupper.c ft_tolower.c ft_strchr.c \
		ft_strrchr.c ft_strnstr.c ft_memset.c ft_memcpy.c ft_memmove.c ft_memchr.c \
		ft_memcmp.c ft_bzero.c ft_atoi.c ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c \
		ft_strtrim.c ft_split.c ft_putchar_fd.c
OBJS = ${SRC:.c=.o}
HEADER = libft.h
INCLUDE = -I .
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
%.o:%.c
		${CC} ${CFLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS} ${HEADER}

all:    ${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

tclean: clean
		${RM} test

re: fclean all

test: main.c ${NAME}
		${CC} ${CFLAGS} ${INCLUDE} main.c ${NAME} -o test

.PHONY: all clean fclean re