/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:54:45 by aalseri           #+#    #+#             */
/*   Updated: 2022/09/08 17:58:08 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_max(t_swap *a)
{
	int	x;
	int	i;
	int	j;

	j = 0;
	i = 0;
	x = a->stackb[0];
	while (i < a->sizeb)
	{
		if (a->stackb[i] > x)
		{
			x = a->stackb[i];
			j = i;
		}
		i++;
	}
	return (j);
}

int	find_min(t_swap *a)
{
	int	x;
	int	i;
	int	j;

	j = 0;
	i = 0;
	x = a->stacka[0];
	while (i < a->sizea)
	{
		if (a->stacka[i] < x)
		{
			x = a->stacka[i];
			j = i;
		}
		i++;
	}
	return (j);
}
