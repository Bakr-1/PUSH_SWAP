/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   second_part_setting.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 22:52:10 by aalseri           #+#    #+#             */
/*   Updated: 2022/09/08 17:58:58 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_swap	*rot_min(t_swap *a)
{
	int	j[2];

	j[0] = find_min(a);
	j[1] = j[0];
	if (j[0] >= a->sizea / 2)
	{
		while (j[1]++ < a->sizea - 1)
			a = run(RA, a);
	}
	if (j[0] < a->sizea / 2)
	{
		while (j[1]-- > -1)
			a = run(RRA, a);
	}
	a = run(PB, a);
	return (a);
}

t_swap	*rot_max(t_swap *a)
{
	int	j[2];

	j[0] = find_max(a);
	j[1] = j[0];
	if (j[0] >= a->sizeb / 2)
	{
		while (j[1]++ < a->sizeb - 1)
			a = run(RB, a);
	}
	if (j[0] < a->sizeb / 2)
	{
		while (j[1]-- > -1)
			a = run(RRB, a);
	}
	a = run(PA, a);
	return (a);
}

void	sort_more(t_swap *a)
{
	while (a->sizea > 3)
		a = rot_min(a);
	a = sort_3(a);
	while (a->sizeb)
		a = run(PA, a);
	ft_quit(a);
}

t_swap	*sort_2_or_more(t_swap *a)
{
	if (a->sizea == 2)
	{
		a = run(SA, a);
		ft_quit(a);
	}
	if (a->sizea == 3)
	{
		a = sort_3(a);
		ft_quit(a);
	}
	if (a->sizea > 3)
		sort_more(a);
	return (a);
}

t_swap	*_sorting(t_swap *array)
{
	reverse_array(array->array, array->n_arg);
	array = allocate_stackab(array);
	if (array->sizea >= 2 && array->sizea <= 10)
		sort_2_or_more(array);
	else if (array->sizea > 10)
		sort_big(array);
	return (array);
}
