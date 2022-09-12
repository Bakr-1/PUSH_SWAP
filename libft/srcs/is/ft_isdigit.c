/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 21:00:13 by aalseri           #+#    #+#             */
/*   Updated: 2022/02/24 21:00:16 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*
#include <unistd.h>

int main(int ac, char **av)
{
	if (ac > 1)
		printf("test: %d\n", ft_isdigit(av[1][0]));
	write(1, "\n", 1);    
}*/
