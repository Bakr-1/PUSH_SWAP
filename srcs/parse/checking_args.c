/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:09:48 by aalseri           #+#    #+#             */
/*   Updated: 2022/09/08 17:57:43 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	numbercheck(char **numstr)
{
	int		i;
	char	*str;

	str = *numstr;
	i = 0;
	while (str[i])
	{
		if ((str[i] == '-' || str[i] == '+') && !ft_isdigit(str[i - 1]))
		{
			if (!ft_isdigit(str[i + 1]))
				return (TRUE);
			while (ft_isdigit(str[i + 1]))
				i++;
			if ((str[i] == '-' || str[i] == '+') && str[i] && str[i] != 32)
				return (TRUE);
		}
		if (!ft_isdigit(str[i]) && str[i] != ' ' && str[i] != '-' && str[i])
			return (TRUE);
		if ((str[i] == '-' || str[i] == '+') && ft_isdigit(str[i - 1]))
			return (TRUE);
		i++;
	}
	return (FALSE);
}

int	number_arg(char const *str, char set)
{
	int	i[2];

	i[0] = 0;
	i[1] = 0;
	while (*str)
	{
		if ((*str != set) && !i[1])
		{
			i[1] = 1;
			i[0]++;
		}
		else if (*str == set)
			i[1] = 0;
		str++;
	}
	return (i[0]);
}

int	check_array(int *array, int value, int argc)
{
	int	i;

	i = 0;
	while (i <= argc)
	{
		if (array[i] == value)
			return (TRUE);
		i++;
	}
	return (FALSE);
}
