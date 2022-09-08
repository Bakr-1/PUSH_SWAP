# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalseri <aalseri@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/24 21:10:12 by aalseri           #+#    #+#              #
#    Updated: 2022/09/08 18:02:34 by aalseri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a

SRCS = srcs/main.c srcs/checking_args.c srcs/validation_input.c \
	srcs/second_part_setting.c srcs/operation_utils1.c \
	srcs/operation_utils2.c srcs/sorting_utils1.c \
	srcs/sorting_utils2.c srcs/sorting_utils3.c srcs/error_utils1.c srcs/quick_sort.c

CFLAGS = -Wall -Wextra -Werror

OBJS = ${SRCS:.c=.o}

INCLUDES = -I includes

CC = gcc

all: ${NAME}

${NAME} : ${OBJS}
	@${MAKE} -sC libft
	$(CC) $(CFLAGS) -o push_swap ${OBJS} ./libft/libft.a

clean:
	rm -rf ${OBJS}
	@${MAKE} clean -sC libft

fclean: clean
	rm -rf ${NAME} push_swap
	@${MAKE} fclean -sC libft


re: fclean all
	${MAKE} re -sC ./libft

cltr: fclean
	rm -rf ${NAME} push_swap push_swap.dSYM

.PHONY: all clean fclean re
