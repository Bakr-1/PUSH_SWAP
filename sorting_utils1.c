/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 00:16:02 by aalseri           #+#    #+#             */
/*   Updated: 2022/05/22 16:21:2 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_swap	*allocate_stackab(t_swap *array)
{
	array->stackb = (int *)malloc(sizeof(int) * (array->n_arg + 1));
	if (!array->stackb)
		ft_error("failed to allocate stack b", array);
	array->stacka = (int *)malloc(sizeof(int) * (array->n_arg + 1));
	if (!array->stacka)
		ft_error("failed to allocate stack a", array);
	ft_memcpy(array->stacka, array->array, (array->n_arg) * sizeof(int));
	array->sizea = array->n_arg;
	free(array->array);
	array->array = 0;
	return (array);
}

int	is_sorted(t_swap array)
{
	int	i;

	i = 0;
	while (i < array.n_arg - 1)
	{
		if (array.array[i + 1] < array.array[i])
			return (FALSE);
		i++;
	}
	return (TRUE);
}

t_swap	*run(char *op, t_swap *a)
{
	if (!ft_strncmp(op, "pa", 2))
		a = pa(a);
	else if (!ft_strncmp(op, "pb", 2))
		a = pb(a);
	else if (!ft_strncmp(op, "sa", 2))
		a = sa(a);
	else if (!ft_strncmp(op, "sb", 2))
		a = sb(a);
	else if (!ft_strncmp(op, "ra", 2))
		a = ra(a);
	else if (!ft_strncmp(op, "rb", 2))
		a = rb(a);
	else if (!ft_strncmp(op, "rra", 3))
		a = rra(a);
	else if (!ft_strncmp(op, "rrb", 3))
		a = rrb(a);
	return (a);
}

t_swap	*allocate_big(t_swap *array)
{
	array->sortedarray = (int *)malloc(sizeof(int) * (array->sizea));
	if (!array->sortedarray)
		ft_error("failed to allocate sorted stack", array);
	ft_memcpy(array->sortedarray, array->stacka, array->sizea * sizeof(int));
	array->sizes = array->sizea;
	return (array);
}
