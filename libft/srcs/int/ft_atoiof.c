/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoiof.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 19:54:45 by aalseri           #+#    #+#             */
/*   Updated: 2022/06/26 14:36:44 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_atoiof(const char *str, int *value)
{
	int		sign;
	int		of_flag;
	size_t	val;

	of_flag = 0;
	sign = 1;
	val = (size_t)value;
	val = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (ft_isdigit(*str) && !of_flag)
		val = val * 10 + (*str++ - '0');
	if ((val > 2147483648 && sign == -1) || (val > 2147483647 && sign == 1))
		of_flag = 1;
	val = val * sign;
	*value = val;
	return (of_flag);
}
