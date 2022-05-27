/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigitneg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 03:53:38 by aalseri           #+#    #+#             */
/*   Updated: 2022/04/12 05:16:02 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigitneg(char *c)
{
	int	i;
	int	e;

	e = 0;
	i = 0;
	while (c[i])
	{
		if (c[i] == '-' && !e)
			e++;
		else if (!ft_isdigit(c[i]))
			return (TRUE);
		i++;
	}
	return (FALSE);
}

// int	ft_isdigitneg(char *c)
// {
// 	int	i;
// 	int	b;
// 	int	e;

// 	e = 0;
// 	i = 0;
// 	b = 0;
// 	while (c[i] && !b)
// 	{
// 		if (c[i] == '-' && !e)
// 			e++;
// 		else if (!ft_isdigit(c[i]))
// 			b = 1;
// 		i++;
// 	}
// 	return (b);
// }