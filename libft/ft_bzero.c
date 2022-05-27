/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 20:59:28 by aalseri           #+#    #+#             */
/*   Updated: 2022/02/24 20:59:34 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	int		i;

	i = 0;
	str = s;
	while (n--)
		str[i++] = '\0';
	s = str;
}
/*
int main()
{
	char str[5] = "where";
	printf("hey first: %s\n", str);
	ft_bzero(str,1);
	//bzero(str,1);
	printf("hey after: %s\n", str);
}*/
