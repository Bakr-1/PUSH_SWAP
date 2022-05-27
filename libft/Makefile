# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalseri <aalseri@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/24 21:10:12 by aalseri           #+#    #+#              #
#    Updated: 2022/05/02 04:12:30 by aalseri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_isdigitneg.c ft_atoiof.c ft_strcat.c\
	ft_atoi.c ft_isalnum.c ft_isdigit.c ft_memmove.c \
	ft_memset.c ft_strlcat.c ft_strncmp.c ft_tolower.c \
	ft_bzero.c ft_isalpha.c ft_isprint.c  ft_strdup.c \
	ft_strchr.c ft_strlcpy.c ft_strnstr.c ft_toupper.c \
	ft_isascii.c ft_memchr.c ft_calloc.c ft_memcmp.c \
	ft_strlen.c ft_strrchr.c ft_memcpy.c ft_isspace.c \
    ft_putchar_fd.c  ft_putstr_fd.c \
    ft_putendl_fd.c ft_putnbr_fd.c \
    ft_strjoin.c ft_strmapi.c \
	ft_substr.c ft_striteri.c ft_strtrim.c \
	ft_itoa.c ft_split.c ./ft_printf/ft_printf.c \
	./ft_printf/ft_crazy.c ./ft_printf/ft_putnbr_base.c \
	./ft_printf/ft_putnbr.c ./ft_printf/ft_putnbr_un.c \
	./ft_printf/ft_putpointer.c ./ft_printf/ft_putstr.c \
	./ft_printf/ft_puthexa.c ./ft_printf/ft_putchar.c

SRCS_BONUS =	ft_lstnew.c ft_lstadd_front.c \
	ft_lstadd_back.c ft_lstlast.c ft_lstsize.c \
	ft_lstsize.c ft_lstlast.c \
	ft_lstiter.c ft_lstdelone.c ft_lstclear.c \
	ft_lstadd_back.c ft_lstmap.c

OBJS = ${SRCS:.c=.o}

OBJS_BONUS = ${SRCS_BONUS:.c=.o}

INCLUDES = libft.h ./ft_printf/ft_printf.h

CC = gcc

FLAGS = -Wall -Wextra -Werror

all: ${NAME}

bonus: ${OBJS_BONUS} ${OBJS}
	@ar rsc ${NAME} ${OBJS_BONUS} ${OBJS}

${NAME} : ${OBJS} ${OBJS_BONUS}
	@ar rsc $@ ${OBJS} ${OBJS_BONUS}

%.o : %.c ${INCLUDES}
	@$(CC) -c $(FLAGS) -o $@ $<
clean:
	@rm -rf ${OBJS} ${OBJS_BONUS}

fclean: clean
	@rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re
