/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 21:05:37 by aalseri           #+#    #+#             */
/*   Updated: 2022/06/26 14:40:17 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	if (s1 == s2 || !*s2)
		return ((char *)s1);
	i = 0;
	while (s1[i] && i < n)
	{
		j = 0;
		if (s1[i] == s2[j])
		{
			while ((s1[i + j] == s2[j]) && (i + j) < n)
			{
				j++;
				if (s2[j] == '\0')
					return ((char *)s1 + i);
			}
		}
		i++;
	}
	return (0);
}
/*
int main(void)
{
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	char * empty = (char*)"";
	printf("%s",ft_strnstr(haystack, "abcd", 9));
	write(1, "\n", 1);
	return (0);
}
*/
