/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 20:59:56 by aalseri           #+#    #+#             */
/*   Updated: 2022/02/24 20:59:59 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
/*
#include <unistd.h>
#include <stdio.h>

int main (int ac, char **av)
{
//    printf("%d\n", ft_isalpha('f'));
	if (ac > 1)
	{
		printf("test: %d\n", ft_isalpha(av[1][0]));
	}
	write(1,"\n",1);
}*/
