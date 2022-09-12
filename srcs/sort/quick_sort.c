/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 17:43:23 by aalseri           #+#    #+#             */
/*   Updated: 2022/09/08 17:58:00 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	partition(int *array, int low, int high)
{
	int	pivot;
	int	i;
	int	j;

	j = low;
	i = (low - 1);
	pivot = array[high];
	while (j < high)
	{
		if (array[j] <= pivot)
		{
			i++;
			num_swap(&array[i], &array[j]);
		}
			j++;
	}
	num_swap(&array[i + 1], &array[high]);
	return (i + 1);
}

void	quicksort(int *array, int low, int high)
{
	int	pi;

	if (low < high)
	{
		pi = partition(array, low, high);
		quicksort(array, low, pi - 1);
		quicksort(array, pi + 1, high);
	}
}
