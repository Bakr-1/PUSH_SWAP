/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 01:58:51 by aalseri           #+#    #+#             */
/*   Updated: 2022/09/08 17:58:06 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_quit(t_swap *a)
{
	a = free_struct(a);
	a = free_struct1(a);
	exit(FALSE);
}

t_swap	*sort_3(t_swap *a)
{
	if (a->stacka[0] > a->stacka[1] && a->stacka[1] < a->stacka[2] \
	&& a->stacka[2] < a->stacka[0])
		a = run(SA, a);
	else if (a->stacka[0] < a->stacka[1] && a->stacka[1] < a->stacka[2] \
	&& a->stacka[2] > a->stacka[0])
	{
		a = run(SA, a);
		a = run(RRA, a);
	}
	else if (a->stacka[0] > a->stacka[1] && a->stacka[1] < a->stacka[2] \
	&& a->stacka[2] > a->stacka[0])
		a = run(RA, a);
	else if (a->stacka[0] < a->stacka[1] && a->stacka[1] > a->stacka[2] \
	&& a->stacka[2] < a->stacka[0])
	{
		a = run(SA, a);
		a = run(RA, a);
	}
	else if (a->stacka[0] < a->stacka[1] && a->stacka[1] > a->stacka[2] \
	&& a->stacka[2] > a->stacka[0])
		a = run(RRA, a);
	return (a);
}

t_swap	*push_b(t_swap *a, int x)
{
	int	i;

	i = 0;
	while (a->sizea)
	{
		if (a->stacka[a->sizea - 1] <= a->sortedarray[i])
		{
			a = run(PB, a);
			i++;
		}
		if ((i + x) >= a->sizes)
			x--;
		else if (a->stacka[a->sizea - 1] <= a->sortedarray[(i + x)])
		{
			a = run(PB, a);
			a = run(RB, a);
			i++;
		}
		else
			a = run(RA, a);
	}
	return (a);
}

t_swap	*push_back_a(t_swap *a)
{
	while (a->sizeb)
		a = rot_max(a);
	return (a);
}

t_swap	*sort_big(t_swap *a)
{
	int	x;

	x = 0;
	allocate_big(a);
	quicksort(a->sortedarray, 0, a->sizes - 1);
	a->sizes--;
	if (a->sizea <= 150)
		x = 15;
	else
		x = 30;
	push_b(a, x);
	push_back_a(a);
	ft_quit(a);
	return (a);
}
