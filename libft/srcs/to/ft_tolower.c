/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 21:06:37 by aalseri           #+#    #+#             */
/*   Updated: 2022/06/26 14:40:18 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_tolower(int i)
{
	if (i >= 'A' && i <= 'Z')
		i = i + 32;
	return (i);
}
/*
#include <stdio.h>

int main(int ac, char **av)
{
	printf("results: %c\n", ft_tolower(av[1][0]));
}*/
