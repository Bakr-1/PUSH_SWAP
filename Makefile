# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalseri <aalseri@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/24 21:10:12 by aalseri           #+#    #+#              #
#    Updated: 2022/05/27 18:07:03 by aalseri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a

SRCS = main.c checking_args.c validation_input.c \
	second_part_setting.c operation_utils1.c \
	operation_utils2.c sorting_utils1.c \
	sorting_utils2.c sorting_utils3.c error_utils1.c quick_sort.c

OBJS = ${SRCS:.c=.o}

INCLUDES = push_swap.h

CC = gcc

FLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME} :
	@${MAKE} -C libft
	$(CC) $(FLAGS) -o push_swap ${SRCS} ./libft/libft.a
	@${MAKE} clean -C libft

onlypush: 
	$(CC) -g -o push_swap ${SRCS} ./libft/libft.a

clean:
	rm -rf ${OBJS}
	@${MAKE} clean -C libft

fclean: clean
	rm -rf ${NAME} push_swap
	@${MAKE} fclean -C libft


re: fclean all
	${MAKE} re -C ./libft

cltr: fclean
	rm -rf ${NAME} push_swap push_swap.dSYM 

.PHONY: all clean fclean re
