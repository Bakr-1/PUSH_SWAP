/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 21:00:30 by aalseri           #+#    #+#             */
/*   Updated: 2022/06/26 14:36:47 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	nbr_len(long int nbr)
{
	int	i;

	i = 0;
	if (nbr < 0)
		i++;
	while (nbr)
	{
		nbr = (nbr / 10);
		i++;
	}
	return (i);
}

char	*writing_str(char *str, long nbr, int i)
{
	while (nbr > 0)
	{
		str[i] = (nbr % 10) + '0';
		nbr /= 10;
		i--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int			i;
	char		*str;
	long int	nbr;

	nbr = n;
	i = nbr_len(n);
	if (!n)
		return (ft_strdup("0"));
	str = malloc(i + 1);
	if (!str)
		return (0);
	str[i--] = '\0';
	if (n == 0)
		return ("0");
	if (n < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	writing_str(str, nbr, i);
	return (str);
}
