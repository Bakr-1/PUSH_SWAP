/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 19:54:45 by aalseri           #+#    #+#             */
/*   Updated: 2022/06/26 14:36:30 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	size_t	value;

	sign = 1;
	value = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (ft_isdigit(*str))
		value = value * 10 + (*str++ - '0');
	if (value > 2147483648 && sign == -1)
		return (0);
	if (value > 2147483647 && sign == 1)
		return (-1);
	return (value * sign);
}
