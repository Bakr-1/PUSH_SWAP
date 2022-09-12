/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 21:03:01 by aalseri           #+#    #+#             */
/*   Updated: 2022/06/26 14:39:52 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	size_t			i;
	unsigned char	*c;

	c = (unsigned char *)ptr;
	i = 0;
	while (n-- > 0)
	{
		c[i++] = x;
	}
	return (ptr);
}
/*
void printArray(int arr[], int n)
{
   for (int i=0; i<n; i++)
	  printf("%d ", arr[i]);
   printf("\n");
}

int     main()
{
	char str[50] = "hello what is going on";
	int t = 100;
	int arr[t];

	int x = 1;
	size_t n = 9;
	// printArray(arr, 100);
	printf("%s\n", str);
	ft_memset(str, '.', n*sizeof(char));
	printf("%s\n", str);
	// printArray(arr, 10);
}*/
