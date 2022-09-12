/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 21:58:55 by aalseri           #+#    #+#             */
/*   Updated: 2022/06/23 16:57:38 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <string.h>
# include "./libft.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	*ft_strjoin_gnl(char *s1, char *s2);
char	*ft_strnl(char *s);
char	*get_read(int fd, char *s);
char	*get_next_line(int fd);
char	*stringdup(char *s);
char	*get_str(char *s);
size_t	ft_strlen_gnl(char *s);
char	*ft_free_gnl(char **s);

#endif
