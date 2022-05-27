/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 21:03:50 by aalseri           #+#    #+#             */
/*   Updated: 2022/05/22 11:42:12 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_undo_alloc(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		s[i] = NULL;
		i++;
	}
	return (NULL);
}

static int	count_words(char const *str, char set)
{
	int	i;
	int	x;

	x = 0;
	i = 0;
	while (*str)
	{
		if ((*str != set) && !x)
		{
			x = 1;
			i++;
		}
		else if (*str == set)
			x = 0;
		str++;
	}
	return (i);
}

static char	**write_split(char **split, char const *str, char set)
{
	ssize_t	i[3];

	i[0] = 0;
	i[1] = 0;
	i[2] = -1;
	while (i[0] <= (ssize_t)ft_strlen(str))
	{
		if (str[i[0]] != set && i[2] < 0)
			i[2] = i[0];
		else if ((str[i[0]] == set || i[0] == (ssize_t)ft_strlen(str)) \
		&& i[2] >= 0)
		{
			split[i[1]] = ft_substr(str, i[2], (i[0] - i[2]));
			if (!split[i[1]])
				return (ft_undo_alloc(split));
			i[2] = -1;
			i[1]++;
		}
		i[0]++;
	}
	split[i[1]] = NULL;
	return (split);
}

char	**ft_split(char const *str, char set)
{
	char	**split;

	if (!str)
		return (NULL);
	split = malloc(sizeof(char *) * (count_words(str, set) + 1));
	if (!split)
		return (NULL);
	split = write_split(split, str, set);
	return (split);
}
