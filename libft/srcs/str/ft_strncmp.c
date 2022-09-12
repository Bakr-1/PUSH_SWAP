/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 21:05:29 by aalseri           #+#    #+#             */
/*   Updated: 2022/06/26 14:40:17 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
		i++;
	if (i < n)
		return (((unsigned char)(s1[i]) - (unsigned char)(s2[i])));
	else
		return (0);
}

/*
int main(int ac, char **av)
{
	char *s1 = "test\200";
	char *s2 = "test\0";
	int i = 6;
	printf("ft_strncmp: %d\n", ft_strncmp(s1,s2,i));
	printf("strncmp: %d",  strncmp(s1,s2,i));
   
}*/
